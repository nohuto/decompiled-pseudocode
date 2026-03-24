/*
 * XREFs of ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C00426C8
 * Callers:
 *     IsSmallerThanScreen @ 0x1C002C4B0 (IsSmallerThanScreen.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C003E97C (xxxDeferWindowPosAndCheckPoint.c)
 *     GetMaxTrackSizeForWindow @ 0x1C00424BC (GetMaxTrackSizeForWindow.c)
 *     SelectWindowRgn @ 0x1C0111AAC (SelectWindowRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCompositedDpi(const struct tagWND *a1)
{
  unsigned __int16 v1; // r8
  __int64 v2; // rax

  v1 = 0;
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL);
  if ( v2 && (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 1) != 0 )
    return (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF;
  return v1;
}
