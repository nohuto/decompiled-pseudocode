/*
 * XREFs of ExpCloudbookHardwareLockedProvider @ 0x140859D80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExpOsProductCacheProviderHelper @ 0x140859E94 (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpCloudbookHardwareLockedProvider(
        __int64 a1,
        _DWORD *a2,
        void *a3,
        unsigned int a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v9; // ebx
  char v10; // dl
  size_t v11; // r8
  BOOL Src; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-60h] BYREF
  int v15; // [rsp+68h] [rbp-40h]

  v15 = 0;
  memset(v14, 0, sizeof(v14));
  v9 = ExpOsProductCacheProviderHelper(a1, L"*,", a2, a3, a4, a5, a6);
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
  {
    *a5 = 4;
    v9 = 0;
    if ( (int)ZwQuerySystemInformation(190LL, (__int64)v14) < 0 )
    {
      v9 = -1073741772;
    }
    else if ( a4 < *a5 )
    {
      v9 = -1073741789;
    }
    else
    {
      v10 = v14[0] & 5;
      *a2 = 4;
      v11 = *a5;
      Src = v10 == 5;
      memmove(a3, &Src, v11);
    }
    *a6 = 1;
  }
  return v9;
}
