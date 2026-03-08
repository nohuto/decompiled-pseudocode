/*
 * XREFs of ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0006294
 * Callers:
 *     zzzSetCaretPos @ 0x1C0005ED8 (zzzSetCaretPos.c)
 *     zzzInternalShowCaret @ 0x1C00061E4 (zzzInternalShowCaret.c)
 *     _SetCaretBlinkTime @ 0x1C010C2C0 (_SetCaretBlinkTime.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0006384 (_SetSystemTimer.c)
 */

void __fastcall CreateCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  int v3; // edi

  v3 = (int)a1;
  if ( !*((_QWORD *)a2 + 44)
    && *(_DWORD *)(gpsi + 4984LL) != -1
    && *(_DWORD *)UPDWORDPointer(8226LL)
    && ((*(_DWORD *)(gpsi + 2236LL) & 4) != 0 || !gProtocolType) )
  {
    *((_QWORD *)a2 + 44) = SetSystemTimer(v3, 0xFFFF, *(_DWORD *)(gpsi + 4984LL), (unsigned int)CaretBlinkProc, 0);
    if ( *(_DWORD *)(gpsi + 4984LL) )
      *((_DWORD *)a2 + 80) = *(_DWORD *)UPDWORDPointer(8226LL) / *(_DWORD *)(gpsi + 4984LL) + 1;
    else
      *((_DWORD *)a2 + 80) = -1;
  }
}
