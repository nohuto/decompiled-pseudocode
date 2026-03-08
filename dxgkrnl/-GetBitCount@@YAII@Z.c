/*
 * XREFs of ?GetBitCount@@YAII@Z @ 0x1C01DAD68
 * Callers:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C01B1C68 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     DxgkCreateContext @ 0x1C02E06B0 (DxgkCreateContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBitCount(int a1)
{
  __int64 result; // rax

  for ( result = 0LL; a1; a1 &= a1 - 1 )
    result = (unsigned int)(result + 1);
  return result;
}
