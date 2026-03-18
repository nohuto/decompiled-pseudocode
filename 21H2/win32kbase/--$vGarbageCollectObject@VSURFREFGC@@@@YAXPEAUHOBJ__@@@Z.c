/*
 * XREFs of ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0179210
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0017AB0 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockEx @ 0x1C0020870 (HmgShareLockEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C016C500 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<SURFREFGC>(unsigned int a1)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-40h] BYREF
  int v6; // [rsp+38h] [rbp-38h]
  _BYTE v7[32]; // [rsp+48h] [rbp-28h] BYREF
  SURFACE *v8; // [rsp+68h] [rbp-8h]
  char vars0; // [rsp+70h] [rbp+0h] BYREF

  SURFREF::SURFREF((SURFREF *)v7);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&vars0);
  v2 = HmgShareLockEx(a1, 5, 0);
  v8 = (SURFACE *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
  {
    v5 = 0LL;
    v6 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v5, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0LL, 0, 0);
    if ( v6 && (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
      if ( (unsigned int)SURFACE::bDeleteSurface(v8, 3, 0) )
      {
        v8 = 0LL;
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
      }
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
    }
    if ( v6 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v3);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v4);
  }
  SURFREF::~SURFREF((SURFREF *)v7);
}
