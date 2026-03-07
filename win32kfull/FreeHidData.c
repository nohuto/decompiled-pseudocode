// write access to const memory has been detected, the output may be wrong!
struct _HANDLEENTRY *__fastcall FreeHidData(char *a1)
{
  struct _HANDLEENTRY *result; // rax
  char v3; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v3, a1);
  result = (struct _HANDLEENTRY *)HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    HMAssignmentUnlock(a1 + 24);
    result = (struct _HANDLEENTRY *)HMFreeObject(a1);
  }
  if ( v3 )
  {
    result = gphePrimaryDestroyTarget;
    gphePrimaryDestroyTarget = 0LL;
  }
  return result;
}
