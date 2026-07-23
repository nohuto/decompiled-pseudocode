/*
 * XREFs of ExpCloudbookHardwareIDProvider @ 0x14094D4F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403FA0E0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ExpOsProductCacheProviderHelper @ 0x1407D14C4 (ExpOsProductCacheProviderHelper.c)
 */

int __fastcall ExpCloudbookHardwareIDProvider(__int64 a1, _DWORD *a2, void *a3, unsigned int a4, _DWORD *a5, _BYTE *a6)
{
  int result; // eax
  _OWORD SystemInformation[2]; // [rsp+40h] [rbp-48h] BYREF
  int v11; // [rsp+60h] [rbp-28h]

  v11 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  result = ExpOsProductCacheProviderHelper(a1, (UNICODE_STRING *)L"\"$", a2, a3, a4, a5, a6);
  if ( (int)(result + 0x80000000) >= 0 && result != -1073741789 )
  {
    *a5 = 32;
    result = ZwQuerySystemInformation(SystemCodeIntegrityUnlockInformation, SystemInformation, 0x24u, 0LL);
    if ( result >= 0 )
    {
      if ( (SystemInformation[0] & 4) != 0 )
      {
        if ( a4 < 0x20 )
        {
          result = -1073741789;
        }
        else
        {
          *a2 = 3;
          memmove(a3, (char *)SystemInformation + 4, (unsigned int)*a5);
          result = 0;
        }
      }
      else
      {
        result = -1073741772;
      }
    }
    *a6 = 1;
  }
  return result;
}
