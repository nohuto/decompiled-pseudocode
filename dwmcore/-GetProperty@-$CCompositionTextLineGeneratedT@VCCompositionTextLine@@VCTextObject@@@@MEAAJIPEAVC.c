/*
 * XREFs of ?GetProperty@?$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1801C1560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionTextLineGeneratedT<CCompositionTextLine,CTextObject>::GetProperty(
        _DWORD *a1,
        int a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // edx
  int v6; // xmm0_4

  result = 0LL;
  v4 = a2 - 3;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 2147942487LL;
      v6 = a1[24];
    }
    else
    {
      v6 = a1[23];
    }
  }
  else
  {
    v6 = a1[22];
  }
  *(_DWORD *)a3 = v6;
  *(_DWORD *)(a3 + 72) = 18;
  *(_BYTE *)(a3 + 76) = 1;
  return result;
}
