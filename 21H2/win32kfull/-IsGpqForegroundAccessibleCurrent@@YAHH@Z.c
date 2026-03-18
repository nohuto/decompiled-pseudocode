/*
 * XREFs of ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C007FB78
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C007F8CC (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C007FB50 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00F575C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01D73EC (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00F5CE8 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleCurrent(unsigned int a1)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return IsGpqForegroundAccessibleExplicit(
           a1,
           ThreadWin32Thread,
           *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 880LL),
           *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 12LL) & 0x80000000);
}
