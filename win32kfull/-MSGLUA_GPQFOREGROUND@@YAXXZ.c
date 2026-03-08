/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00F02AC
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C00172DC (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C0044BD0 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C00DC110 (EditionForegroundQAccessibleToMouseProducer.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AC80C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C01ACF90 (EditionChangeForegroundQueueForMouseInput.c)
 *     EditionLLMouseButtonHook @ 0x1C01AD480 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01AD660 (EditionLLMouseWheelHook.c)
 *     EditionxxxReportMouseBreakToAccessibility @ 0x1C01AD790 (EditionxxxReportMouseBreakToAccessibility.c)
 *     xxxInjectTouchInput @ 0x1C01B19B4 (xxxInjectTouchInput.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall MSGLUA_GPQFOREGROUND(__int64 a1)
{
  struct tagTHREADINFO *v1; // rax

  v1 = PtiCurrentShared(a1);
  EtwTraceUIPIInputError(v1, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432LL), 1);
}
