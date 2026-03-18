/*
 * XREFs of ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0076DBC
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C00029E0 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1C0076BC8 (-OnDaemonTimer@ForegroundLaunch@@YAXXZ.c)
 *     ?PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0077A00 (-PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 *     ?PopProcessLaunchForegroundPolicy@ForegroundLaunch@@YA?AW4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTERNAL@@PEAX@Z @ 0x1C0079E00 (-PopProcessLaunchForegroundPolicy@ForegroundLaunch@@YA-AW4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTE.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C007A358 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C009C170 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00AD78C (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     ?OnFirstActivationAttempted@ForegroundLaunch@@YAXPEAX@Z @ 0x1C00FFF74 (-OnFirstActivationAttempted@ForegroundLaunch@@YAXPEAX@Z.c)
 *     _anonymous_namespace_::ClearTable @ 0x1C010F008 (_anonymous_namespace_--ClearTable.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C0121754 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 * Callees:
 *     <none>
 */

CAutoPushLockEx *__fastcall CAutoPushLockEx::CAutoPushLockEx(CAutoPushLockEx *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  return this;
}
