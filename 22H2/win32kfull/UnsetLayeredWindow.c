/*
 * XREFs of UnsetLayeredWindow @ 0x1C00C8C24
 * Callers:
 *     ComposeWindow @ 0x1C00C8A84 (ComposeWindow.c)
 *     CleanupWindowRedirection @ 0x1C00EAF48 (CleanupWindowRedirection.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     DeleteFadeSprite @ 0x1C01BCCA0 (DeleteFadeSprite.c)
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UnsetRedirectedWindow @ 0x1C00C881C (UnsetRedirectedWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     GreDeleteSprite @ 0x1C00C8F74 (GreDeleteSprite.c)
 *     RemoveVisRgnTracker @ 0x1C00C96FC (RemoveVisRgnTracker.c)
 *     RedirectDCEs @ 0x1C00D3618 (RedirectDCEs.c)
 *     _SetLayeredWindowAttributes @ 0x1C00D5980 (_SetLayeredWindowAttributes.c)
 *     UpdateSprite @ 0x1C00D5D64 (UpdateSprite.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     GetStyleWindow @ 0x1C0119070 (GetStyleWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, char a2)
{
  int v4; // ebp
  __int64 v5; // r8
  int v6; // eax
  int v7; // r14d
  void *v8; // rax
  struct tagWND *StyleWindow; // rax
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  void *v14; // rax
  char v15; // [rsp+88h] [rbp+10h] BYREF

  v4 = GreIsDynamicModeChangeLocked(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v4 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(gpDispInfo + 40LL));
  else
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( (a2 & 1) == 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0
    && (v7 = SetLayeredWindowAttributes(a1), v7 >= 0) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 2u;
    v14 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 5));
    DwmAsyncChildStyleChange(v14);
  }
  else
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      UpdateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) != 0 )
      UnsetRedirectedWindow(a1, 1);
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~2u;
    *((_DWORD *)a1 + 80) &= ~0x8000u;
    v6 = IsWindowDesktopComposed(a1);
    v7 = GreDeleteSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, 0LL, v6);
    SetOrClrWF(0LL, a1, 2568LL, 1LL);
    RemoveVisRgnTracker(a1, 1LL);
    v8 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 5));
    DwmAsyncChildStyleChange(v8);
    StyleWindow = (struct tagWND *)GetStyleWindow(a1, 2848LL);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v15);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v15, v12, v13);
    }
  }
  v10 = *(_QWORD *)(gpDispInfo + 40LL);
  if ( v4 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v10);
  else
    GreUnlockVisRgn(v10);
  return (unsigned int)v7;
}
