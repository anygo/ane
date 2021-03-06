#pragma once

namespace Ane
{
typedef unsigned __int64									UniqueID;

#define	SAFE_FREE(p)										if(p){ free(p);p=NULL;}

#define	SAFE_DELETE(p)										if(p){ delete p; p=NULL;}

#define ANE_DELETE(p)										if(p){ delete p;}

#define	SAFE_DELETE_ARRAY(p)								if(p){ delete [] p; p=NULL;}

#define	SAFE_RELEASE(data)									if(data){ (data)->Release();(data)=NULL;}

#define ASSERT(f)											_ASSERT(f)

}//namespace Ane