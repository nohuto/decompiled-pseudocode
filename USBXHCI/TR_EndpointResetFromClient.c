/*
 * XREFs of TR_EndpointResetFromClient @ 0x1C004182C
 * Callers:
 *     ESM_NotifyingTransferRingsEndpointResetFromClient @ 0x1C00517B0 (ESM_NotifyingTransferRingsEndpointResetFromClient.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_EndpointResetFromClient(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 128LL))();
}
