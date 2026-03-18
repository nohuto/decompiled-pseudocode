/*
 * XREFs of SetMinimize @ 0x1C00C4434
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     DecVisWindows @ 0x1C00A17FC (DecVisWindows.c)
 *     IncVisWindows @ 0x1C00A1908 (IncVisWindows.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

__int64 __fastcall SetMinimize(struct tagWND *a1, char a2)
{
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      DecVisWindows(a1);
    return SetOrClrWF(1LL, a1, 3872LL, 1LL);
  }
  else
  {
    SetOrClrWF(0LL, a1, 3872LL, 1LL);
    result = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(result + 31) & 0x10) != 0 )
      return IncVisWindows(a1);
  }
  return result;
}
