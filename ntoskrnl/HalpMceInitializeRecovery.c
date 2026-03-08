/*
 * XREFs of HalpMceInitializeRecovery @ 0x1403B0B94
 * Callers:
 *     HalpInitializeMce @ 0x140A87FF0 (HalpInitializeMce.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 HalpMceInitializeRecovery()
{
  __int64 result; // rax

  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (unsigned int)result >= 0x80000008 )
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    result = (1LL << _RAX) - 1;
    HalpMcaPhysicalAddressMask = result;
  }
  return result;
}
