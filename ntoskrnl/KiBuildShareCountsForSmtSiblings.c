/*
 * XREFs of KiBuildShareCountsForSmtSiblings @ 0x14057B89C
 * Callers:
 *     KiPerformHeteroSoftParkElection @ 0x14057BD18 (KiPerformHeteroSoftParkElection.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

unsigned __int64 __fastcall KiBuildShareCountsForSmtSiblings(int a1, unsigned __int64 a2, void *a3)
{
  unsigned __int64 result; // rax
  int v7; // edi
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 i; // rdx
  unsigned __int64 v11; // rax

  result = (unsigned __int64)memset(a3, 0, 0x40uLL);
  if ( a2 )
  {
    v7 = a1 << 6;
    do
    {
      _BitScanForward64(&v8, a2);
      v9 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v7 + (v8 & 0x3F)]];
      for ( i = *(_QWORD *)(v9 + 34912); i; _bittestandreset64((__int64 *)&i, (unsigned int)v11) )
      {
        _BitScanForward64(&v11, i);
        ++*((_BYTE *)a3 + v11);
      }
      result = ~*(_QWORD *)(v9 + 200);
      a2 &= result;
    }
    while ( a2 );
  }
  return result;
}
