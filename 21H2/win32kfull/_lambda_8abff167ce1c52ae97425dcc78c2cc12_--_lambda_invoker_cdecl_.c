/*
 * XREFs of _lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_ @ 0x1C01CE630
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 */

struct tagWND *__fastcall lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_(__int64 a1)
{
  struct tagWND *result; // rax

  result = (struct tagWND *)ValidateHwnd(a1);
  if ( result )
    return (struct tagWND *)SetOrClrWF(0, result, 0x210u, 1);
  return result;
}
