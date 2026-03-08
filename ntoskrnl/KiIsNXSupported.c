/*
 * XREFs of KiIsNXSupported @ 0x140A8EA38
 * Callers:
 *     KiInitializeNxSupportDiscard @ 0x140B6FE18 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x140A85800 (KiGetCpuVendor.c)
 */

char KiIsNXSupported()
{
  char v5; // bl
  char result; // al
  bool v7; // zf

  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x100000) != 0 )
    return 1;
  v5 = 0;
  v7 = (unsigned int)KiGetCpuVendor() == 1;
  result = 1;
  if ( !v7 )
    return v5;
  return result;
}
