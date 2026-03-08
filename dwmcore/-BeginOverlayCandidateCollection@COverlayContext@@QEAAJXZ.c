/*
 * XREFs of ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x180086BB8
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180086974 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A39C (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C9BA4 (-clear_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInf.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D9FD8 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0dd_EventWriteTransfer @ 0x18012BD86 (McTemplateU0dd_EventWriteTransfer.c)
 */

__int64 __fastcall COverlayContext::BeginOverlayCandidateCollection(COverlayContext *this)
{
  __int64 v1; // r8
  _QWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r9d
  int v10; // r10d
  int v11; // r11d
  int v12; // eax
  __int64 v13; // rcx
  _DWORD *v15; // rdx

  v1 = *((_QWORD *)this + 12);
  v3 = (_QWORD *)((char *)this + 88);
  if ( 0x6DB6DB6DB6DB6DB7LL * ((v1 - *v3) >> 5) )
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear_region(
      v3,
      0LL);
  v4 = *(_QWORD *)this;
  *((_WORD *)this + 5651) = 0;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v5)
    || (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v6) )
  {
    v7 = *(_QWORD *)this;
    *((_BYTE *)this + 11303) = 1;
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 176LL))(v7) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this) )
      {
        v8 = 0LL;
        if ( g_pComposition )
          v8 = *((_QWORD *)g_pComposition + 62);
        if ( *((_QWORD *)this + 1411) != v8 )
          *((_BYTE *)this + 11302) = 1;
      }
    }
  }
  v9 = dword_1803E6FA0;
  v10 = TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcEmpty;
  v11 = dword_1803E6FA4;
  v12 = dword_1803E6F9C;
  if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcEmpty >= dword_1803E6FA0
    || dword_1803E6F9C >= dword_1803E6FA4 )
  {
    **((_DWORD **)this + 1397) = 0;
  }
  else
  {
    v15 = (_DWORD *)*((_QWORD *)this + 1397);
    *v15 = 2;
    v15[7] = v10;
    v15[3] = v12;
    v15[8] = v9;
    v15[4] = 16;
    v15[1] = v10;
    v15[2] = v9;
    v15[6] = 16;
    v15[5] = v11;
  }
  *((_DWORD *)this + 2818) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 11248, 16LL);
  *(_WORD *)((char *)this + 11311) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    McTemplateU0dd_EventWriteTransfer(
      v13,
      &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start,
      *((unsigned __int8 *)this + 11302),
      *((unsigned __int8 *)this + 11303));
  return 0LL;
}
