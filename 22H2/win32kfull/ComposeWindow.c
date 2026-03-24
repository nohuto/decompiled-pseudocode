/*
 * XREFs of ComposeWindow @ 0x1C003531C
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 *     DecomposeWindowIfNeeded @ 0x1C0035294 (DecomposeWindowIfNeeded.c)
 *     ComposeWindowIfNeeded @ 0x1C004C260 (ComposeWindowIfNeeded.c)
 *     UpdateWindowMonitor @ 0x1C00701D0 (UpdateWindowMonitor.c)
 *     zzzDecomposeDesktop @ 0x1C00EAA3C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C00EC528 (zzzComposeDesktop.c)
 * Callees:
 *     xxxSetLayeredWindow @ 0x1C0035D20 (xxxSetLayeredWindow.c)
 *     IsDesktopWindow @ 0x1C004C550 (IsDesktopWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E050 (DwmAsyncChildStyleChange.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C00724E0 (xxxInternalInvalidate.c)
 *     _SetLayeredWindowAttributes @ 0x1C00BD1E8 (_SetLayeredWindowAttributes.c)
 *     UpdateWindowSpriteDPI @ 0x1C00BD5D8 (UpdateWindowSpriteDPI.c)
 *     UnsetLayeredWindow @ 0x1C00EEE28 (UnsetLayeredWindow.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF
  char v14; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( (a2 & 1) == 0 )
  {
    v4 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v4 + 232) & 0x20) != 0 )
    {
      v11 = UnsetLayeredWindow(a1);
      v4 = *((_QWORD *)a1 + 5);
      v5 = v11;
    }
    else
    {
      v5 = 0;
    }
    *(_DWORD *)(v4 + 232) &= ~0x40u;
    return (unsigned int)v5;
  }
  if ( (unsigned int)IsDesktopWindow() && *((_QWORD *)a1 + 3) != grpdeskRitInput )
    return 0;
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 31) & 0x10) == 0 && (a2 & 8) == 0 )
    return (*(_BYTE *)(v7 + 26) & 8) == 0 ? 0x3E0001u : 0;
  if ( (*(_BYTE *)(v7 + 26) & 8) != 0 )
  {
    v12 = ValidateHmonitorNoRip(*(_QWORD *)(v7 + 256));
    UpdateWindowSpriteDPI(a1, v12);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
    }
    return 0;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  v5 = xxxSetLayeredWindow(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( v5 >= 0 )
  {
    v5 = SetLayeredWindowAttributes(a1);
    if ( v5 < 0 )
    {
      UnsetLayeredWindow(a1);
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x20u;
      v10 = (void *)ReferenceDwmApiPort(v9, v8);
      DwmAsyncChildStyleChange(v10);
    }
  }
  return (unsigned int)v5;
}
