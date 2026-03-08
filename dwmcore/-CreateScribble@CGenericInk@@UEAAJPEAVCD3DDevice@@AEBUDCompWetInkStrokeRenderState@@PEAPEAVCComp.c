/*
 * XREFs of ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180229A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTipPointSource@@IAEBUTelemetryInfo@CSuperWetInkScribbleBase@@@Z @ 0x180229654 (--0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTi.c)
 *     ??4?$com_ptr_t@VCSuperWetInkScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSuperWetInkScribble@@@Z @ 0x1802297E0 (--4-$com_ptr_t@VCSuperWetInkScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSuperWet.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x18022A480 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180283E90 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 */

__int64 __fastcall CGenericInk::CreateScribble(
        CGenericInk *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        struct CComputeScribble **a4)
{
  int DirectInkWetStroke; // eax
  unsigned int v9; // ebx
  int DirectInkFactory; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  wchar_t *v14; // rax
  CSuperWetInkScribble *v15; // rax
  struct CComputeScribble *v16; // rax
  struct IDCompositionDirectInkFactoryPartner *v18; // [rsp+30h] [rbp-40h] BYREF
  struct CComputeScribble *v19; // [rsp+38h] [rbp-38h] BYREF
  struct IDCompositionDirectInkSuperWetStrokePartner *v20; // [rsp+40h] [rbp-30h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v21; // [rsp+48h] [rbp-28h] BYREF
  int v22[2]; // [rsp+50h] [rbp-20h] BYREF
  int v23; // [rsp+58h] [rbp-18h]
  wchar_t *v24; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v21 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v21);
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke(this, a2, &v21);
  v9 = DirectInkWetStroke;
  if ( DirectInkWetStroke >= 0 )
  {
    v18 = 0LL;
    DirectInkFactory = CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v18);
    v9 = DirectInkFactory;
    if ( DirectInkFactory >= 0 )
    {
      v11 = *(_QWORD *)v18;
      v20 = 0LL;
      v12 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkWetStrokePartner *, const struct DCompWetInkStrokeRenderState *, struct IDCompositionDirectInkSuperWetStrokePartner **))(v11 + 48))(
              v18,
              v21,
              a3,
              &v20);
      v9 = v12;
      if ( v12 >= 0 )
      {
        *(_QWORD *)v22 = this;
        v23 = 0;
        v24 = 0LL;
        v13 = *((_QWORD *)this + 6);
        if ( v13 )
          v14 = *(wchar_t **)(v13 + 56);
        else
          v14 = word_1803392B0;
        v19 = 0LL;
        v24 = v14;
        v15 = (CSuperWetInkScribble *)operator new(0x40uLL);
        if ( v15 )
          v15 = CSuperWetInkScribble::CSuperWetInkScribble(
                  v15,
                  v20,
                  *((struct CGenericInkTipPointSource **)this + 11),
                  *((_DWORD *)this + 70),
                  (const struct CSuperWetInkScribbleBase::TelemetryInfo *)v22);
        wil::com_ptr_t<CSuperWetInkScribble,wil::err_returncode_policy>::operator=(
          (__int64 *)&v19,
          (void (__fastcall ***)(_QWORD))v15);
        v16 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          *a4 = v16;
          wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)&v19);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
          v9 = 0;
          goto LABEL_17;
        }
        v9 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x186,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)&v19);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x177,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
          (const char *)(unsigned int)v12);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x172,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)DirectInkFactory);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)DirectInkWetStroke);
  }
LABEL_17:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
  return v9;
}
