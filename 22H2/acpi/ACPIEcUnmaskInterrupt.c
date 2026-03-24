/*
 * XREFs of ACPIEcUnmaskInterrupt @ 0x1C0053800
 * Callers:
 *     ACPIEcGpioDpcRoutine @ 0x1C00534C0 (ACPIEcGpioDpcRoutine.c)
 *     ACPIEcServiceDevice @ 0x1C0054390 (ACPIEcServiceDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     ACPIVectorEnable @ 0x1C0060F30 (ACPIVectorEnable.c)
 */

__int64 __fastcall ACPIEcUnmaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return ((__int64 (__fastcall *)(_QWORD, __int64))HalPrivateDispatchTable[61])(*(unsigned int *)(a1 + 900), 2LL);
  else
    return ACPIVectorEnable(0LL, *(_QWORD *)(a1 + 72));
}
