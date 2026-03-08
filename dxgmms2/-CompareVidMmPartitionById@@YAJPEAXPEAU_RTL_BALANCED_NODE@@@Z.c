/*
 * XREFs of ?CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0017C00
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0001BA4 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVidMmPartitionById(void *a1, struct _RTL_BALANCED_NODE *a2)
{
  unsigned int Right; // r8d

  Right = (unsigned int)a2[1].Right;
  if ( (unsigned int)a1 < Right )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)a1 > Right;
}
