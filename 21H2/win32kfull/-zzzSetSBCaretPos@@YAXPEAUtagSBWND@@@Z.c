/*
 * XREFs of ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C02413D4
 * Callers:
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     zzzSetCaretPos @ 0x1C010A5AC (zzzSetCaretPos.c)
 */

void __fastcall zzzSetSBCaretPos(struct tagSBWND *a1)
{
  int v1; // edx
  int v2; // ecx

  if ( *(_QWORD *)a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
  {
    if ( *((_DWORD *)a1 + 2) )
    {
      v1 = *((_DWORD *)a1 + 17);
      v2 = *((_DWORD *)a1 + 10);
    }
    else
    {
      v1 = *((_DWORD *)a1 + 10);
      v2 = *((_DWORD *)a1 + 17);
    }
    zzzSetCaretPos(v2 + 2, v1 + 2);
  }
}
