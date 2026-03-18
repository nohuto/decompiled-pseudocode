/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C007FBC0
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0004560 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxInternalKeyEventDirect @ 0x1C007F8CC (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C007FB50 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     EditionLLMouseButtonHook @ 0x1C00EA420 (EditionLLMouseButtonHook.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00F575C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C00FD560 (EditionForegroundQAccessibleToMouseProducer.c)
 *     EditionxxxReportMouseBreakToAccessibility @ 0x1C0116E10 (EditionxxxReportMouseBreakToAccessibility.c)
 *     EditionLLMouseWheelHook @ 0x1C01D41E0 (EditionLLMouseWheelHook.c)
 *     xxxInjectTouchInput @ 0x1C01D73EC (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

void MSGLUA_GPQFOREGROUND(void)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 424LL), 1);
}
