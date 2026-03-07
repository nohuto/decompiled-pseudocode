__int64 __fastcall VIDPN_MGR::_InitializeVidPnMiniportInterfaces(void **this)
{
  void *v2; // rax
  struct _DXGK_VIDPN_INTERFACE *v3; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v4; // rcx
  void *v5; // rax
  struct _DXGK_VIDPN_INTERFACE *v6; // rdx
  DXGK_VIDPN_INTERFACE_V2_IMPL *v7; // rcx
  __int64 v8; // rax
  struct _DXGK_VIDPNTOPOLOGY_INTERFACE *v9; // rdx
  void *v10; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v11; // rbx
  __int64 v12; // rax
  struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *v13; // rdx
  void *v14; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v15; // rbx
  void *v16; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v17; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v18; // rcx
  void *v19; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v20; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL *v21; // rcx

  v2 = (void *)operator new[](0x58uLL, 0x4E506456u, 256LL);
  auto_ptr<_DXGK_VIDPN_INTERFACE>::reset(this + 51, v2);
  v4 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)this[51];
  if ( v4 )
  {
    DXGK_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(v4, v3);
    v5 = (void *)operator new[](0x58uLL, 0x4E506456u, 256LL);
    auto_ptr<_DXGK_VIDPN_INTERFACE>::reset(this + 52, v5);
    v7 = (DXGK_VIDPN_INTERFACE_V2_IMPL *)this[52];
    if ( !v7 )
    {
      if ( this[1] )
        goto LABEL_14;
      goto LABEL_13;
    }
    DXGK_VIDPN_INTERFACE_V2_IMPL::InitializeInterface(v7, v6);
    v8 = operator new[](0x60uLL, 0x4E506456u, 256LL);
    v10 = this[53];
    v11 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v8;
    if ( (void *)v8 != v10 )
      operator delete(v10);
    this[53] = v11;
    if ( !v11 )
    {
      if ( this[1] )
        goto LABEL_14;
      goto LABEL_13;
    }
    DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v11, v9);
    v12 = operator new[](0x40uLL, 0x4E506456u, 256LL);
    v14 = this[54];
    v15 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)v12;
    if ( (void *)v12 != v14 )
      operator delete(v14);
    this[54] = v15;
    if ( !v15 )
    {
      if ( this[1] )
        goto LABEL_14;
      goto LABEL_13;
    }
    DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(v15, v13);
    v16 = (void *)operator new[](0x40uLL, 0x4E506456u, 256LL);
    auto_ptr<_DXGK_VIDPNTARGETMODESET_INTERFACE>::reset(this + 55, v16);
    v18 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)this[55];
    if ( !v18 )
    {
      if ( this[1] )
        goto LABEL_14;
      goto LABEL_13;
    }
    DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v18, v17);
    v19 = (void *)operator new[](0x40uLL, 0x4E506456u, 256LL);
    auto_ptr<_DXGK_VIDPNTARGETMODESET_INTERFACE>::reset(this + 56, v19);
    v21 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL *)this[56];
    if ( v21 )
    {
      DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL::InitializeInterface(v21, v20);
      return 0LL;
    }
    if ( !this[1] )
LABEL_13:
      WdLogSingleEntry0(1LL);
  }
  else if ( !this[1] )
  {
    goto LABEL_13;
  }
LABEL_14:
  WdLogSingleEntry1(6LL, *((_QWORD *)this[1] + 2));
  return 3221225495LL;
}
