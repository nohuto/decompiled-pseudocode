/*
 * XREFs of HalpIommuReportIommuFault @ 0x1405161A0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpIommuTraceFault @ 0x1405161EC (HalpIommuTraceFault.c)
 */

__int64 __fastcall HalpIommuReportIommuFault(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax
  ULONG_PTR v3; // r10

  result = (unsigned int)HalpIommuRootIommuFaultPolicy;
  v3 = *(_QWORD *)(a2 + 16);
  if ( HalpIommuRootIommuFaultPolicy == 1 )
    return HalpIommuTraceFault(BugCheckParameter2, v3, *(unsigned int *)(a2 + 28), *(unsigned int *)(a2 + 40));
  if ( !HalpIommuRootIommuFaultPolicy )
    KeBugCheckEx(0xE6u, 0x26uLL, BugCheckParameter2, v3, *(unsigned int *)(a2 + 28));
  return result;
}
