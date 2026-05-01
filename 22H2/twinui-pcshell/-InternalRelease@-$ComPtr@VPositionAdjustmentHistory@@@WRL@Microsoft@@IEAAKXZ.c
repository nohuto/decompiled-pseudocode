/*
 * XREFs of ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803F63BC
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1803F5A44 (--$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@.c)
 *     ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F5FFC (-CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImme.c)
 *     ??1?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@QEAA@XZ @ 0x180475BB4 (--1-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___::_scalar_deleting_destructor_ @ 0x180475BC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___--_scala.c)
 *     ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x180475C60 (-AddPositionAdjustment@PositionAdjustmentHistory@@UEAA-AW4PositionAdjustmentAction@@PEAUIApplica.c)
 *     ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180475E50 (-PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VDummyUnknown@details@wil@@V123@AEBU_GUID@@$$T@Details@WRL@Microsoft@@YAJPEAPEAVDummyUnknown@details@wil@@AEBU_GUID@@$$QEA$$T@Z @ 0x1804ED814 (--$MakeAndInitialize@VDummyUnknown@details@wil@@V123@AEBU_GUID@@$$T@Details@WRL@Microsoft@@YAJPE.c)
 *     _anonymous_namespace_::GetTargetItem @ 0x1804ED908 (_anonymous_namespace_--GetTargetItem.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapter@@UIMessageProxyListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180302B50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyRec.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMessageProxyReconnectAdapter,IMessageProxyListener>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
