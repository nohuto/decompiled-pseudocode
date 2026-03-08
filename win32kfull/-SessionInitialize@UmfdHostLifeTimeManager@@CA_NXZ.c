/*
 * XREFs of ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1C00E75F8
 * Callers:
 *     UmfdSessionInitialize @ 0x1C00E6FB0 (UmfdSessionInitialize.c)
 * Callees:
 *     <none>
 */

char __fastcall UmfdHostLifeTimeManager::SessionInitialize(__int64 a1)
{
  PRKEVENT *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = *(PRKEVENT **)(SGDGetSessionState(a1) + 32);
  v2 = Win32AllocPoolNonPaged(24LL, 1986348102LL);
  v1[2941] = (PRKEVENT)v2;
  if ( !v2 )
    return 0;
  v3 = Win32AllocPoolNonPaged(24LL, 1986348102LL);
  v1[2944] = (PRKEVENT)v3;
  if ( !v3 )
    return 0;
  v4 = Win32AllocPoolNonPaged(24LL, 1986348102LL);
  v1[2946] = (PRKEVENT)v4;
  if ( !v4 )
    return 0;
  v5 = Win32AllocPoolNonPaged(24LL, 1986348102LL);
  v1[2947] = (PRKEVENT)v5;
  if ( !v5 )
    return 0;
  GreInitializePushLock(v1 + 2940);
  GreInitializePushLock(v1 + 2943);
  KeInitializeEvent(v1[2941], SynchronizationEvent, 0);
  KeInitializeEvent(v1[2944], NotificationEvent, 0);
  KeInitializeEvent(v1[2946], NotificationEvent, 0);
  KeInitializeEvent(v1[2947], NotificationEvent, 0);
  return 1;
}
