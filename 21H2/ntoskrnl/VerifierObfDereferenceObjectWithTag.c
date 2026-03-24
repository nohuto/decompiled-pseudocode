/*
 * XREFs of VerifierObfDereferenceObjectWithTag @ 0x1409E7DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C658C (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfDereferenceObjectWithTag(ULONG_PTR a1, unsigned int a2)
{
  VfUtilCheckKernelAddress(a1, 8uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvObfDereferenceObjectWithTag)(a1, a2);
}
