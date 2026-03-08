/*
 * XREFs of ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C0212D68
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C001BFA0 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C0212DF0 (-UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 */

void __fastcall DmmUpdateHPDFilteringTelemetry(
        PERESOURCE *a1,
        struct _DMM_HPD_FILTER_INFO *a2,
        struct _GUID *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  VIDPN_MGR *Flink; // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    WdLogSingleEntry0(1LL);
  Flink = (VIDPN_MGR *)a1[365][1].SystemResourcesList.Flink;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v10, (__int64)Flink);
  VIDPN_MGR::UpdateHPDFilteringTelemetry(Flink, a2, a3, a4, a5);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v10 + 40));
}
