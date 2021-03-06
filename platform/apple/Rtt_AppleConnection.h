//////////////////////////////////////////////////////////////////////////////
//
// This file is part of the Corona game engine.
// For overview and more information on licensing please refer to README.md 
// Home page: https://github.com/coronalabs/corona
// Contact: support@coronalabs.com
//
//////////////////////////////////////////////////////////////////////////////

#ifndef _Rtt_AppleConnection_H__
#define _Rtt_AppleConnection_H__

#include "Rtt_PlatformConnection.h"

// ----------------------------------------------------------------------------

@class NSString;
@class NSURL;

namespace Rtt
{

// ----------------------------------------------------------------------------

class AppleConnection : public PlatformConnection
{
	public:
		typedef PlatformConnection Super;

	public:
		AppleConnection( const MPlatformServices& platform, const char* url );
		virtual ~AppleConnection();

	public:
		virtual PlatformDictionaryWrapper* Call( const char* method, const KeyValuePair* pairs, int numPairs );
		virtual const char* Error() const;
		virtual const char* Url() const;
		virtual bool Download(const char *urlStr, const char *filename);
		virtual void CloseConnection();

	private:
		NSURL *fUrl;
		NSString *fError;
};

// ----------------------------------------------------------------------------

} // namespace Rtt

// ----------------------------------------------------------------------------

#endif // _Rtt_AppleConnection_H__
