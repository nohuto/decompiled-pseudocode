/*
 * XREFs of GreHidePointer @ 0x1C0026210
 * Callers:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C007A358 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreSetPointer @ 0x1C0073040 (GreSetPointer.c)
 *     GreMovePointer @ 0x1C0086EF0 (GreMovePointer.c)
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C010A2B4 (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall GreHidePointer(int a1)
{
  unsigned int v2; // ebp
  __int64 HDEV; // rax
  HDEV v4; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  struct _CURSINFO *v11; // rcx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = 1;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v4 = (HDEV)HDEV;
  if ( HDEV )
  {
    v12 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v12) )
      GreAcquireSemaphore(ghsemGreLock);
    v13 = *(_QWORD *)(v12 + 56);
    GreAcquireSemaphore(v13);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v6 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v7 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( a1 )
      {
        if ( (v7 & 0x40000000) == 0 && gulCachedPointerRefs != -1 )
        {
          if ( !gulCachedPointerRefs )
          {
            GreHidePointerInternal(v4);
            v7 = *(_DWORD *)(v6 + 12);
          }
          ++gulCachedPointerRefs;
          *(_DWORD *)(v6 + 12) = v7 | 0x40000000;
        }
      }
      else if ( (v7 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 12) = v7 & 0xBFFFFFFF;
        v9 = gulCachedPointerRefs;
        if ( gulCachedPointerRefs )
        {
          --gulCachedPointerRefs;
          if ( v9 == 1 )
          {
            if ( bCachedSetPointerRefs )
            {
              if ( byte_1C03354E4 )
              {
                v10 = dword_1C03354D8;
                v11 = (struct _CURSINFO *)gCachedSetPointerState;
              }
              else
              {
                v10 = 0;
                v11 = 0LL;
              }
              GreSetPointer(v11, v10);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(v4);
              bCachedMovePointerRefs = 0;
            }
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v12) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
  }
  else
  {
    v2 = 0;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return v2;
}
