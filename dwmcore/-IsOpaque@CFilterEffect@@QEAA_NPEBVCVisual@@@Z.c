/*
 * XREFs of ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x180219B94
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064860 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x1801F1000 (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x180218BAC (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x180218BAC (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 */

bool __fastcall CFilterEffect::IsOpaque(CFilterEffect *this, const struct CVisual *a2)
{
  int v2; // eax
  bool v5; // cl
  int v6; // eax

  v2 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6;
  if ( (((unsigned __int8)v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6) & 6) == 2 )
  {
    v6 = (*(__int64 (__fastcall **)(CFilterEffect *))(*(_QWORD *)this + 224LL))(this);
    v5 = 0;
    if ( v6 )
    {
      if ( v6 == 2 )
        v5 = CFilterEffect::CheckInputsForOpacity(this, a2);
    }
    else
    {
      v5 = 1;
    }
  }
  else
  {
    v5 = 0;
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v5;
}
