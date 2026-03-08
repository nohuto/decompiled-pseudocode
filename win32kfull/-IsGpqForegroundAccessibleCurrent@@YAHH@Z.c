/*
 * XREFs of ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C00174F8
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C00172DC (xxxInternalKeyEventDirect.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AC80C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01B19B4 (xxxInjectTouchInput.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00DCF88 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleCurrent(unsigned int a1)
{
  struct tagTHREADINFO *v2; // rax

  v2 = PtiCurrentShared();
  return IsGpqForegroundAccessibleExplicit(
           a1,
           v2,
           *(_QWORD *)(*((_QWORD *)v2 + 53) + 864LL),
           *(_DWORD *)(*((_QWORD *)v2 + 53) + 12LL) & 0x80000000);
}
