/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_830a858705f438bc5eb56dc5316ebd68_@@CAXXZ @ 0x1800C14E0
 * Callers:
 *     <none>
 * Callees:
 *     InitOnceBeginInitialize_0 @ 0x180053DF6 (InitOnceBeginInitialize_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void _lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
}
