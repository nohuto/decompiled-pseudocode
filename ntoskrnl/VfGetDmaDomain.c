/*
 * XREFs of VfGetDmaDomain @ 0x1405CC4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfGetDmaDomain(int a1)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(RealDmaAdapter + 8) + 264LL))(RealDmaAdapter);
}
