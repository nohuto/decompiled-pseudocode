/*
 * XREFs of ?GetProperty@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1801C15B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::GetProperty(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    return 2147942487LL;
  *(_DWORD *)a3 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a3 + 72) = 18;
  *(_BYTE *)(a3 + 76) = 1;
  return result;
}
