/*
 * XREFs of UnsetLayeredWindow @ 0x1C00EEE28
 * Callers:
 *     ComposeWindow @ 0x1C003531C (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C005E140 (xxxSetWindowStyle.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     DeleteFadeSprite @ 0x1C01E77A0 (DeleteFadeSprite.c)
 * Callees:
 *     RedirectDCEs @ 0x1C004C470 (RedirectDCEs.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E050 (DwmAsyncChildStyleChange.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetStyleWindow @ 0x1C00714C0 (GetStyleWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00726C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     _SetLayeredWindowAttributes @ 0x1C00BD1E8 (_SetLayeredWindowAttributes.c)
 *     UpdateSprite @ 0x1C00BE6C4 (UpdateSprite.c)
 *     RemoveVisRgnTracker @ 0x1C00EF09C (RemoveVisRgnTracker.c)
 *     GreDeleteSprite @ 0x1C00EF0D8 (GreDeleteSprite.c)
 *     UnsetRedirectedWindow @ 0x1C00EF498 (UnsetRedirectedWindow.c)
 */

__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, char a2)
{
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebp
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  void *v12; // rax
  struct tagWND *StyleWindow; // rax
  __int64 v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  void *v19; // rax
  char v20; // [rsp+80h] [rbp+18h] BYREF

  v4 = GreIsDynamicModeChangeLocked(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v4 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(gpDispInfo + 40LL));
  else
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( (a2 & 1) == 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0
    && (v8 = SetLayeredWindowAttributes(a1, 0, 0xFFu, 18), v8 >= 0) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x20u;
    v17 = *((_QWORD *)a1 + 5);
    v18 = *(_DWORD *)(v17 + 232);
    v19 = (void *)ReferenceDwmApiPort(v17, v16);
    DwmAsyncChildStyleChange(v19, *(_QWORD *)a1, -268435456, v18);
  }
  else
  {
    v6 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v6 + 31) & 0x10) != 0 )
    {
      UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
      v6 = *((_QWORD *)a1 + 5);
    }
    if ( (*(_BYTE *)(v6 + 27) & 0x20) != 0 )
    {
      UnsetRedirectedWindow(a1);
      v6 = *((_QWORD *)a1 + 5);
    }
    *(_DWORD *)(v6 + 232) &= ~0x20u;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x40u;
    v7 = IsWindowDesktopComposed(a1);
    v8 = GreDeleteSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, 0LL, v7);
    SetOrClrWF(0, (__int64)a1, 0xA08u, 1);
    RemoveVisRgnTracker(a1, 1LL);
    v9 = *((_QWORD *)a1 + 5);
    v10 = *(_DWORD *)(v9 + 232);
    v12 = (void *)ReferenceDwmApiPort(v9, v11);
    DwmAsyncChildStyleChange(v12, *(_QWORD *)a1, -268435456, v10);
    StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2848);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v20);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v20);
    }
  }
  v14 = *(_QWORD *)(gpDispInfo + 40LL);
  if ( v4 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v14);
  else
    GreUnlockVisRgn(v14);
  return (unsigned int)v8;
}
