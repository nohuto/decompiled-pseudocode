/*
 * XREFs of ?AgeOutOcclusionInfos@CTreeData@@IEAAXXZ @ 0x1800E8E18
 * Callers:
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@AEBVCBackdropVisualImageKey@@_N@Z @ 0x1800E8D7C (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@AEBVCBackdropVisualImageKey@@_N@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180043738 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 */

void __fastcall CTreeData::AgeOutOcclusionInfos(CTreeData *this)
{
  __int64 v2; // rax
  __int64 *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  bool v6; // zf
  __int64 v7; // rbx

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 16LL) + 496LL);
  if ( *((_QWORD *)this + 30) != v2 )
  {
    v3 = (__int64 *)((char *)this + 200);
    *((_QWORD *)this + 30) = v2;
    v4 = *((_QWORD *)this + 25);
    while ( v4 != *((_QWORD *)this + 26) )
    {
      v5 = *(_QWORD *)v4;
      if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) == CBackdropVisualImageKey::sc_NoBVIKey
        && *(_QWORD *)(v5 + 16) == qword_1803E6E90
        || (v6 = *(_BYTE *)(v5 + 25) == 1, --*(_BYTE *)(v5 + 25), !v6) )
      {
        v4 += 8LL;
      }
      else
      {
        v7 = (v4 - *v3) >> 3;
        detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
          v3,
          v7,
          1LL);
        v4 = *v3 + 8 * v7;
      }
    }
  }
}
