/*
 * XREFs of GreHidePointer @ 0x1C0028E60
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C0028E2C (SetPointerMetaVisibility.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DAC78 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01DAFB0 (-xxxSwitchCursors@@YAXHH@Z.c)
 *     NtUserShowSystemCursor @ 0x1C02037A0 (NtUserShowSystemCursor.c)
 * Callees:
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C000873C (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 *     GreMovePointer @ 0x1C0016B30 (GreMovePointer.c)
 *     GreSetPointer @ 0x1C0081E18 (GreSetPointer.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreHidePointer(int a1)
{
  unsigned int v2; // ebp
  __int64 HDEV; // rax
  HDEV v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v10; // eax
  unsigned int v11; // edx
  struct _CURSINFO *v12; // rcx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = 1;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v4 = (HDEV)HDEV;
  if ( HDEV )
  {
    v13 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13) )
      GreAcquireSemaphore(ghsemGreLock);
    v14 = *(_QWORD *)(v13 + 64);
    GreAcquireSemaphore(v14);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v8 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( a1 )
      {
        if ( (v8 & 0x40000000) == 0 && gulCachedPointerRefs != -1 )
        {
          if ( !gulCachedPointerRefs )
          {
            GreHidePointerInternal(v4);
            v8 = *(_DWORD *)(v7 + 12);
          }
          ++gulCachedPointerRefs;
          *(_DWORD *)(v7 + 12) = v8 | 0x40000000;
        }
      }
      else if ( (v8 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v7 + 12) = v8 & 0xBFFFFFFF;
        v10 = gulCachedPointerRefs;
        if ( gulCachedPointerRefs )
        {
          --gulCachedPointerRefs;
          if ( v10 == 1 )
          {
            if ( bCachedSetPointerRefs )
            {
              if ( byte_1C033A344 )
              {
                v11 = dword_1C033A338;
                v12 = gCachedSetPointerState;
              }
              else
              {
                v11 = 0;
                v12 = 0LL;
              }
              GreSetPointer(v12, v11);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(v4, dword_1C033D5B0, dword_1C033D5B4, dword_1C033D5B8);
              bCachedMovePointerRefs = 0;
            }
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v14);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13) )
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
