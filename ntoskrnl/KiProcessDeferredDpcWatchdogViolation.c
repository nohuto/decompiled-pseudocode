/*
 * XREFs of KiProcessDeferredDpcWatchdogViolation @ 0x140578D88
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x1402B7620 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x140549640 (VslKernelShadowStackAssist.c)
 */

void (__fastcall __noreturn *__fastcall KiProcessDeferredDpcWatchdogViolation(__int64 a1))(__int64 a1)
{
  void (__fastcall __noreturn *result)(__int64); // rax

  KiDeferredDpcWatchdogActivePrcb = 1LL;
  KiInjectedMachineFrame = 0LL;
  xmmword_140C410D0 = 0LL;
  xmmword_140C410E0 = 0LL;
  LOWORD(xmmword_140C410E0) = *(_WORD *)(a1 + 392);
  *((_QWORD *)&xmmword_140C410D0 + 1) = *(_QWORD *)(a1 + 384);
  LODWORD(xmmword_140C410D0) = *(_DWORD *)(a1 + 376);
  WORD4(KiInjectedMachineFrame) = *(_WORD *)(a1 + 368);
  *(_QWORD *)&KiInjectedMachineFrame = *(_QWORD *)(a1 + 360);
  *((_QWORD *)&xmmword_140C410E0 + 1) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = &KiInjectedMachineFrame;
  result = KiDeferredDpcWatchdogViolation;
  *(_QWORD *)(a1 + 360) = KiDeferredDpcWatchdogViolation;
  if ( (_BYTE)KiKernelCetEnabled )
    return (void (__fastcall __noreturn *)(__int64))VslKernelShadowStackAssist(
                                                      3,
                                                      *(_QWORD *)(a1 + 216),
                                                      0LL,
                                                      0LL,
                                                      (ULONG_PTR)KiDeferredDpcWatchdogViolation,
                                                      4);
  return result;
}
