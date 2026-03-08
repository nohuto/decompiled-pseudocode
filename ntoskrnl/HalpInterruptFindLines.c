/*
 * XREFs of HalpInterruptFindLines @ 0x14028EE80
 * Callers:
 *     HalpInterruptFindControllerAndLineState @ 0x14028EDE8 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptEnableNmi @ 0x140378254 (HalpInterruptEnableNmi.c)
 *     HalpInitializeDeferredErrorVector @ 0x140378988 (HalpInitializeDeferredErrorVector.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403789F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpConnectThermalInterrupt @ 0x140378B60 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x140378CB4 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x140379248 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptSetLineState @ 0x1403793AC (HalpInterruptSetLineState.c)
 *     HalpInterruptIsCmciSupported @ 0x1403A99D0 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x1403CA4E0 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1405023EC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1405030E4 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpInterruptLineToGsi @ 0x140503150 (HalpInterruptLineToGsi.c)
 *     HalpInterruptRestoreClock @ 0x140503318 (HalpInterruptRestoreClock.c)
 *     HalFixInterruptLine @ 0x14051F320 (HalFixInterruptLine.c)
 *     HalpInterruptUnmap @ 0x140930578 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140A92308 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x14028EEE0 (HalpInterruptLookupController.c)
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
