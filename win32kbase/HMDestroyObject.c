__int64 __fastcall HMDestroyObject(void *a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  char v7; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v7, a1);
  if ( (unsigned int)HMMarkObjectDestroyWorker(a1) )
  {
    HMFreeObject(v3, v2, v4, v5);
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v7 )
    gphePrimaryDestroyTarget = 0LL;
  return result;
}
