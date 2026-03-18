/*
 * XREFs of UnsetLayeredWindow @ 0x1C00B3964
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     ComposeWindow @ 0x1C00B37D8 (ComposeWindow.c)
 *     DeleteFadeSprite @ 0x1C01E24C0 (DeleteFadeSprite.c)
 * Callees:
 *     RedirectDCEs @ 0x1C00204E0 (RedirectDCEs.c)
 *     _SetLayeredWindowAttributes @ 0x1C0020688 (_SetLayeredWindowAttributes.c)
 *     UpdateSprite @ 0x1C0020D60 (UpdateSprite.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C006986C (DwmAsyncChildStyleChange.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     RemoveVisRgnTracker @ 0x1C00B3BEC (RemoveVisRgnTracker.c)
 *     GreDeleteSprite @ 0x1C00B3D48 (GreDeleteSprite.c)
 *     UnsetRedirectedWindow @ 0x1C00B40A4 (UnsetRedirectedWindow.c)
 */

__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, char a2)
{
  int v4; // ebp
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // ebx
  void *v12; // rax
  struct tagWND *StyleWindow; // rax
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // ebx
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  char v22; // [rsp+88h] [rbp+10h] BYREF

  v4 = GreIsDynamicModeChangeLocked(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v4 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(gpDispInfo + 40LL));
  else
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( (a2 & 1) == 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0
    && (v8 = SetLayeredWindowAttributes(a1, 0, 255, 18), v8 >= 0) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 2u;
    v16 = *((_QWORD *)a1 + 5);
    v17 = *(_QWORD *)a1;
    v18 = *(_DWORD *)(v16 + 232);
    v19 = (void *)ReferenceDwmApiPort(v16);
    DwmAsyncChildStyleChange(v19, v17, -268435456, v18);
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
    *(_DWORD *)(v6 + 232) &= ~2u;
    *((_DWORD *)a1 + 80) &= ~0x8000u;
    v7 = IsWindowDesktopComposed(a1);
    v8 = GreDeleteSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, 0LL, v7);
    SetOrClrWF(0, a1, 0xA08u, 1);
    RemoveVisRgnTracker(a1, 1LL);
    v9 = *((_QWORD *)a1 + 5);
    v10 = *(_QWORD *)a1;
    v11 = *(_DWORD *)(v9 + 232);
    v12 = (void *)ReferenceDwmApiPort(v9);
    DwmAsyncChildStyleChange(v12, v10, -268435456, v11);
    StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2848);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v22);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v22, v20, v21);
    }
  }
  v14 = *(_QWORD *)(gpDispInfo + 40LL);
  if ( v4 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v14);
  else
    GreUnlockVisRgn(v14);
  return (unsigned int)v8;
}
