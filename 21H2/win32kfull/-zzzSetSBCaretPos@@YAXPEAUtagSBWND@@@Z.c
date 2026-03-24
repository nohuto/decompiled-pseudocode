/*
 * XREFs of ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0245470
 * Callers:
 *     xxxSBWndProc @ 0x1C0246160 (xxxSBWndProc.c)
 * Callees:
 *     zzzSetCaretPos @ 0x1C002B4F0 (zzzSetCaretPos.c)
 */

void __fastcall zzzSetSBCaretPos(struct tagSBWND *a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // ecx

  if ( *(_QWORD *)a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
  {
    v1 = *((_DWORD *)a1 + 2);
    if ( v1 )
      v2 = *((_DWORD *)a1 + 17);
    else
      v2 = *((_DWORD *)a1 + 10);
    if ( v1 )
      v3 = *((_DWORD *)a1 + 10);
    else
      v3 = *((_DWORD *)a1 + 17);
    zzzSetCaretPos(v3 + 2, v2 + 2);
  }
}
