/*
 * XREFs of ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00FEB18
 * Callers:
 *     InternalSetTimer @ 0x1C0075120 (InternalSetTimer.c)
 *     FreezeThawTimers @ 0x1C00FD920 (FreezeThawTimers.c)
 *     _anonymous_namespace_::HasLegacyForegroundActivateRight @ 0x1C00FE99C (_anonymous_namespace_--HasLegacyForegroundActivateRight.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C016C78A (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 *     SetProcessTimerDelay @ 0x1C01E5F20 (SetProcessTimerDelay.c)
 * Callees:
 *     <none>
 */

CAutoPushLockSh *__fastcall CAutoPushLockSh::CAutoPushLockSh(CAutoPushLockSh *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(*(_QWORD *)this, 0LL);
  return this;
}
