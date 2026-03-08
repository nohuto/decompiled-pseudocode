/*
 * XREFs of ACPIEcMaskInterrupt @ 0x1C0002CB0
 * Callers:
 *     ACPIEcGpioServiceRoutine @ 0x1C0024EE0 (ACPIEcGpioServiceRoutine.c)
 *     ACPIEcServiceDevice @ 0x1C0025C50 (ACPIEcServiceDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIVectorDisable @ 0x1C0004FF0 (ACPIVectorDisable.c)
 */

__int64 __fastcall ACPIEcMaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return HalPrivateDispatchTable[60](*(unsigned int *)(a1 + 900), 1LL);
  else
    return ACPIVectorDisable(0LL, *(_QWORD *)(a1 + 72));
}
