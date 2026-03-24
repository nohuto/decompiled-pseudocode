/*
 * XREFs of VfJoinDmaDomain @ 0x1405A1060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x1409CEA50 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfJoinDmaDomain(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64))ViGetRealDmaOperation(a1);
  return RealDmaOperation(a1, a2);
}
