/*
 * XREFs of _lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_ @ 0x1C01AEEB0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

char __fastcall lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 *v1; // rax

  v1 = (__int64 *)ValidateHwnd(a1);
  if ( v1 )
    LOBYTE(v1) = SetOrClrWF(0, v1, 0x210u, 1);
  return (char)v1;
}
