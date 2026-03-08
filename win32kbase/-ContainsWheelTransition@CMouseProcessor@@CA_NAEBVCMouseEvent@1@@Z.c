/*
 * XREFs of ?ContainsWheelTransition@CMouseProcessor@@CA_NAEBVCMouseEvent@1@@Z @ 0x1C00BD240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMouseProcessor::ContainsWheelTransition(const struct CMouseProcessor::CMouseEvent *a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 30LL) )
    return ((**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a1)(a1) & 0xC00) != 0;
  return v1;
}
