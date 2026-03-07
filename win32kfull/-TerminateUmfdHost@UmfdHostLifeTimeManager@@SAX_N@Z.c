void __fastcall UmfdHostLifeTimeManager::TerminateUmfdHost(__int64 a1)
{
  char v1; // si
  __int64 v2; // rbx
  void *v3; // rax
  void *v4; // rdi
  __int64 v5; // rcx
  struct _KEVENT *v6; // rcx
  char v7; // [rsp+48h] [rbp+10h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

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
    v6 = *(struct _KEVENT **)(v2 + 23552);
    *(_BYTE *)(v2 + 23560) = 0;
    KeClearEvent(v6);
  }
  AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)&v8);
  UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::UmfdHostExclusiveReadyLock((UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *)&v7);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock(v5);
  KeSetEvent(*(PRKEVENT *)(v2 + 23528), 0, 0);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v8);
}
