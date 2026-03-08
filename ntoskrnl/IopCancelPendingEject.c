/*
 * XREFs of IopCancelPendingEject @ 0x140969D18
 * Callers:
 *     PnpProcessRelation @ 0x140861E18 (PnpProcessRelation.c)
 * Callees:
 *     IoCancelIrp @ 0x1402E4F50 (IoCancelIrp.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 */

void __fastcall IopCancelPendingEject(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) && !_InterlockedExchange((volatile __int32 *)(a1 + 80), 1) )
  {
    IoCancelIrp(*(PIRP *)(a1 + 72));
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 80), 2) == 3 )
      IoFreeIrp(*(PIRP *)(a1 + 72));
  }
}
