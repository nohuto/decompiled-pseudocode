/*
 * XREFs of VfGetDmaDomain @ 0x1405FE5E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x140A88738 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfGetDmaDomain(__int64 a1)
{
  __int64 (__fastcall *RealDmaOperation)(__int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64))ViGetRealDmaOperation(a1);
  return RealDmaOperation(a1);
}
