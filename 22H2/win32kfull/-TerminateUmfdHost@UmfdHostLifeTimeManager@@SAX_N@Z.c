/*
 * XREFs of ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00A5278
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C00A5088 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1C007EE40 (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C00A5A38 (--0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00A5CD0 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00A5D18 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C00A5F4C (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::TerminateUmfdHost(__int64 a1)
{
  char v1; // si
  __int64 v2; // rbx
  void *v3; // rax
  void *v4; // rdi
  struct _KEVENT *v5; // rcx
  char v6; // [rsp+48h] [rbp+10h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  KeWaitForSingleObject(*(PVOID *)(v2 + 23568), Executive, 0, 0, 0LL);
  v3 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
  v4 = v3;
  if ( v3 )
  {
    ZwWaitForSingleObject(v3, 0, 0LL);
    ZwClose(v4);
  }
  if ( v1 )
  {
    v5 = *(struct _KEVENT **)(v2 + 23552);
    *(_BYTE *)(v2 + 23560) = 0;
    KeClearEvent(v5);
  }
  AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)&v7);
  UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::UmfdHostExclusiveReadyLock((UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *)&v6);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  KeSetEvent(*(PRKEVENT *)(v2 + 23528), 0, 0);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
}
