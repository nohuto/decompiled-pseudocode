/*
 * XREFs of ?FindItem@GridLayout@@QEAAJAEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K1@Z @ 0x180426F08
 * Callers:
 *     ?GetGridItemCoordinates@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@PEA_K1@Z @ 0x1804164A0 (-GetGridItemCoordinates@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@PEA_K1@Z.c)
 * Callees:
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18040280C (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 */

__int64 __fastcall GridLayout::FindItem(__int64 a1, struct IUnknown **a2, unsigned __int64 *a3, _QWORD *a4)
{
  unsigned __int64 v8; // rax

  *a4 = 0LL;
  *a3 = 0LL;
  if ( !*(_QWORD *)(a1 + 56) )
    return 2147943568LL;
  v8 = 0LL;
  while ( (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
                 (_QWORD *)(*(_QWORD *)(a1 + 48) + 56 * v8 + 24),
                 (__int64)a2,
                 a2,
                 a4) < 0 )
  {
    v8 = *a3 + 1;
    *a3 = v8;
    if ( v8 >= *(_QWORD *)(a1 + 56) )
      return 2147943568LL;
  }
  return 0LL;
}
