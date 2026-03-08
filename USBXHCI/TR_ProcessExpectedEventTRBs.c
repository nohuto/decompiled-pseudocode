/*
 * XREFs of TR_ProcessExpectedEventTRBs @ 0x1C000FCB0
 * Callers:
 *     ESM_ProcessingExpectedEventTRBsAfterEndpointStop @ 0x1C000F650 (ESM_ProcessingExpectedEventTRBsAfterEndpointStop.c)
 *     ESM_ProcessingExpectedEventTRBsAfterEndpointHalt @ 0x1C00518B0 (ESM_ProcessingExpectedEventTRBsAfterEndpointHalt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_ProcessExpectedEventTRBs(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 136LL))();
}
