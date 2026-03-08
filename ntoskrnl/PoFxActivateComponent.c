/*
 * XREFs of PoFxActivateComponent @ 0x140305CE0
 * Callers:
 *     PopFxActivateDevice @ 0x140202154 (PopFxActivateDevice.c)
 *     HalpInterruptInitPowerManagement @ 0x1403930CC (HalpInterruptInitPowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x1403931E8 (HalpTimerInitPowerManagement.c)
 *     PoFxStartDevicePowerManagement @ 0x140393C70 (PoFxStartDevicePowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x14039826C (HalpDmaInitPowerManagement.c)
 *     DifPoFxActivateComponentWrapper @ 0x1405E6D10 (DifPoFxActivateComponentWrapper.c)
 *     PopFxUnregisterDevice @ 0x140982DC4 (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x140B5E498 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxActivateComponent @ 0x140305D50 (PopFxActivateComponent.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  __int64 v3; // r8

  v3 = a3 & 0xFFFFFFF7;
  if ( (v3 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  if ( (v3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  return PopFxActivateComponent(
           BugCheckParameter2,
           *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * (unsigned int)BugCheckParameter3),
           v3);
}
