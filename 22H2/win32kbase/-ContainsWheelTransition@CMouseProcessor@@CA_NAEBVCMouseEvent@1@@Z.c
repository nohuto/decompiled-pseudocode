/*
 * XREFs of ?ContainsWheelTransition@CMouseProcessor@@CA_NAEBVCMouseEvent@1@@Z @ 0x1C01F5CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMouseProcessor::ContainsWheelTransition(const struct CMouseProcessor::CMouseEvent *a1)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int16 (__fastcall **)(const struct CMouseProcessor::CMouseEvent *))(*(_QWORD *)a1 + 8LL))(a1) )
    return ((**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a1)(a1) & 0xC00) != 0;
  return v2;
}
