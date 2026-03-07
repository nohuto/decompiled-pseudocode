void __fastcall UmfdHostLifeTimeManager::UninitializeProcess(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  unsigned int i; // ebx
  CWorkItemQueue **ServerPort; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  void (*v8)(void *, void *, void *); // rdx
  void *v9; // r8
  Gre::Base *v10; // rcx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( !KeReadStateEvent(*(PRKEVENT *)(v1 + 23552)) )
  {
    KeSetEvent(*(PRKEVENT *)(v1 + 23552), 0, 0);
    if ( gpidLogon )
      PostWinlogonMessage(3LL, 4LL);
  }
  UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::UmfdHostExclusiveReadyLock((UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *)&v11);
  *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v2) + 32) + 23536LL) = 0;
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  for ( i = 0; i < 4; ++i )
  {
    ServerPort = (CWorkItemQueue **)UmfdGetServerPort(i);
    if ( ServerPort )
      UmfdCancelServerOutstandingRequests(ServerPort);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
  v6 = *(_QWORD *)(SGDGetSessionState(v5) + 40);
  if ( *(_QWORD *)v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    NSInstrumentation::CPointerHashTable::Enumerate(*(NSInstrumentation::CPointerHashTable **)v6, v8, v9);
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
  AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)&v11);
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
  UmfdZombifyAllUmfdFonts(v10);
  *(_BYTE *)(v1 + 23537) = 0;
}
