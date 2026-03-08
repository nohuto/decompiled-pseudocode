/*
 * XREFs of ?GetProperty@CAnimationController@@EEAAJIPEAVCExpressionValue@@@Z @ 0x1800F85D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationController::GetProperty(CAnimationController *this, int a2, struct CExpressionValue *a3)
{
  int v3; // edx
  int v4; // xmm0_4
  __int64 result; // rax

  v3 = a2 - 1;
  if ( !v3 )
  {
    v4 = *((_DWORD *)this + 20);
LABEL_3:
    *((_DWORD *)a3 + 18) = 18;
    result = 0LL;
    *(_DWORD *)a3 = v4;
    *((_BYTE *)a3 + 76) = 1;
    return result;
  }
  if ( v3 == 1 )
  {
    v4 = *((_DWORD *)this + 21);
    goto LABEL_3;
  }
  return 2147942487LL;
}
