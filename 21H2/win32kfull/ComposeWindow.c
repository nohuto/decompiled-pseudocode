/*
 * XREFs of ComposeWindow @ 0x1C00B37D8
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C00202CC (ComposeWindowIfNeeded.c)
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 *     zzzDecomposeDesktop @ 0x1C0097998 (zzzDecomposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 *     DecomposeWindowIfNeeded @ 0x1C00B3750 (DecomposeWindowIfNeeded.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0020688 (_SetLayeredWindowAttributes.c)
 *     UpdateWindowSpriteMonitor @ 0x1C0022AF0 (UpdateWindowSpriteMonitor.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     DwmAsyncChildStyleChange @ 0x1C006986C (DwmAsyncChildStyleChange.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UnsetLayeredWindow @ 0x1C00B3964 (UnsetLayeredWindow.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  int v4; // esi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // ebx
  void *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  char v18; // [rsp+38h] [rbp+10h] BYREF
  __int64 v19; // [rsp+40h] [rbp+18h] BYREF

  v19 = 0LL;
  if ( (a2 & 1) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) != 0 )
      v4 = UnsetLayeredWindow(a1);
    else
      v4 = 0;
    *((_DWORD *)a1 + 80) &= ~0x8000u;
    return (unsigned int)v4;
  }
  LOBYTE(v6) = IsDesktopWindow((__int64)a1);
  if ( v6 && *((_QWORD *)a1 + 3) != grpdeskRitInput )
    return 0;
  v7 = *((_QWORD *)a1 + 5);
  if ( (((a2 & 8) == 0) & (unsigned __int8)~(*(_BYTE *)(v7 + 31) >> 4)) != 0 )
    return (*(_BYTE *)(v7 + 26) & 8) == 0 ? 0x3E0001u : 0;
  if ( (*(_BYTE *)(v7 + 26) & 8) != 0 )
  {
    v15 = (_QWORD *)ValidateHmonitorNoRip(*(_QWORD *)(v7 + 256));
    UpdateWindowSpriteMonitor((__int64)a1, v15);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18, v16, v17);
    }
    return 0;
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  v4 = xxxSetLayeredWindow(a1, 0, &v19);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18, v8, v9);
  if ( v4 >= 0 )
  {
    v4 = SetLayeredWindowAttributes(a1, 0, 255, 4 * (a2 & 4 | 1u));
    if ( v4 < 0 )
    {
      UnsetLayeredWindow(a1);
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 2u;
      v11 = *((_QWORD *)a1 + 5);
      v12 = *(_QWORD *)a1;
      v13 = *(_DWORD *)(v11 + 232);
      v14 = (void *)ReferenceDwmApiPort(v10);
      DwmAsyncChildStyleChange(v14, v12, -268435456, v13);
    }
  }
  return (unsigned int)v4;
}
