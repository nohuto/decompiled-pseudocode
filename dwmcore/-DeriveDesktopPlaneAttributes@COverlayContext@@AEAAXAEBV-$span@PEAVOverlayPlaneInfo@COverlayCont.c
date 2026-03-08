/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x1800FA0D8
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800F9E3C (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801DB284 (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800414C4 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800FA2C4 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?CalcDesktopClip@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAVCRegion@@@Z @ 0x1800FA310 (-CalcDesktopClip@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x18012B5A2 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18012B8B0 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x1801DB09C (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 */

void __fastcall COverlayContext::DeriveDesktopPlaneAttributes(COverlayContext *this, _QWORD *a2, char a3)
{
  int v5; // eax
  __int64 (__fastcall ***v6)(_QWORD, struct tagRECT *); // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  enum DXGI_COLOR_SPACE_TYPE v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, __int128 *); // rcx
  __int64 v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  struct tagRECT v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  bool v19; // zf
  _DWORD *v20; // rax
  __int128 v21; // [rsp+20h] [rbp-49h] BYREF
  struct tagRECT v22; // [rsp+38h] [rbp-31h] BYREF
  int *v23; // [rsp+50h] [rbp-19h] BYREF
  int v24; // [rsp+58h] [rbp-11h] BYREF

  *((_BYTE *)this + 11025) = a3;
  if ( *a2
    && (v16 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, 0LL),
        v17 = *(_QWORD *)this,
        v18 = *(_QWORD *)v16,
        v22 = *(struct tagRECT *)(*(_QWORD *)v16 + 68LL),
        v21 = *(_OWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 160LL))(v17) + 20),
        (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
                           &v22,
                           &v21))
    && *(_BYTE *)(v18 + 179) )
  {
    *((_BYTE *)this + 11024) = 0;
  }
  else
  {
    *((_BYTE *)this + 11024) = 1;
    if ( !*((_DWORD *)this + 17) || (v19 = !COverlayContext::OverlaysEnabled(this), v5 = 4, !v19) )
      v5 = 0;
    *((_DWORD *)this + 2728) = v5;
    *((_DWORD *)this + 2741) = 1;
    *((_DWORD *)this + 2742) = *a2 != 0LL;
    v6 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))(*(_QWORD *)this
                                                            + 8LL
                                                            + *(int *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 8LL));
    v7 = (**v6)(v6, &v22);
    v8 = *(_QWORD *)this;
    v9 = *(_DWORD *)(v7 + 8);
    *((_DWORD *)this + 2747) = v9;
    v10 = (__int64 (__fastcall ***)(_QWORD, __int128 *))(v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 12LL));
    v11 = (**v10)(v10, &v21);
    v12 = ConvertSDRBoostToSDRWhiteLevel(*(float *)(v11 + 16), v9);
    v13 = *(_QWORD **)this;
    *((_DWORD *)this + 2754) = v12;
    *((_DWORD *)this + 2752) = 2;
    if ( *((_BYTE *)this + 11025) )
    {
      v20 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v13 + 160LL))(v13);
      *(_QWORD *)((char *)this + 10916) = 0LL;
      *((_DWORD *)this + 2731) = v20[9];
      *((_DWORD *)this + 2732) = v20[10];
      *((_DWORD *)this + 2733) = v20[5];
      *((_DWORD *)this + 2734) = v20[6];
      *((_DWORD *)this + 2735) = v20[7];
      *((_DWORD *)this + 2736) = v20[8];
    }
    else
    {
      v14 = (__int64)v13 + *(int *)(v13[1] + 12LL) + 8;
      (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v14 + 16LL))(v14, &v22);
      *((_DWORD *)this + 2731) = v22.left;
      *((_DWORD *)this + 2732) = v22.top;
      *(_QWORD *)((char *)this + 10916) = 0LL;
      *(_OWORD *)((char *)this + 10932) = *(_OWORD *)((char *)this + 10916);
    }
    v24 = 0;
    v23 = &v24;
    COverlayContext::CalcDesktopClip(this, a2, &v23);
    v22 = 0LL;
    if ( FastRegion::CRegion::GetBoundingRect(&v23, &v22) )
    {
      if ( *((_BYTE *)this + 11025) || !*((_BYTE *)this + 11299) )
        v15 = v22;
      else
        v15 = *(struct tagRECT *)((char *)this + 10932);
      *(struct tagRECT *)((char *)this + 10948) = v15;
    }
    else
    {
      *((_BYTE *)this + 11024) = 0;
    }
    FastRegion::CRegion::FreeMemory((void **)&v23);
  }
}
