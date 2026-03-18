/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00B7D5C
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C000A61C (xxxInternalKeyEventDirect.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C00A5010 (EditionForegroundQAccessibleToMouseProducer.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C00ECF30 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AB63C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C01ABDC0 (EditionChangeForegroundQueueForMouseInput.c)
 *     EditionLLMouseButtonHook @ 0x1C01AC290 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01AC470 (EditionLLMouseWheelHook.c)
 *     EditionxxxReportMouseBreakToAccessibility @ 0x1C01AC5A0 (EditionxxxReportMouseBreakToAccessibility.c)
 *     xxxInjectTouchInput @ 0x1C01B07F4 (xxxInjectTouchInput.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void MSGLUA_GPQFOREGROUND(void)
{
  struct tagTHREADINFO *v0; // rax

  v0 = PtiCurrentShared();
  EtwTraceUIPIInputError(v0, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432LL));
}
