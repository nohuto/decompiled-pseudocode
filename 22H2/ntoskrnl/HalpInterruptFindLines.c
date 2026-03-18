/*
 * XREFs of HalpInterruptFindLines @ 0x14031FCA0
 * Callers:
 *     HalpInterruptFindControllerAndLineState @ 0x14031FC08 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptEnableNmi @ 0x14037BC04 (HalpInterruptEnableNmi.c)
 *     HalpInitializeDeferredErrorVector @ 0x14037C338 (HalpInitializeDeferredErrorVector.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x14037C3A8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpConnectThermalInterrupt @ 0x14037C510 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x14037C664 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14037CBF8 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptSetLineState @ 0x14037CD5C (HalpInterruptSetLineState.c)
 *     HalpInterruptIsCmciSupported @ 0x1403AE720 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x1403CFA90 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1405044CC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1405051C4 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpInterruptLineToGsi @ 0x140505230 (HalpInterruptLineToGsi.c)
 *     HalpInterruptRestoreClock @ 0x1405053F8 (HalpInterruptRestoreClock.c)
 *     HalFixInterruptLine @ 0x140521850 (HalFixInterruptLine.c)
 *     HalpInterruptUnmap @ 0x1409334A8 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140A95448 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x14031FD00 (HalpInterruptLookupController.c)
 */

_QWORD *__fastcall HalpInterruptFindLines(unsigned int *a1)
{
  __int64 v1; // rax
  __int64 v2; // r10
  _DWORD *v3; // r11
  _QWORD *v4; // r9
  _QWORD *v5; // r8
  int v6; // eax
  _QWORD *v7; // rcx
  int v8; // edx

  v1 = HalpInterruptLookupController(*a1);
  if ( !v1 )
    return 0LL;
  v4 = (_QWORD *)(v1 + 264);
  v5 = *(_QWORD **)(v1 + 264);
  if ( v5 == (_QWORD *)(v1 + 264) )
    return 0LL;
  v6 = *(_DWORD *)(v2 + 4);
  while ( 1 )
  {
    v7 = v5;
    v5 = (_QWORD *)*v5;
    v8 = *((_DWORD *)v7 + 5);
    if ( v8 <= v6 && *((_DWORD *)v7 + 6) > v6 )
      break;
    if ( v5 == v4 )
      return 0LL;
  }
  if ( v3 )
    *v3 = v6 - v8;
  return v7;
}
