/*
 * XREFs of ?VirtualRefreshRateSupport@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IPEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C03B1C30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0013A74 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0015A90 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C016E0C8 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::VirtualRefreshRateSupport(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DDDI_RATIONAL *a3,
        const struct _D3DDDI_RATIONAL *a4)
{
  __int64 v4; // rbx
  __int64 v7; // rax
  __int64 v8; // r10
  DMMVIDPNTARGETMODE *v9; // rax
  __int64 v10; // r10
  int v11; // r11d

  v4 = (unsigned int)a2;
  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    return 3221225485LL;
  }
  if ( !(_DWORD)a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  v7 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( v7 )
  {
    v9 = (DMMVIDPNTARGETMODE *)IndexedSet<DMMVIDPNTARGETMODE>::FindById(v7 + 24, v4);
    if ( v9 )
    {
      return !DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(v9, a3, v11) ? 0xC01E0306 : 0;
    }
    else
    {
      WdLogSingleEntry2(2LL, v4, v10);
      return 3223192337LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v8);
    return 3223192329LL;
  }
}
