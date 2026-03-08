/*
 * XREFs of ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C00E6C80
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C00E6C30 (-RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01BB984 (xxxAppAdjustDpiCandidateRect.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall HasMaximizedState(const struct tagWND *a1)
{
  bool v1; // al
  __int64 v2; // rcx
  char v3; // dl
  __int64 v4; // rcx

  v1 = IsSemiMaximized(a1);
  v3 = 0;
  if ( v1 )
    return 1;
  v4 = *(_QWORD *)(v2 + 40);
  if ( (*(_BYTE *)(v4 + 31) & 1) != 0 || (*(_BYTE *)(v4 + 20) & 0x40) != 0 )
    return 1;
  return v3;
}
