/*
 * XREFs of ?GetProperty@CAnimationTrigger@@EEAAJIPEAVCExpressionValue@@@Z @ 0x180020070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationTrigger::GetProperty(CAnimationTrigger *this, int a2, struct CExpressionValue *a3)
{
  __int64 result; // rax
  char v4; // cl

  result = 0LL;
  if ( a2 )
    return 2147942487LL;
  v4 = *((_BYTE *)this + 128) & 1;
  *((_DWORD *)a3 + 18) = 17;
  *(_BYTE *)a3 = v4;
  *((_BYTE *)a3 + 76) = 1;
  return result;
}
