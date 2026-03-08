/*
 * XREFs of MiUpdatePageTableUseCount @ 0x14029EC20
 * Callers:
 *     MiZeroFault @ 0x140266000 (MiZeroFault.c)
 *     MiExpandSharedZeroCluster @ 0x14029E7B4 (MiExpandSharedZeroCluster.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14029F850 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x140346CA0 (MiGetUsedPtesHandle.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // r8
  unsigned int i; // r9d
  __int64 UsedPtesHandle; // rax

  v3 = a1;
  for ( i = 0; i < 3; ++i )
  {
    if ( v3 <= 0x7FFFFFFEFFFFLL )
    {
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, a2);
      return 1LL;
    }
    v3 = (__int64)(v3 << 25) >> 16;
  }
  return 0LL;
}
