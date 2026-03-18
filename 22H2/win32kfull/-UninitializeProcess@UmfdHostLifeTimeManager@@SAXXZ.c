/*
 * XREFs of ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00A5158
 * Callers:
 *     UmfdUninitializeProcess @ 0x1C00A5070 (UmfdUninitializeProcess.c)
 * Callees:
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1C007EE40 (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C0086ACC (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C00A5A04 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C00A5A38 (--0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00A5A70 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00A5CD0 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00A5D18 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C00A602C (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::UninitializeProcess(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  unsigned int i; // ebx
  void *ServerPort; // rax
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
    ServerPort = (void *)UmfdGetServerPort(i);
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
