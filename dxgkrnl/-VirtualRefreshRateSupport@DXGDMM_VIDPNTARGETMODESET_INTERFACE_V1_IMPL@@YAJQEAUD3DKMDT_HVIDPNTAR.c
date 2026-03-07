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
