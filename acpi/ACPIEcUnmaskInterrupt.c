/*
 * XREFs of ACPIEcUnmaskInterrupt @ 0x1C0002CF6
 * Callers:
 *     ACPIEcGpioDpcRoutine @ 0x1C0024EB0 (ACPIEcGpioDpcRoutine.c)
 *     ACPIEcServiceDevice @ 0x1C0025C50 (ACPIEcServiceDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIVectorEnable @ 0x1C00050C0 (ACPIVectorEnable.c)
 */

__int64 __fastcall ACPIEcUnmaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return HalPrivateDispatchTable[61](*(unsigned int *)(a1 + 900), 2LL);
  else
    return ACPIVectorEnable(0LL, *(_QWORD *)(a1 + 72));
}
