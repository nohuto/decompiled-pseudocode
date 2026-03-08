/*
 * XREFs of IopGetMaxValidMemorySizeDown @ 0x140550EF8
 * Callers:
 *     IopAddRunTimeTriageDataBlocks @ 0x14054FDC8 (IopAddRunTimeTriageDataBlocks.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14055B39C (IopMarkPagesForRunTimeTriageDataBlocks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 */

__int64 __fastcall IopGetMaxValidMemorySizeDown(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v2; // rsi
  int v4; // ebp
  unsigned int v5; // edi

  v1 = 0;
  v2 = (a1 - 1) & 0xFFFFFFFFFFFFF000uLL;
  if ( !v2 )
    return 0LL;
  v4 = 0;
  v5 = 256;
  while ( MmIsAddressValidEx(v2) )
  {
    v1 += v4;
    if ( v2 )
    {
      v2 -= 4096LL;
      v4 = 4096;
      if ( v1 < 0x100 )
        continue;
    }
    if ( v1 >= 0x100 )
      return v5;
    return v1;
  }
  return v1;
}
