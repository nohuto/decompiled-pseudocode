/*
 * XREFs of ExpCloudbookHardwareIDProvider @ 0x1409F6AF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExpOsProductCacheProviderHelper @ 0x140859E94 (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpCloudbookHardwareIDProvider(
        __int64 a1,
        _DWORD *a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *a6)
{
  __int64 result; // rax
  _OWORD Src[2]; // [rsp+40h] [rbp-48h] BYREF
  int v11; // [rsp+60h] [rbp-28h]

  v11 = 0;
  memset(Src, 0, sizeof(Src));
  result = ExpOsProductCacheProviderHelper(a1, (UNICODE_STRING *)L"\"$", a2, a3, a4, a5, a6);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
  {
    *a5 = 32;
    result = ZwQuerySystemInformation(190LL, (__int64)Src);
    if ( (int)result >= 0 )
    {
      if ( (Src[0] & 4) != 0 )
      {
        if ( a4 < 0x20 )
        {
          result = 3221225507LL;
        }
        else
        {
          *a2 = 3;
          memmove(a3, (char *)Src + 4, (unsigned int)*a5);
          result = 0LL;
        }
      }
      else
      {
        result = 3221225524LL;
      }
    }
    *a6 = 1;
  }
  return result;
}
