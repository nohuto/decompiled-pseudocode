/*
 * XREFs of ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C0042068
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C003E504 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C003E97C (xxxDeferWindowPosAndCheckPoint.c)
 *     FindOldMonitor @ 0x1C0041E3C (FindOldMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall PlaceHolderMonitor::Reset(PlaceHolderMonitor *this, struct tagMONITORPOS *a2)
{
  *(_DWORD *)(*((_QWORD *)this + 16) + 28LL) = *(_DWORD *)a2;
  *(_DWORD *)(*((_QWORD *)this + 16) + 32LL) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(*((_QWORD *)this + 16) + 36LL) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(*((_QWORD *)this + 16) + 40LL) = *((_DWORD *)a2 + 3);
  *(_DWORD *)(*((_QWORD *)this + 16) + 44LL) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(*((_QWORD *)this + 16) + 48LL) = *((_DWORD *)a2 + 5);
  *(_DWORD *)(*((_QWORD *)this + 16) + 52LL) = *((_DWORD *)a2 + 6);
  *(_DWORD *)(*((_QWORD *)this + 16) + 56LL) = *((_DWORD *)a2 + 7);
  *(_WORD *)(*((_QWORD *)this + 16) + 64LL) = *((_WORD *)a2 + 16);
  *(_WORD *)(*((_QWORD *)this + 16) + 66LL) = *((_WORD *)a2 + 17);
}
