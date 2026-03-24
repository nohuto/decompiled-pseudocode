/*
 * XREFs of ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C00F4820
 * Callers:
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00F429C (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00A8434 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00A8ED8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

HANDLE UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  NTSTATUS v3; // eax
  HANDLE v4; // rbx
  HANDLE ProcessHandle; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v7,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v1, v0, v2)
    || !UmfdHostLifeTimeManager::s_UmfdHostProcess
    || (ProcessHandle = 0LL,
        ObOpenObjectByPointer(
          UmfdHostLifeTimeManager::s_UmfdHostProcess,
          0x200u,
          0LL,
          1u,
          (POBJECT_TYPE)PsProcessType,
          0,
          &ProcessHandle) < 0) )
  {
    v4 = 0LL;
  }
  else
  {
    v3 = ZwTerminateProcess(ProcessHandle, 258);
    if ( (int)(v3 + 0x80000000) < 0 || v3 == -1073741558 )
    {
      v4 = ProcessHandle;
    }
    else
    {
      ZwClose(ProcessHandle);
      v4 = 0LL;
      ProcessHandle = 0LL;
    }
  }
  if ( v7 )
  {
    GreReleasePushLockShared(v7);
    KeLeaveCriticalRegion();
  }
  return v4;
}
