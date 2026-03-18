/*
 * XREFs of VfConfigureAdapterChannel @ 0x140AC6CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     ViGetRealDmaAdapter @ 0x140ACA158 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfConfigureAdapterChannel(int a1, unsigned int a2, __int64 a3)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 168LL))(
           RealDmaAdapter,
           a2,
           a3);
}
