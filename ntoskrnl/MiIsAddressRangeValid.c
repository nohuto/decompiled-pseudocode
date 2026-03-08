/*
 * XREFs of MiIsAddressRangeValid @ 0x14062D8D4
 * Callers:
 *     MiAddUnicodeStringToCrashDump @ 0x14062D4C4 (MiAddUnicodeStringToCrashDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 */

__int64 __fastcall MiIsAddressRangeValid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = (a1 & 0xFFFFFFFFFFFFF000uLL) + (((a1 & 0xFFF) + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  while ( 1 )
  {
    if ( v2 >= v3 )
      return 1LL;
    if ( !MmIsAddressValidEx(v2) )
      break;
    v2 += 4096LL;
  }
  return 0LL;
}
