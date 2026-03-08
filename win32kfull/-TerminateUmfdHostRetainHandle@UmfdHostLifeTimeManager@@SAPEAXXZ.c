/*
 * XREFs of ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C0125850
 * Callers:
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C0125770 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C011F720 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C011FE98 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011FF2C (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

HANDLE UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle(void)
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  void *v2; // rcx
  NTSTATUS v3; // eax
  HANDLE v4; // rbx
  HANDLE ProcessHandle; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v7);
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v0)
    || (v2 = *(void **)(*(_QWORD *)(SGDGetSessionState(v1) + 32) + 23496LL)) == 0LL
    || (ProcessHandle = 0LL,
        ObOpenObjectByPointer(v2, 0x200u, 0LL, 1u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle) < 0) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v7);
    return 0LL;
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
    if ( v7 )
    {
      GreReleasePushLockShared(v7);
      KeLeaveCriticalRegion();
    }
    return v4;
  }
}
