__int64 __fastcall VIDPN_MGR::_InitializeDxgPortDmmInterfaces(VIDPN_MGR *this)
{
  __int64 v2; // rax
  void *v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rax
  void *v6; // rcx
  _QWORD *v7; // rdi

  v2 = operator new[](0x18uLL, 0x4E506456u, 256LL);
  v3 = (void *)*((_QWORD *)this + 49);
  v4 = (_QWORD *)v2;
  if ( (void *)v2 != v3 )
    operator delete(v3);
  *((_QWORD *)this + 49) = v4;
  if ( v4 )
  {
    *v4 = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo;
    v4[1] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource;
    v4[2] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo;
    v5 = operator new[](0x18uLL, 0x4E506456u, 256LL);
    v6 = (void *)*((_QWORD *)this + 50);
    v7 = (_QWORD *)v5;
    if ( (void *)v5 != v6 )
      operator delete(v6);
    *((_QWORD *)this + 50) = v7;
    if ( v7 )
    {
      *v7 = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::CreateNewTargetInfo;
      v7[1] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget;
      v7[2] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
      return 0LL;
    }
    if ( !*((_QWORD *)this + 1) )
      goto LABEL_9;
  }
  else if ( !*((_QWORD *)this + 1) )
  {
LABEL_9:
    WdLogSingleEntry0(1LL);
  }
  WdLogSingleEntry1(6LL, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
  return 3221225495LL;
}
