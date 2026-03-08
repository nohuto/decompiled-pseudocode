/*
 * XREFs of UnsetLayeredWindow @ 0x1C00240E0
 * Callers:
 *     ComposeWindow @ 0x1C002297C (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     CleanupWindowRedirection @ 0x1C00340EC (CleanupWindowRedirection.c)
 *     DeleteFadeSprite @ 0x1C01BDE40 (DeleteFadeSprite.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x1C0022ADC (UnsetRedirectedWindow.c)
 *     GreDeleteSprite @ 0x1C0024368 (GreDeleteSprite.c)
 *     RemoveVisRgnTracker @ 0x1C0025C7C (RemoveVisRgnTracker.c)
 *     RedirectDCEs @ 0x1C002B7EC (RedirectDCEs.c)
 *     _SetLayeredWindowAttributes @ 0x1C002BBFC (_SetLayeredWindowAttributes.c)
 *     DwmAsyncChildStyleChange @ 0x1C002E648 (DwmAsyncChildStyleChange.c)
 *     UpdateSprite @ 0x1C002E7A8 (UpdateSprite.c)
 *     GetStyleWindow @ 0x1C0039020 (GetStyleWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall UnsetLayeredWindow(__int64 a1, char a2)
{
  int v4; // ebp
  __int64 v5; // r8
  int v6; // eax
  int v7; // r14d
  void *v8; // rax
  __int64 StyleWindow; // rax
  __int64 v10; // rcx
  void *v12; // rax
  char v13; // [rsp+88h] [rbp+10h] BYREF

  v4 = GreIsDynamicModeChangeLocked(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v4 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(gpDispInfo + 40LL));
  else
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( (a2 & 1) == 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0
    && (LOBYTE(v5) = -1, v7 = SetLayeredWindowAttributes(a1, 0LL, v5, 18LL), v7 >= 0) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) |= 2u;
    v12 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v12);
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
      UpdateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 0x20) != 0 )
      UnsetRedirectedWindow((struct tagWND *)a1, 1);
    *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) &= ~2u;
    *(_DWORD *)(a1 + 320) &= ~0x8000u;
    v6 = IsWindowDesktopComposed(a1);
    v7 = GreDeleteSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, 0LL, v6);
    SetOrClrWF(0LL, a1, 2568LL, 1LL);
    RemoveVisRgnTracker(a1, 1LL);
    v8 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v8);
    StyleWindow = GetStyleWindow(a1, 2848LL);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs(a1);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13);
    }
  }
  v10 = *(_QWORD *)(gpDispInfo + 40LL);
  if ( v4 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v10);
  else
    GreUnlockVisRgn(v10);
  return (unsigned int)v7;
}
