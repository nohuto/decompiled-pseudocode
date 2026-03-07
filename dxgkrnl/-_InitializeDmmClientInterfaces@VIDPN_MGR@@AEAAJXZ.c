__int64 __fastcall VIDPN_MGR::_InitializeDmmClientInterfaces(VIDPN_MGR *this)
{
  __int64 v2; // rax
  struct _DXGDMM_INTERFACE *v3; // rdx
  void *v4; // rcx
  DXGDMM_INTERFACE_V1_IMPL *v5; // rdi
  __int64 v6; // rax
  struct _DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE *v7; // rdx
  void *v8; // rcx
  DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *v9; // rdi
  __int64 v10; // rax
  struct _DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE *v11; // rdx
  void *v12; // rcx
  DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *v13; // rdi
  __int64 v14; // rax
  struct _DXGDMM_VIDPN_INTERFACE *v15; // rdx
  void *v16; // rcx
  DXGDMM_VIDPN_INTERFACE_V1_IMPL *v17; // rdi
  __int64 v18; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v19; // rdx
  void *v20; // rcx
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v21; // rdi
  __int64 v22; // rax
  struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *v23; // rdx
  void *v24; // rcx
  DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v25; // rdi
  __int64 v26; // rax
  struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE *v27; // rdx
  void *v28; // rcx
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v29; // rdi

  v2 = operator new[](0x58uLL, 0x4E506456u, 256LL);
  v4 = (void *)*((_QWORD *)this + 57);
  v5 = (DXGDMM_INTERFACE_V1_IMPL *)v2;
  if ( (void *)v2 != v4 )
    operator delete(v4);
  *((_QWORD *)this + 57) = v5;
  if ( v5 )
  {
    DXGDMM_INTERFACE_V1_IMPL::InitializeInterface(v5, v3);
    v6 = operator new[](0x20uLL, 0x4E506456u, 256LL);
    v8 = (void *)*((_QWORD *)this + 58);
    v9 = (DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *)v6;
    if ( (void *)v6 != v8 )
      operator delete(v8);
    *((_QWORD *)this + 58) = v9;
    if ( !v9 )
    {
      if ( *((_QWORD *)this + 1) )
        goto LABEL_25;
      goto LABEL_24;
    }
    DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::InitializeInterface(v9, v7);
    v10 = operator new[](0x20uLL, 0x4E506456u, 256LL);
    v12 = (void *)*((_QWORD *)this + 59);
    v13 = (DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *)v10;
    if ( (void *)v10 != v12 )
      operator delete(v12);
    *((_QWORD *)this + 59) = v13;
    if ( !v13 )
    {
      if ( *((_QWORD *)this + 1) )
        goto LABEL_25;
      goto LABEL_24;
    }
    DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::InitializeInterface(v13, v11);
    v14 = operator new[](0x38uLL, 0x4E506456u, 256LL);
    v16 = (void *)*((_QWORD *)this + 60);
    v17 = (DXGDMM_VIDPN_INTERFACE_V1_IMPL *)v14;
    if ( (void *)v14 != v16 )
      operator delete(v16);
    *((_QWORD *)this + 60) = v17;
    if ( !v17 )
    {
      if ( *((_QWORD *)this + 1) )
        goto LABEL_25;
      goto LABEL_24;
    }
    DXGDMM_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(v17, v15);
    v18 = operator new[](0x88uLL, 0x4E506456u, 256LL);
    v20 = (void *)*((_QWORD *)this + 61);
    v21 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v18;
    if ( (void *)v18 != v20 )
      operator delete(v20);
    *((_QWORD *)this + 61) = v21;
    if ( !v21 )
    {
      if ( *((_QWORD *)this + 1) )
        goto LABEL_25;
      goto LABEL_24;
    }
    DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v21, v19);
    v22 = operator new[](0x38uLL, 0x4E506456u, 256LL);
    v24 = (void *)*((_QWORD *)this + 62);
    v25 = (DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)v22;
    if ( (void *)v22 != v24 )
      operator delete(v24);
    *((_QWORD *)this + 62) = v25;
    if ( !v25 )
    {
      if ( *((_QWORD *)this + 1) )
        goto LABEL_25;
      goto LABEL_24;
    }
    DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(v25, v23);
    v26 = operator new[](0x60uLL, 0x4E506456u, 256LL);
    v28 = (void *)*((_QWORD *)this + 63);
    v29 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)v26;
    if ( (void *)v26 != v28 )
      operator delete(v28);
    *((_QWORD *)this + 63) = v29;
    if ( v29 )
    {
      DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v29, v27);
      return 0LL;
    }
    if ( !*((_QWORD *)this + 1) )
LABEL_24:
      WdLogSingleEntry0(1LL);
  }
  else if ( !*((_QWORD *)this + 1) )
  {
    goto LABEL_24;
  }
LABEL_25:
  WdLogSingleEntry1(6LL, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
  return 3221225495LL;
}
