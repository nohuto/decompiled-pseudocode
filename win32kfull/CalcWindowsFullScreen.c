/*
 * XREFs of CalcWindowsFullScreen @ 0x1C00F5D10
 * Callers:
 *     <none>
 * Callees:
 *     CalcWindowFullScreen @ 0x1C006789C (CalcWindowFullScreen.c)
 */

_QWORD *__fastcall CalcWindowsFullScreen(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD **v2; // rbx

  result = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 112LL);
  if ( result )
  {
    while ( 1 )
    {
      v2 = (_QWORD **)(result + 11);
      if ( !result[11] )
        break;
      CalcWindowFullScreen((struct tagWND *)result);
      result = *v2;
    }
  }
  return result;
}
