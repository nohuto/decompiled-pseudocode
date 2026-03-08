/*
 * XREFs of ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180098AA0
 * Callers:
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x18001F3EC (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x180096D48 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x180098408 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800985D4 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800BC454 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x1800BD110 (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800E32E4 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1800EAA00 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18012F300 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 *     ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x18020AA34 (-OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z.c)
 *     ?OnSceneReady@CSpatialRemarshaler@@EEAAJPEAUISpectreRenderer@@@Z @ 0x18024E780 (-OnSceneReady@CSpatialRemarshaler@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?SetState@CHolographicComposition@@UEAAJJ@Z @ 0x1802A4280 (-SetState@CHolographicComposition@@UEAAJJ@Z.c)
 *     ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x1802A4770 (-SetState@CHolographicDisplay@@UEAAJJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CNotificationResource::ShouldNotify(CNotificationResource *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 6);
  result = 0;
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 76) )
      return *((_DWORD *)this + 16) != 0;
  }
  return result;
}
