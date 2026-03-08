/*
 * XREFs of ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C01255E8
 * Callers:
 *     UmfdUninitializeProcess @ 0x1C01255D0 (UmfdUninitializeProcess.c)
 * Callees:
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C00BB0B4 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C00BB0E8 (--0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00BCA88 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1C011D930 (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C0125298 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C0125708 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C0125930 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C0125978 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 */

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
