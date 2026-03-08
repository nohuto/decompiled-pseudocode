/*
 * XREFs of ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x1800B05AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@Z @ 0x1800B0194 (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@-$vector_f.c)
 *     ?clear@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B036C (-clear@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurface@@$03$.c)
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B06AC (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?ClearAllRenderTargets@CVisualSurface@@AEAAXXZ @ 0x1800BA96C (-ClearAllRenderTargets@CVisualSurface@@AEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisualSurface::ProcessSetRealizationSize(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE *a3)
{
  float *v3; // rdi
  bool v5; // zf
  char v6; // di
  struct CComposition *v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  struct CCachedVisualImage *v10; // rax
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CCachedVisualImage *v14; // [rsp+50h] [rbp+8h] BYREF
  struct CCachedVisualImage *v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v3 = (float *)((char *)this + 100);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 2) - *((float *)this + 24)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 3) - *v3) & _xmm) > 0.0000011920929 )
  {
    v5 = *((_BYTE *)this + 201) == 0;
    *((_QWORD *)this + 12) = *((_QWORD *)a3 + 1);
    if ( v5 )
      CVisualSurface::ClearAllRenderTargets(this);
  }
  v6 = COERCE_FLOAT(*((_DWORD *)this + 24) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*(_DWORD *)v3 & _xmm) >= 0.0000011920929;
  if ( v6 == *((_BYTE *)this + 200) )
    goto LABEL_11;
  detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 14);
  if ( !v6 )
  {
LABEL_10:
    *((_BYTE *)this + 200) = v6;
LABEL_11:
    CResource::NotifyOnChanged(this, 6LL, 0LL);
    return 0LL;
  }
  v7 = (struct CComposition *)*((_QWORD *)this + 2);
  v15 = 0LL;
  v8 = CCachedVisualImage::CreateForVisualSurface(v7, &v15);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = v15;
    v15 = 0LL;
    v14 = v10;
    detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::emplace_back<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,int>(
      (_QWORD *)this + 14,
      (__int64 *)&v14);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v15);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF6,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)(unsigned int)v8,
    v12);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v15);
  return v9;
}
