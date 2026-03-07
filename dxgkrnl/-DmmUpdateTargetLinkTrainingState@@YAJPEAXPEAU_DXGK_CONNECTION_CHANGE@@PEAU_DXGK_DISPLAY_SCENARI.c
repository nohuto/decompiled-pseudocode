__int64 __fastcall DmmUpdateTargetLinkTrainingState(
        PERESOURCE *a1,
        struct _DXGK_CONNECTION_CHANGE *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        unsigned __int8 a4)
{
  VIDPN_MGR *Flink; // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    WdLogSingleEntry0(1LL);
  Flink = (VIDPN_MGR *)a1[365][1].SystemResourcesList.Flink;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v10, (__int64)Flink);
  LODWORD(Flink) = VIDPN_MGR::UpdateTargetLinkTrainingStatus(Flink, a2, 1u, a3, a4);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v10 + 40));
  return (unsigned int)Flink;
}
