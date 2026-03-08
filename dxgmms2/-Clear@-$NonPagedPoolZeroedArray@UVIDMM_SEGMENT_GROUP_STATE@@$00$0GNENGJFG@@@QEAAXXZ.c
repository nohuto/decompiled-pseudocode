/*
 * XREFs of ?Clear@?$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GNENGJFG@@@QEAAXXZ @ 0x1C0031080
 * Callers:
 *     ??1VIDMM_PARTITION_ADAPTER_INFO@@QEAA@XZ @ 0x1C0031030 (--1VIDMM_PARTITION_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00310C0 (-ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NonPagedPoolZeroedArray<VIDMM_SEGMENT_GROUP_STATE,1,1833789782>::Clear(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 352) = 0;
}
