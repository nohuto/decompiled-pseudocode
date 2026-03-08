/*
 * XREFs of ?GetProperty@?$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1801C1840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTranslateTransform3DGeneratedT<CTranslateTransform3D,CTransform3D>::GetProperty(
        _DWORD *a1,
        int a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // xmm0_4

  result = 0LL;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return 2147942487LL;
      v5 = a1[42];
    }
    else
    {
      v5 = a1[41];
    }
  }
  else
  {
    v5 = a1[40];
  }
  *(_DWORD *)a3 = v5;
  *(_DWORD *)(a3 + 72) = 18;
  *(_BYTE *)(a3 + 76) = 1;
  return result;
}
