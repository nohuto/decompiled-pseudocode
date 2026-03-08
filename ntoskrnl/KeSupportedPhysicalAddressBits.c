/*
 * XREFs of KeSupportedPhysicalAddressBits @ 0x140B7256C
 * Callers:
 *     MmInitSystem @ 0x140B393A4 (MmInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char KeSupportedPhysicalAddressBits()
{
  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 0x80000008 )
    return 36;
  _RAX = 2147483656LL;
  __asm { cpuid }
  return _RAX;
}
