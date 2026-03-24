/*
 * XREFs of MiUpdatePageTableUseCount @ 0x140328C24
 * Callers:
 *     MiActOnPte @ 0x14023BF60 (MiActOnPte.c)
 *     MiZeroFault @ 0x1402CF5F0 (MiZeroFault.c)
 *     MiExpandSharedZeroCluster @ 0x140339F98 (MiExpandSharedZeroCluster.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x140289E54 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14028D0E0 (MiGetUsedPtesHandle.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // r8
  unsigned int i; // r9d
  __int64 UsedPtesHandle; // rax
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = a2;
  v3 = a1;
  for ( i = 0; i < 3; ++i )
  {
    if ( v3 <= 0x7FFFFFFEFFFFLL )
    {
      UsedPtesHandle = MiGetUsedPtesHandle(a1, a2);
      MiIncreaseUsedPtesCount(UsedPtesHandle, v2, v6, v7);
      return 1LL;
    }
    v3 = (__int64)(v3 << 25) >> 16;
  }
  return 0LL;
}
