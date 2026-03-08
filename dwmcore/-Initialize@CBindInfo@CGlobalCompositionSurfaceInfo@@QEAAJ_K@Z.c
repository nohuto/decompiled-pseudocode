/*
 * XREFs of ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1800F2010
 * Callers:
 *     ?EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@PEAPEAVISwapChainRealization@@@Z @ 0x1800410F0 (-EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@PEAPEAVISwapChai.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CFlipExSwapchainStatistics@@SAJPEBVCGlobalCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18001CF48 (-Create@CFlipExSwapchainStatistics@@SAJPEBVCGlobalCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x18003DE08 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x18003DFE0 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1800B7A28 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x1800B7CA4 (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z @ 0x1800F217C (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180129E50 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z @ 0x18026A474 (-Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        __int64 a2)
{
  int v3; // edi
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // r14
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  const struct CGlobalCompositionSurfaceInfo *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r9d
  char *v17; // rbx
  const struct CCompositionSurfaceInfo *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct CFlipExSwapchainStatistics *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  struct CFlipExSwapchainStatistics *v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v30[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v31[144]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v32[4]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v33; // [rsp+E4h] [rbp-1Ch]
  HANDLE hObject; // [rsp+4C8h] [rbp+3C8h]
  unsigned __int64 v35; // [rsp+4D0h] [rbp+3D0h]
  unsigned __int16 v36[64]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v29 = a2;
  v3 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
    McTemplateU0xx_EventWriteTransfer(this, &CompSurfInfo_Binding_Start, *(_QWORD *)(*(_QWORD *)this + 40LL), a2);
  memset_0(v30, 0, 0x520uLL);
  if ( *((_QWORD *)this + 3) )
    CGlobalCompositionSurfaceInfo::CBindInfo::Reset(this, 0);
  v4 = NtQueryCompositionSurfaceBinding(*(_QWORD *)(*(_QWORD *)this + 32LL), &v29, v30);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_180354768, 4u, v4 | 0x10000000, 0x2A1u, 0LL);
    v7 = (_DWORD *)((char *)this + 32);
    goto LABEL_15;
  }
  v6 = v30[0];
  v7 = (_DWORD *)((char *)this + 32);
  *((_QWORD *)this + 3) = v29;
  *((_DWORD *)this + 8) = v6;
  if ( (_DWORD)v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
      {
        if ( v33 > 1 )
        {
          v12 = *(const struct CGlobalCompositionSurfaceInfo **)this;
          v28 = 0LL;
          v13 = CFlipExSwapchainStatistics::Create(v12, &v28);
          v3 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_180354768, 4u, v13, 0x2BDu, 0LL);
            if ( v28 )
              (*(void (__fastcall **)(struct CFlipExSwapchainStatistics *))(*(_QWORD *)v28 + 16LL))(v28);
            goto LABEL_20;
          }
          v15 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 2) = v28;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        v10 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
                this,
                (const struct CSM_BUFFER_ATTRIBUTES *)v31,
                v33);
        v3 = v10;
        if ( v10 >= 0 )
        {
          CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v36);
LABEL_12:
          v6 = v30[0];
          goto LABEL_13;
        }
        v16 = v10;
        v27 = 707;
LABEL_26:
        MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_180354768, 4u, v16, v27, 0LL);
        goto LABEL_20;
      }
      if ( v9 == 1 )
      {
        v17 = (char *)hObject;
        v18 = *(const struct CCompositionSurfaceInfo **)this;
        v28 = 0LL;
        v19 = CCompositionSwapchainStatistics::Create(v18, hObject, v35, &v28);
        v3 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_180354768, 4u, v19, 0x2D3u, 0LL);
        }
        else
        {
          v21 = *((_QWORD *)this + 2);
          v22 = v28;
          v28 = 0LL;
          *((_QWORD *)this + 2) = v22;
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          v23 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
                  this,
                  (const struct CSM_BUFFER_ATTRIBUTES *)v31,
                  v33);
          v3 = v23;
          if ( v23 >= 0 )
          {
            CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v36);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
            if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              CloseHandle(v17);
            goto LABEL_12;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v24, &dword_180354768, 4u, v23, 0x2D7u, 0LL);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
        if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v17);
        goto LABEL_20;
      }
      v3 = -2147024809;
      v27 = 740;
    }
    else
    {
      v28 = 0LL;
      v25 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
              (struct _LUID **)this,
              (const struct CSM_BUFFER_ATTRIBUTES *)v31,
              (const struct CSM_REALIZATION_INFO *)v32,
              0,
              &v28);
      v3 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_1803B5880, 3u, v25, 0x4EEu, 0LL);
      else
        CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(this, v28);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28);
      if ( v3 >= 0 )
        goto LABEL_12;
      v27 = 686;
    }
    v16 = v3;
    goto LABEL_26;
  }
LABEL_13:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &CompSurfInfo_Binding_Stop,
      v6,
      (__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 3);
LABEL_15:
  if ( v3 < 0 )
  {
LABEL_20:
    *((_QWORD *)this + 3) = 0LL;
    *v7 = 0;
  }
  return (unsigned int)v3;
}
