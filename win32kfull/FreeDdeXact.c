// write access to const memory has been detected, the output may be wrong!
struct _HANDLEENTRY *__fastcall FreeDdeXact(void **a1)
{
  struct _HANDLEENTRY *result; // rax
  _QWORD *v3; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v4, a1);
  result = (struct _HANDLEENTRY *)HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v3 = a1[7];
    if ( v3 )
    {
      if ( (v3[2] & 0x24) != 0 )
        GreDeleteServerMetaFile(v3[6]);
      if ( ((_DWORD)a1[8] & 0x2000) != 0 )
      {
        RemovePublicObject(*((unsigned __int16 *)a1[7] + 37), *((void **)a1[7] + 6));
        *((_DWORD *)a1 + 16) &= ~0x2000u;
      }
      Win32FreePool(a1[7]);
    }
    result = (struct _HANDLEENTRY *)HMFreeObject(a1);
  }
  if ( v4 )
  {
    result = gphePrimaryDestroyTarget;
    gphePrimaryDestroyTarget = 0LL;
  }
  return result;
}
