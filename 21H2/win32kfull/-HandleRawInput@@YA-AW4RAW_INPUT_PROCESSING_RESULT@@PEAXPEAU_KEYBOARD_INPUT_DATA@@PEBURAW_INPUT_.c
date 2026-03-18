/*
 * XREFs of ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00AA5A8
 * Callers:
 *     EditionHandleRawInput @ 0x1C00AA4E0 (EditionHandleRawInput.c)
 * Callees:
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0001838 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0001A18 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     HasRawInputForegroundTarget @ 0x1C00AA6E8 (HasRawInputForegroundTarget.c)
 *     HasHidTable @ 0x1C00ABFD0 (HasHidTable.c)
 */

__int64 __fastcall HandleRawInput(void *a1, struct _KEYBOARD_INPUT_DATA *a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // ebp
  __int64 v11; // rsi
  int v12; // ecx
  int v14; // eax
  __int16 v15; // ax
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]
  char v18; // [rsp+80h] [rbp+18h] BYREF

  v6 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  v16 = 0LL;
  v17 = 0LL;
  v7 = HasRawInputForegroundTarget(&v16);
  v9 = *(unsigned int *)(a3 + 20);
  v10 = v7;
  v11 = *((_QWORD *)&v16 + 1);
  if ( !(_DWORD)v9 )
    goto LABEL_2;
  if ( !v7 )
    goto LABEL_9;
  if ( (*(_DWORD *)(*((_QWORD *)&v16 + 1) + 1256LL) & 0x200000) != 0 )
  {
LABEL_2:
    v12 = 0;
    if ( v7 )
    {
      v14 = PostRawKeyboardInputToForeground(
              (struct _RAW_INPUT_FOREGROUND_TARGET *)&v16,
              *(_DWORD *)a3,
              a1,
              a2,
              *(_DWORD *)(a3 + 4),
              *(_WORD *)(a3 + 8));
      v9 = *(unsigned int *)(a3 + 20);
      v12 = v14;
      v11 = *((_QWORD *)&v16 + 1);
    }
    if ( !(_DWORD)v9 )
    {
      if ( gHidCounters[0] )
        PostRawKeyboardInputToSinks(*(_DWORD *)a3, a1, a2, *(_DWORD *)(a3 + 4), *(_WORD *)(a3 + 8), v12);
      if ( *(_DWORD *)(a3 + 12) )
        goto LABEL_23;
    }
    if ( !v10 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(a3 + 16)
    || (unsigned int)HasHidTable(v11)
    && (v9 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 424) + 832LL) + 100LL), (v9 & 0x20) != 0)
    && ((*(_DWORD *)(v11 + 1256) & 0x200000) != 0 || (v15 = *(_WORD *)(a3 + 8), v15 != 18) && v15 != 9 && !gspwndAltTab)
    && ((v9 & 0x400) == 0 || (unsigned __int16)(*(_WORD *)(a3 + 8) - 166) > 0x11u) )
  {
LABEL_23:
    v6 = 1;
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18, v9, v8);
  }
LABEL_9:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18, v9, v8);
  return v6;
}
