/*
 * XREFs of ??$_Push_heap_by_index@PEAU?$pair@MH@std@@U12@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@_J1$$QEAU10@U?$less@X@0@@Z @ 0x1804BF8CC
 * Callers:
 *     ??$_Pop_heap_hole_by_index@PEAU?$pair@MH@std@@U12@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@_J1$$QEAU10@U?$less@X@0@@Z @ 0x1804BF830 (--$_Pop_heap_hole_by_index@PEAU-$pair@MH@std@@U12@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@_J1$$QEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Push_heap_by_index<std::pair<float,int> *,std::pair<float,int>,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r10
  float v5; // xmm0_4
  __int64 result; // rax

  if ( a3 < a2 )
  {
    do
    {
      v4 = (a2 - 1) >> 1;
      v5 = *(float *)(a1 + 8 * v4);
      if ( *(float *)a4 <= v5 && (v5 > *(float *)a4 || *(_DWORD *)(a1 + 8 * v4 + 4) >= *(_DWORD *)(a4 + 4)) )
        break;
      *(float *)(a1 + 8 * a2) = v5;
      *(_DWORD *)(a1 + 8 * a2 + 4) = *(_DWORD *)(a1 + 8 * v4 + 4);
      a2 = (a2 - 1) >> 1;
    }
    while ( a3 < v4 );
  }
  *(_DWORD *)(a1 + 8 * a2) = *(_DWORD *)a4;
  result = *(unsigned int *)(a4 + 4);
  *(_DWORD *)(a1 + 8 * a2 + 4) = result;
  return result;
}
