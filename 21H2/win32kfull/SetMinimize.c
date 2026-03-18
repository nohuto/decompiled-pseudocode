/*
 * XREFs of SetMinimize @ 0x1C00CB6A0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     DecVisWindows @ 0x1C001FD7C (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0020088 (IncVisWindows.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 */

__int64 __fastcall SetMinimize(struct tagWND *a1, char a2)
{
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      DecVisWindows(a1);
    return SetOrClrWF(1, a1, 0xF20u, 1);
  }
  else
  {
    SetOrClrWF(0, a1, 0xF20u, 1);
    result = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(result + 31) & 0x10) != 0 )
      return IncVisWindows(a1);
  }
  return result;
}
