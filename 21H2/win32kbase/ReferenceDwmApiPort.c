/*
 * XREFs of ReferenceDwmApiPort @ 0x1C0078C50
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1C0078BB0 (UserNotifyDisplayChange.c)
 *     SetConnectCompletedState @ 0x1C007AD40 (SetConnectCompletedState.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 */

PVOID ReferenceDwmApiPort()
{
  PVOID v0; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 || ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    v0 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
  }
  else
  {
    PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
    v0 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
    UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  }
  return v0;
}
