/*
 * XREFs of ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x1800EB758
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F2D0 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1800EB630 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x180132E62 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNotificationResource::GetChannelCallbackId(CNotificationResource *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 6);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 76);
  return result;
}
