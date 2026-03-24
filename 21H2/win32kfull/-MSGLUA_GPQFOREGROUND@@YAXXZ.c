/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00D5ADC
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0008390 (EditionChangeForegroundQueueForMouseInput.c)
 *     EditionLLMouseButtonHook @ 0x1C00234F0 (EditionLLMouseButtonHook.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C00D59C0 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01034BC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C0103874 (xxxInternalKeyEventDirect.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C01106C0 (EditionForegroundQAccessibleToMouseProducer.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C012A4E0 (EditionReportMouseBreakToAccessibility.c)
 *     EditionLLMouseWheelHook @ 0x1C01D9A20 (EditionLLMouseWheelHook.c)
 *     xxxInjectTouchInput @ 0x1C01DCDAC (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

void MSGLUA_GPQFOREGROUND(void)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 1);
}
