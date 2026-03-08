/*
 * XREFs of ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@AEBVCBackdropVisualImageKey@@_N@Z @ 0x1800E8D7C
 * Callers:
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@@@Z @ 0x1800E8D3C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@_K0@Z @ 0x1800448AC (-reserve_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo.c)
 *     ??R?$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z @ 0x180044C30 (--R-$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z.c)
 *     ?AgeOutOcclusionInfos@CTreeData@@IEAAXXZ @ 0x1800E8E18 (-AgeOutOcclusionInfos@CTreeData@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct COcclusionInfo *__fastcall CTreeData::GetOcclusionInfo(
        CTreeData *this,
        const struct CBackdropVisualImageKey *a2,
        char a3)
{
  detail::liberal_expansion_policy *v3; // rsi
  __int64 *v5; // rax
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rbx
  __int64 v9; // rdx
  _QWORD *v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 (__fastcall ***v13)(_QWORD, __int64); // [rsp+30h] [rbp+8h] BYREF

  v3 = (CTreeData *)((char *)this + 200);
  v5 = (__int64 *)*((_QWORD *)this + 25);
  v8 = 0LL;
  while ( 1 )
  {
    if ( v5 == *((__int64 **)this + 26) )
      goto LABEL_9;
    v9 = *v5;
    if ( *(_QWORD *)(*v5 + 8) == *(_QWORD *)a2 && *(_QWORD *)(v9 + 16) == *((_QWORD *)a2 + 1) )
      break;
    ++v5;
  }
  v8 = (__int64 (__fastcall ***)(_QWORD, __int64))*v5;
  if ( v9 )
  {
LABEL_6:
    *((_BYTE *)v8 + 25) = 10;
    goto LABEL_7;
  }
LABEL_9:
  if ( a3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, __int64), const struct CBackdropVisualImageKey *))(**((_QWORD **)this + 33) + 344LL))(
      *((_QWORD *)this + 33),
      &v13,
      a2);
    v8 = v13;
    v11 = detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::reserve_region(
            v3,
            (__int64)(*((_QWORD *)v3 + 1) - *(_QWORD *)v3) >> 3);
    v12 = v13;
    v13 = 0LL;
    *v11 = v12;
    if ( v13 )
      std::default_delete<COcclusionInfo>::operator()((__int64)v11, v13);
    if ( v8 )
      goto LABEL_6;
  }
LABEL_7:
  CTreeData::AgeOutOcclusionInfos(this);
  return (struct COcclusionInfo *)v8;
}
