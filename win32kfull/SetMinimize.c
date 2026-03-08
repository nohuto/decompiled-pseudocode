/*
 * XREFs of SetMinimize @ 0x1C010182C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     DecVisWindows @ 0x1C002A17C (DecVisWindows.c)
 *     IncVisWindows @ 0x1C002E484 (IncVisWindows.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

char __fastcall SetMinimize(struct tagWND *a1, char a2)
{
  __int64 v3; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      DecVisWindows(a1);
    LOBYTE(v3) = SetOrClrWF(1, (__int64 *)a1, 0xF20u, 1);
  }
  else
  {
    SetOrClrWF(0, (__int64 *)a1, 0xF20u, 1);
    v3 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v3 + 31) & 0x10) != 0 )
      LOBYTE(v3) = IncVisWindows(a1);
  }
  return v3;
}
