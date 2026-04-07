/*
 * XREFs of ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x180092934
 * Callers:
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180092D28 (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x180092E10 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCap.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x180013FF8 (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x180043100 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectionBorderManager::_SetCaptureControllerOffsetTransform(
        CProjectionBorderManager *this,
        struct CCaptureControllerProxy *a2,
        unsigned int a3,
        int a4)
{
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __m128i v10; // xmm0
  CMatrixTransformProxy *v11; // rbx
  CMatrixTransformProxy *v13; // [rsp+20h] [rbp-58h] BYREF
  struct _MilMatrix3x2D v14; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v13 = 0LL;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v13);
  v7 = CCompositor::CreateProxy<CMatrixTransformProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (volatile signed __int32 **)&v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *(_OWORD *)&v14.S_11 = _xmm;
    *(_OWORD *)&v14.S_21 = _xmm;
    v10 = _mm_cvtsi32_si128(a3);
    v11 = v13;
    *(_QWORD *)&v14.DX = *(_OWORD *)&_mm_cvtepi32_pd(v10);
    v14.DY = (double)a4;
    v7 = CMatrixTransformProxy::Update(v13, &v14);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 2) + 16LL) + 1096LL))(
             *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL),
             *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL),
             *(unsigned int *)(*((_QWORD *)v11 + 2) + 24LL));
      v8 = v7;
      if ( v7 >= 0 )
      {
        v8 = 0;
        goto LABEL_9;
      }
      v9 = 1231LL;
    }
    else
    {
      v9 = 1229LL;
    }
  }
  else
  {
    v9 = 1219LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_9:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v13);
  return v8;
}
