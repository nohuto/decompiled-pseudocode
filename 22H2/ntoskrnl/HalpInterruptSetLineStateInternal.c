/*
 * XREFs of HalpInterruptSetLineStateInternal @ 0x14037D080
 * Callers:
 *     HalDisableInterrupt @ 0x14031F710 (HalDisableInterrupt.c)
 *     HalpInitializeDeferredErrorVector @ 0x14037C338 (HalpInitializeDeferredErrorVector.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x14037C3A8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpConnectThermalInterrupt @ 0x14037C510 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x14037C664 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetLineState @ 0x14037CD5C (HalpInterruptSetLineState.c)
 *     HalpUnmaskInterrupt @ 0x14037CFB0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403AECB4 (HalpInterruptRemapFixedLines.c)
 *     HalpMaskInterrupt @ 0x1403B1FF0 (HalpMaskInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1405044CC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1405046CC (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRestoreClock @ 0x1405053F8 (HalpInterruptRestoreClock.c)
 *     HalpInterruptServiceActiveBoth @ 0x14050689C (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptRestoreController @ 0x14051A9A8 (HalpInterruptRestoreController.c)
 *     HalpInterruptMaskLevelTriggeredLines @ 0x140520E30 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptMaskAcpi @ 0x140A95448 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x14051AAC8 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetLineStateInternal(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v4; // r10d
  int v5; // ebx
  int v6; // r8d
  __int16 v8; // [rsp+30h] [rbp-8h]

  v3 = *(_DWORD *)(a3 + 12);
  v4 = v3 | 1;
  v5 = a1;
  if ( (v3 & 0x30) != 0x10 )
    v4 = *(_DWORD *)(a3 + 12) & 0xFFFFFFFE;
  *(_DWORD *)(a3 + 12) = v4;
  if ( (*(_DWORD *)(a1 + 244) & 0x200) != 0 )
  {
    _disable();
    v6 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 112))(*(_QWORD *)(a1 + 16));
    if ( (v8 & 0x200) != 0 )
      _enable();
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 112))(*(_QWORD *)(a1 + 16));
  }
  if ( v6 < 0 )
    HalpInterruptSetProblemEx(v5, 7, v6, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3172);
  return (unsigned int)v6;
}
