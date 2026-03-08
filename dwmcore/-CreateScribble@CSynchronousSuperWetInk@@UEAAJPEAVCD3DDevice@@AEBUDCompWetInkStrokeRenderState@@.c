/*
 * XREFs of ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x18024FFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTipPointSource@@IAEBUTelemetryInfo@CSuperWetInkScribbleBase@@@Z @ 0x180229654 (--0CSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCGenericInkTi.c)
 *     ??0?$com_ptr_t@VCSuperWetInkScribble@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSuperWetInkScribble@@@Z @ 0x18024FA2C (--0-$com_ptr_t@VCSuperWetInkScribble@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSuperWetInkScr.c)
 *     ??1?$shared_ptr@$$BY0A@E@std@@QEAA@XZ @ 0x18024FC48 (--1-$shared_ptr@$$BY0A@E@std@@QEAA@XZ.c)
 *     ?GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ @ 0x1802503A0 (-GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ.c)
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x180250494 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180283E90 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::CreateScribble(
        struct CGenericInkTipPointSource **this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        struct CComputeScribble **a4)
{
  int DirectInkFactory; // eax
  int v8; // ebx
  unsigned int PerFrameDataId; // eax
  std::_Ref_count_base *v10; // rbx
  __int128 v11; // xmm0
  __int64 v12; // rax
  int v13; // esi
  struct CGenericInkTipPointSource *v14; // rax
  CSuperWetInkScribble *v15; // rax
  struct CComputeScribble *v16; // rax
  struct IDCompositionDirectInkSuperWetStrokePartner *v18; // [rsp+40h] [rbp-29h] BYREF
  struct CComputeScribble *v19; // [rsp+48h] [rbp-21h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v20; // [rsp+50h] [rbp-19h] BYREF
  std::_Ref_count_base *v21[2]; // [rsp+58h] [rbp-11h] BYREF
  struct CGenericInkTipPointSource **v22; // [rsp+68h] [rbp-1h] BYREF
  int v23; // [rsp+70h] [rbp+7h]
  __int64 v24; // [rsp+78h] [rbp+Fh]
  __int128 v25; // [rsp+80h] [rbp+17h] BYREF
  __int64 v26; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v20 = 0LL;
  DirectInkFactory = CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v20);
  v8 = DirectInkFactory;
  if ( DirectInkFactory >= 0 )
  {
    PerFrameDataId = CSynchronousSuperWetInk::GetPerFrameDataId((CSynchronousSuperWetInk *)this);
    *(_OWORD *)v21 = 0LL;
    v8 = CSynchronousSuperWetInk::LookupPerFrameData((CSynchronousSuperWetInk *)this, PerFrameDataId);
    if ( v8 >= 0 )
    {
      v10 = v21[0];
      if ( *((_BYTE *)v21[0] + 12) )
      {
        v11 = *(_OWORD *)a3;
        v26 = *((_QWORD *)a3 + 2);
      }
      else
      {
        v26 = 0LL;
        v11 = *(_OWORD *)&_xmm;
      }
      v25 = v11;
      v12 = *(_QWORD *)v20;
      v18 = 0LL;
      v13 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, char *, _QWORD, _QWORD, __int128 *, char *, struct IDCompositionDirectInkSuperWetStrokePartner **))(v12 + 56))(
              v20,
              (char *)v21[0] + 20,
              *((unsigned int *)v21[0] + 4),
              *(_QWORD *)v21[0],
              &v25,
              (char *)a3 + 28,
              &v18);
      if ( v13 >= 0 )
      {
        v22 = this;
        v24 = 0LL;
        v14 = this[6];
        v23 = 2 - (*((_BYTE *)this + 168) != 0);
        if ( v14 )
          v24 = *((_QWORD *)v14 + 7);
        v15 = (CSuperWetInkScribble *)operator new(0x40uLL);
        if ( v15 )
          v15 = CSuperWetInkScribble::CSuperWetInkScribble(
                  v15,
                  v18,
                  this[11],
                  *((_DWORD *)v10 + 2),
                  (const struct CSuperWetInkScribbleBase::TelemetryInfo *)&v22);
        wil::com_ptr_t<CSuperWetInkScribble,wil::err_returncode_policy>::com_ptr_t<CSuperWetInkScribble,wil::err_returncode_policy>(
          &v19,
          (void (__fastcall ***)(_QWORD))v15);
        v16 = v19;
        v19 = 0LL;
        *a4 = v16;
        wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)&v19);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
        if ( v21[1] )
          std::_Ref_count_base::_Decref(v21[1]);
        v8 = 0;
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
          McTemplateU0q_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
            8LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
        std::shared_ptr<unsigned char [0]>::~shared_ptr<unsigned char [0]>((__int64)v21);
        v8 = v13;
      }
    }
    else
    {
      std::shared_ptr<unsigned char [0]>::~shared_ptr<unsigned char [0]>((__int64)v21);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)DirectInkFactory);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  return (unsigned int)v8;
}
