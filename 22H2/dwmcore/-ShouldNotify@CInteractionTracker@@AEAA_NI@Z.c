/*
 * XREFs of ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801334B0
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x180132BF6 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1802333AC (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x1802349D4 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180098C90 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

unsigned __int8 __fastcall CInteractionTracker::ShouldNotify(CInteractionTracker *this)
{
  bool ShouldNotify; // al
  __int64 v2; // rcx
  unsigned int v3; // r9d
  char v4; // r8
  int v5; // eax

  ShouldNotify = CNotificationResource::ShouldNotify(this);
  v4 = 0;
  if ( ShouldNotify )
  {
    v5 = *(_DWORD *)(v2 + 184);
    return _bittest(&v5, v3);
  }
  return v4;
}
