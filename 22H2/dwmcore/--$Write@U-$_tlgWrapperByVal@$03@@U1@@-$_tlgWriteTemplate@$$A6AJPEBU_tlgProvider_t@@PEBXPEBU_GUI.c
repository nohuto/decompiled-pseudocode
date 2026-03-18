/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800BB224
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180055F08 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x180096F18 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800BCEC0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800D3270 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800E1624 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800F3DE0 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1801029D0 (-SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     ?DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z @ 0x1802A52F0 (-DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z.c)
 *     ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x1802A59C8 (-HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BB2A0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v12 = 4;
  v13 = 0;
  v8 = a5;
  v9 = 4;
  v10 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0, 0, 4u, &v7);
}
