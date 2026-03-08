/*
 * XREFs of RtlGetCpuVendor @ 0x1403A2664
 * Callers:
 *     RtlGetProcessorSignature @ 0x1403A25C8 (RtlGetProcessorSignature.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     strncmp @ 0x1403D3310 (strncmp.c)
 */

__int64 RtlGetCpuVendor()
{
  char Str1[16]; // [rsp+20h] [rbp-28h] BYREF

  _RAX = 0LL;
  __asm { cpuid }
  *(_DWORD *)&Str1[4] = _RBX;
  *(_DWORD *)&Str1[8] = _RDX;
  *(_DWORD *)&Str1[12] = _RCX;
  if ( !strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
    return 1LL;
  if ( !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
    return 2LL;
  if ( strncmp(&Str1[4], "CentaurHauls", 0xCuLL) )
  {
    if ( strncmp(&Str1[4], "HygonGenuine", 0xCuLL) )
      return strncmp(&Str1[4], "  Shanghai  ", 0xCuLL) == 0 ? 3 : 0;
    return 1LL;
  }
  return 3LL;
}
