/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000D304
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18000CDF8 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005E780 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007FB9C (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180092758 (--0-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealizatio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18012C2FE (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned int v6; // ebp
  __int64 v10; // rax
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD *v13; // rdi
  _QWORD *v14; // r14
  int v15; // ebx
  __int64 v16; // r15
  int v17; // eax
  unsigned int v18; // ecx
  _QWORD v19[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+18h] BYREF

  v6 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 48LL))(a3);
  wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
    v19,
    v10);
  if ( v19[0] )
  {
    v21 = 0LL;
    v11 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v19[0] + 8LL) + 4LL) + v19[0] + 8LL);
    if ( (**v11)(v11, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v21) >= 0
      && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21 + 64LL))(v21)
       || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21 + 88LL))(v21))
      && (!*(_DWORD *)(a1 + 1436) && (*(_DWORD *)(a1 + 304) || !*(_DWORD *)(a1 + 232))
       || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21 + 72LL))(v21)) )
    {
      v13 = *(_QWORD **)(a1 + 1544);
      v14 = &v13[*(_QWORD *)(a1 + 1536)];
      if ( v13 != v14 )
      {
        v15 = a6;
        v16 = a5;
        while ( 1 )
        {
          if ( *(_BYTE *)(*v13 + 11302LL) )
          {
            v17 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, *v13, a2, a3, v21, a4, v16, v15);
            v6 = v17;
            if ( v17 < 0 )
              break;
          }
          if ( ++v13 == v14 )
            goto LABEL_5;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x657u, 0LL);
      }
    }
LABEL_5:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v19);
  return v6;
}
