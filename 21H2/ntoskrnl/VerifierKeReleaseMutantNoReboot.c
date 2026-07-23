/*
 * XREFs of VerifierKeReleaseMutantNoReboot @ 0x1409DC2B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C758C (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierKeReleaseMutantNoReboot(ULONG_PTR a1, unsigned int a2, char a3, char a4)
{
  __int64 v8; // r9
  __int64 v9; // r8

  VfUtilCheckKernelAddress(a1, 0x38uLL);
  LOBYTE(v8) = a4;
  LOBYTE(v9) = a3;
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, __int64))pXdvKeReleaseMutant)(a1, a2, v9, v8);
}
