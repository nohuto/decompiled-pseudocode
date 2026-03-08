/*
 * XREFs of HalpInterruptSetLineStateInternal @ 0x1403796D0
 * Callers:
 *     HalDisableInterrupt @ 0x14028E8F0 (HalDisableInterrupt.c)
 *     HalpMaskInterrupt @ 0x140376370 (HalpMaskInterrupt.c)
 *     HalpInitializeDeferredErrorVector @ 0x140378988 (HalpInitializeDeferredErrorVector.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403789F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpConnectThermalInterrupt @ 0x140378B60 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x140378CB4 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetLineState @ 0x1403793AC (HalpInterruptSetLineState.c)
 *     HalpUnmaskInterrupt @ 0x140379600 (HalpUnmaskInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403A9F64 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptSetDestinationInternal @ 0x1405023EC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1405025EC (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRestoreClock @ 0x140503318 (HalpInterruptRestoreClock.c)
 *     HalpInterruptServiceActiveBoth @ 0x1405047BC (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptRestoreController @ 0x140518478 (HalpInterruptRestoreController.c)
 *     HalpInterruptMaskLevelTriggeredLines @ 0x14051E900 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptMaskAcpi @ 0x140A92308 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
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
