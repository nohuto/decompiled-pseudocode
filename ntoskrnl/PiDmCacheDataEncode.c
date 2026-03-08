/*
 * XREFs of PiDmCacheDataEncode @ 0x14077DC74
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x1406CC044 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406D0A64 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectCreate @ 0x140868FFC (PiDmObjectCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     _PnpStringFromGuid @ 0x1406881E8 (_PnpStringFromGuid.c)
 *     PiDmGetObject @ 0x1406D0370 (PiDmGetObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmCacheDataEncode(int a1, int *a2, unsigned int a3, int a4, unsigned int a5, __int64 a6)
{
  size_t v6; // r15
  int *v7; // rbp
  unsigned int v9; // edi
  int Object; // eax
  void *Pool2; // rax
  __int128 v13; // xmm0
  wchar_t v14[40]; // [rsp+20h] [rbp-98h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( !a1 )
  {
    *(_DWORD *)a6 = 2;
    return v9;
  }
  if ( !a5 || a1 != a4 )
    goto LABEL_13;
  if ( a1 == 13 )
  {
    v9 = PnpStringFromGuid(a2, v14);
    if ( (v9 & 0x80000000) != 0 )
      return v9;
    a2 = (int *)v14;
  }
  else
  {
    if ( a1 != 18 || !a2 )
    {
LABEL_14:
      if ( (unsigned int)v6 > 8 )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, v6, 1517317712LL);
        *(_QWORD *)(a6 + 16) = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        memmove(Pool2, v7, v6);
        *(_DWORD *)a6 = 5;
      }
      else
      {
        memmove((void *)(a6 + 16), v7, v6);
        *(_DWORD *)a6 = 3;
      }
      *(_DWORD *)(a6 + 12) = v6;
      goto LABEL_11;
    }
    *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) = 0;
  }
  Object = PiDmGetObject(a5, (__int64)a2, (_QWORD *)(a6 + 16));
  v9 = Object;
  if ( Object == -1073741772 )
  {
    v9 = 0;
LABEL_13:
    if ( a1 == 13 )
    {
      v13 = *(_OWORD *)v7;
      *(_DWORD *)a6 = 4;
      *(_OWORD *)(a6 + 8) = v13;
      return v9;
    }
    goto LABEL_14;
  }
  if ( Object >= 0 )
  {
    *(_DWORD *)a6 = 6;
LABEL_11:
    *(_DWORD *)(a6 + 8) = a1;
  }
  return v9;
}
