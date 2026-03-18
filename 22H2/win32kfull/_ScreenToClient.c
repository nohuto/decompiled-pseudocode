/*
 * XREFs of _ScreenToClient @ 0x1C00B02A4
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EC5FC (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022F6D8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C0239A1C (xxxArrangeIconicWindows.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScreenToClient(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  result = *(_WORD *)(v2 + 42) & 0x2FFF;
  if ( (_DWORD)result != 669 )
  {
    if ( (*(_BYTE *)(v2 + 26) & 0x40) != 0 )
      *a2 = *(_DWORD *)(v2 + 112) - *a2;
    else
      *a2 -= *(_DWORD *)(v2 + 104);
    result = *(_QWORD *)(a1 + 40);
    a2[1] -= *(_DWORD *)(result + 108);
  }
  return result;
}
