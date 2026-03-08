/*
 * XREFs of KiVerifyXcpt12$fin$0 @ 0x140B78E15
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall KiVerifyXcpt12_fin_0(char a1, __int64 a2)
{
  _QWORD *v2; // rdx
  _DWORD *result; // rax

  if ( a1 )
  {
    v2 = *(_QWORD **)(a2 + 64);
    result = (_DWORD *)*v2;
    ++*(_DWORD *)*v2;
  }
  return result;
}
