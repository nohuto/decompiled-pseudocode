/*
 * XREFs of ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C009EED4
 * Callers:
 *     EditionHandleRawInput @ 0x1C009EE40 (EditionHandleRawInput.c)
 * Callees:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0008F6C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     HasHidTable @ 0x1C0038CB0 (HasHidTable.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     HasRawInputForegroundTarget @ 0x1C009EFE4 (HasRawInputForegroundTarget.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0148BAC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 */

__int64 __fastcall HandleRawInput(void *a1, struct _KEYBOARD_INPUT_DATA *a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebp
  __int64 v10; // rsi
  int v11; // r14d
  int v12; // eax
  int v13; // edx
  __int16 v15; // ax
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  char v18; // [rsp+90h] [rbp+18h] BYREF

  v6 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  v16 = 0LL;
  v17 = 0LL;
  v9 = HasRawInputForegroundTarget(&v16, v7);
  v10 = *((_QWORD *)&v16 + 1);
  if ( *(_DWORD *)(a3 + 20) )
  {
    if ( !v9 )
      goto LABEL_12;
    if ( (*(_DWORD *)(*((_QWORD *)&v16 + 1) + 1272LL) & 0x200000) == 0 )
      goto LABEL_21;
  }
  v11 = 0;
  if ( v9 )
  {
    v12 = PostRawKeyboardInputToForeground(
            (struct _RAW_INPUT_FOREGROUND_TARGET *)&v16,
            *(_DWORD *)a3,
            a1,
            a2,
            *(_DWORD *)(a3 + 4),
            *(_WORD *)(a3 + 8));
    v10 = *((_QWORD *)&v16 + 1);
    v11 = v12;
  }
  if ( !*(_DWORD *)(a3 + 20) )
  {
    if ( *(_DWORD *)(SGDGetUserSessionState(v8) + 16848) )
      PostRawKeyboardInputToSinks(*(_DWORD *)a3, a1, a2, *(_DWORD *)(a3 + 4), *(_WORD *)(a3 + 8), v11);
    if ( *(_DWORD *)(a3 + 12) )
      goto LABEL_22;
  }
  if ( v9 )
  {
LABEL_21:
    if ( *(_DWORD *)(a3 + 16)
      || (unsigned int)HasHidTable(v10)
      && (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 424) + 824LL) + 100LL), (v13 & 0x20) != 0)
      && ((*(_DWORD *)(v10 + 1272) & 0x200000) != 0 || (v15 = *(_WORD *)(a3 + 8), v15 != 18)
                                                    && v15 != 9
                                                    && !gspwndAltTab)
      && ((v13 & 0x400) == 0 || (unsigned __int16)(*(_WORD *)(a3 + 8) - 166) > 0x11u) )
    {
LABEL_22:
      v6 = 1;
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18);
    }
  }
LABEL_12:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18);
  return v6;
}
