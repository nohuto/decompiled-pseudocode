/*
 * XREFs of ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1C00DE17C
 * Callers:
 *     NtUserIsWindowBroadcastingDpiToChildren @ 0x1C00DE0D0 (NtUserIsWindowBroadcastingDpiToChildren.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01BB984 (xxxAppAdjustDpiCandidateRect.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 */

char __fastcall IsWindowBroadcastingDpiToChildrenX(struct tagWND *a1)
{
  char v1; // r8
  int v2; // edx
  __int64 v3; // rcx

  v1 = 0;
  v2 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( v2 == 3 || v2 == 2 && IsTopLevelWindow((__int64)a1) && (*(_DWORD *)(v3 + 320) & 0x100000) != 0 )
    return 1;
  return v1;
}
