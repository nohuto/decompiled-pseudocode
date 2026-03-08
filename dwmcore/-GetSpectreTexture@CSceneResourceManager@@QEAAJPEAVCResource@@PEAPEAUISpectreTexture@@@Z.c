/*
 * XREFs of ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x1801B9E90
 * Callers:
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x18024CF64 (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800525D0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B44DC (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1800CE0BC (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBQEAVCResource@@$$V@?$map@PEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCResource@@@Z @ 0x1801B9680 (--$_Try_emplace@AEBQEAVCResource@@$$V@-$map@PEAVCResource@@V-$com_ptr_t@UISpectreTexture@@Uerr_r.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1801B9E78 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 */

__int64 __fastcall CSceneResourceManager::GetSpectreTexture(
        CSceneResourceManager *this,
        struct CResource *a2,
        struct ISpectreTexture **a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  struct D2D_VECTOR_2F v8; // xmm0_8
  int CVIForRealizationSize; // eax
  CDisplayManager *v10; // rcx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 (__fastcall ***v12)(_QWORD, struct D2D_VECTOR_2F *); // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  struct ISpectreRenderer *SpectreRenderer; // rsi
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(struct ISpectreRenderer *, __int64, __int64, struct ISpectreTexture **); // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  struct ISpectreTexture *v25; // rcx
  __int64 v26; // rdi
  __int64 result; // rax
  struct CCachedVisualImage *v28; // [rsp+30h] [rbp-40h] BYREF
  struct ISpectreTexture *v29; // [rsp+38h] [rbp-38h] BYREF
  struct D2D_VECTOR_2F v30; // [rsp+40h] [rbp-30h] BYREF
  __int128 v31; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+68h] [rbp-8h]
  CVisualSurface *v33; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+48h] BYREF

  v33 = a2;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 202LL) )
  {
    v6 = *((_QWORD *)this + 4);
    v7 = -(__int64)(*((_BYTE *)v33 + 200) != 0);
    v28 = 0LL;
    v8 = *(struct D2D_VECTOR_2F *)((char *)v33 + (v7 & 8) + 88);
    LODWORD(v7) = *(_DWORD *)(v6 + 928);
    v30 = v8;
    CVIForRealizationSize = CVisualSurface::GetCVIForRealizationSize(
                              v33,
                              v7,
                              (struct CCachedVisualImage ***)&v30,
                              &v30,
                              &v28);
    v5 = CVIForRealizationSize;
    if ( CVIForRealizationSize < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0, CVIForRealizationSize, 0xFAu, 0LL);
    }
    else
    {
      CDisplayManager::GetPrimaryAdapterLuid(v10, (struct _LUID *)&v31);
      LODWORD(v32) = 0;
      *((_QWORD *)&v31 + 1) = DisplayId::None;
      BYTE4(v32) = 0;
      PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 27));
      if ( PrimaryMonitorTarget )
      {
        v12 = (__int64 (__fastcall ***)(_QWORD, struct D2D_VECTOR_2F *))((char *)PrimaryMonitorTarget
                                                                       + *(int *)(*((_QWORD *)PrimaryMonitorTarget + 1)
                                                                                + 12LL)
                                                                       + 8);
        v13 = (**v12)(v12, &v30);
        v31 = *(_OWORD *)v13;
        v32 = *(_QWORD *)(v13 + 16);
      }
      v14 = *((_QWORD *)v28 + 9);
      v34 = 0LL;
      v15 = (*(__int64 (__fastcall **)(char *, __int128 *, __int64 *))(v14 + 48))((char *)v28 + 72, &v31, &v34);
      v5 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x108u, 0LL);
      }
      else
      {
        SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
        v18 = *(_QWORD *)SpectreRenderer;
        v29 = 0LL;
        v19 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64, __int64, struct ISpectreTexture **))(v18 + 88);
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
        v21 = (**(__int64 (__fastcall ***)(__int64))v34)(v34);
        v22 = v19(SpectreRenderer, v21, v20, &v29);
        v5 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x10Fu, 0LL);
        }
        else
        {
          v24 = std::map<CResource *,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>::_Try_emplace<CResource * const &,>(
                  (__int64 *)this + 8,
                  (__int64)&v30,
                  (unsigned __int64 *)&v33);
          v25 = v29;
          v26 = *(_QWORD *)(*(_QWORD *)v24 + 40LL);
          *(_QWORD *)(*(_QWORD *)v24 + 40LL) = v29;
          if ( v25 )
            (*(void (__fastcall **)(struct ISpectreTexture *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          *a3 = v29;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v28);
    return v5;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CVisualSurface *, __int64))(*(_QWORD *)v33 + 56LL))(v33, 37LL) )
    return v5;
  result = 0LL;
  *a3 = (struct ISpectreTexture *)*((_QWORD *)v33 + 19);
  return result;
}
