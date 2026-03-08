/*
 * XREFs of ?ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00310C0
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00E0158 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0002388 (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?Clear@?$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GNENGJFG@@@QEAAXXZ @ 0x1C0031080 (-Clear@-$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GNENGJFG@@@QEAAXXZ.c)
 *     ?VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00310FC (-VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

void __fastcall VIDMM_PARTITION::ResetAdapter(VIDMM_PARTITION *this, struct VIDMM_GLOBAL *a2)
{
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax
  struct VIDMM_PARTITION_ADAPTER_INFO *v3; // rbx

  AdapterInfo = VIDMM_PARTITION::GetAdapterInfo(this, a2);
  v3 = AdapterInfo;
  if ( *((_QWORD *)AdapterInfo + 1) )
  {
    VidMmiClosePerfCounters(AdapterInfo);
    NonPagedPoolZeroedArray<VIDMM_SEGMENT_GROUP_STATE,1,1833789782>::Clear((__int64)v3 + 24);
    *((_QWORD *)v3 + 1) = 0LL;
    *(_QWORD *)v3 = 0LL;
  }
}
