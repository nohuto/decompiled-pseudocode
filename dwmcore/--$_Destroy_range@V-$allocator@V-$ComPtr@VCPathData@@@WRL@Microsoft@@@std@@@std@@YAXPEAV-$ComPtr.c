/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x18023640C
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180097428 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x18023655C (--$_Uninitialized_move@PEAV-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathDat.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@_K1@Z @ 0x180236E18 (-_Change_array@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathData@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
