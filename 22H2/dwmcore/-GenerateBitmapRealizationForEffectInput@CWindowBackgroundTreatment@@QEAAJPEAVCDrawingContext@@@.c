/*
 * XREFs of ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180010848
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007BE10 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z @ 0x180011844 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z.c)
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180011A58 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBQEBVIDeviceTarget@@$$V@?$unordered_map@PEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@U?$hash@PEBVIDeviceTarget@@@std@@U?$equal_to@PEBVIDeviceTarget@@@6@V?$allocator@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@6@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBQEBVIDeviceTarget@@@Z @ 0x180016BD0 (--$_Try_emplace@AEBQEBVIDeviceTarget@@$$V@-$unordered_map@PEBVIDeviceTarget@@V-$ComPtr@VIRenderT.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180016E90 (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001B570 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x18003F620 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180040870 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180040940 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180040A2C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800415F0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180056574 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800C3864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::GenerateBitmapRealizationForEffectInput(
        CWindowBackgroundTreatment *this,
        struct CDrawingContext *a2)
{
  char *v2; // r12
  char *v3; // r15
  float v4; // xmm1_4
  const struct IDeviceTarget *v5; // r13
  float v6; // xmm0_4
  int v9; // esi
  unsigned __int64 v10; // r11
  _QWORD *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rcx
  int BackdropImageFromRenderTarget; // eax
  unsigned int v16; // ecx
  __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ecx
  _QWORD *v23; // rbx
  char *v24; // rcx
  char *v25; // rcx
  __int64 v26; // xmm1_8
  int v27; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // xmm1_8
  __int64 v32; // rax
  __int64 v33; // rcx
  char v34; // [rsp+30h] [rbp-A9h]
  char v35; // [rsp+31h] [rbp-A8h]
  _QWORD *v36; // [rsp+38h] [rbp-A1h] BYREF
  unsigned __int8 v37[8]; // [rsp+40h] [rbp-99h] BYREF
  int v38; // [rsp+48h] [rbp-91h]
  _DWORD v39[2]; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v40[3]; // [rsp+58h] [rbp-81h] BYREF
  __int128 v41; // [rsp+70h] [rbp-69h] BYREF
  __int64 v42; // [rsp+80h] [rbp-59h]
  int v43; // [rsp+88h] [rbp-51h]
  __int64 v44; // [rsp+8Ch] [rbp-4Dh]
  int v45; // [rsp+94h] [rbp-45h]
  char v46; // [rsp+98h] [rbp-41h]
  __int128 v47; // [rsp+B8h] [rbp-21h]

  v2 = (char *)this + 144;
  v3 = (char *)this + 72;
  v4 = *((float *)this + 39) - *((float *)this + 37);
  v5 = (const struct IDeviceTarget *)*((_QWORD *)a2 + 4);
  v6 = *((float *)this + 38) - *((float *)this + 36);
  v36 = 0LL;
  v34 = 0;
  *(float *)&v39[1] = v4;
  *(_QWORD *)v37 = v5;
  *(float *)v39 = v6;
  v9 = 0;
  v10 = *((_QWORD *)this + 15) & std::_Fnv1a_append_bytes((unsigned __int64)this, v37, 8uLL);
  while ( 1 )
  {
    v11 = (_QWORD *)std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
                      v3,
                      v37,
                      v10);
    if ( v12 == *v11 )
      break;
    if ( *(const struct IDeviceTarget **)(v12 + 16) == v5 )
      goto LABEL_4;
  }
  v12 = *((_QWORD *)v3 + 1);
LABEL_4:
  if ( v12 != *((_QWORD *)this + 10) )
  {
    *(_QWORD *)v37 = v5;
    std::unordered_map<IDeviceTarget const *,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>::_Try_emplace<IDeviceTarget const * const &,>(
      v3,
      v40,
      v37);
    if ( *(_QWORD *)(v40[0] + 24LL) )
    {
      *(_QWORD *)v37 = v5;
      std::unordered_map<IDeviceTarget const *,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>::_Try_emplace<IDeviceTarget const * const &,>(
        v3,
        v40,
        v37);
      v29 = *(_QWORD *)(v40[0] + 24LL) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(v40[0] + 24LL) + 8LL) + 8LL);
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v29 + 48LL))(
        v29,
        -(__int64)(this != 0LL) & ((unsigned __int64)this + 56));
    }
    *(_QWORD *)v37 = v5;
    std::unordered_map<IDeviceTarget const *,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>::_Try_emplace<IDeviceTarget const * const &,>(
      v3,
      v40,
      v37);
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v40[0] + 24LL);
  }
  *((_BYTE *)this + 358) = 0;
  v13 = *((_QWORD *)this + 17);
  if ( v13 )
  {
    v30 = v13 + 8 + *(int *)(*(_QWORD *)(v13 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v30 + 48LL))(
      v30,
      -(__int64)(this != 0LL) & ((unsigned __int64)this + 56));
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((char *)this + 136);
  }
  v14 = *((_QWORD *)this + 8);
  v44 = 0LL;
  v45 = 0;
  v42 = 0LL;
  *((_QWORD *)this + 46) = &v41;
  v41 = 0LL;
  v43 = 0;
  v46 = 0;
  v47 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 56LL))(v14, 20LL) )
  {
    v31 = *((_QWORD *)v2 + 2);
    *((_OWORD *)this + 12) = *(_OWORD *)v2;
    *((_QWORD *)this + 26) = v31;
  }
  else
  {
    v34 = *((_BYTE *)this + 360);
    v35 = *((_BYTE *)this + 359);
    if ( v35
      && (BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(a2),
          v9 = BackdropImageFromRenderTarget,
          BackdropImageFromRenderTarget < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, BackdropImageFromRenderTarget, 0xCEu, 0LL);
    }
    else
    {
      Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v36);
      v17 = *((unsigned int *)a2 + 16);
      *(_QWORD *)v37 = "DWM Window Background Treatment";
      v38 = 31;
      if ( (int)CDrawingContext::PushOffScreenRenderingLayer(a2, v37, v39, v17, 0, &v36) >= 0 )
      {
        v18 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v9 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xE3u, 0LL);
        }
        else
        {
          v20 = *((_QWORD *)this + 8) + 56LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 56LL) + 8LL);
          v21 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, _DWORD *, _QWORD))(*(_QWORD *)v20 + 16LL))(
                  v20,
                  a2,
                  v39,
                  0LL);
          v9 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xE8u, 0LL);
          }
          else
          {
            v23 = v36;
            if ( g_LockAndReadWindowBackdropTexture )
            {
              v32 = (*(__int64 (__fastcall **)(_QWORD *))(*v36 + 64LL))(v36);
              v33 = *(int *)(*(_QWORD *)(v32 + 8) + 16LL) + v32 + 8;
              (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v33 + 24LL))(
                v33,
                -(__int64)(a2 != 0LL) & ((unsigned __int64)a2 + 24));
            }
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*v23 + 24LL))(v23, DisplayId::None);
            v24 = (char *)v23 + *(int *)(v23[1] + 8LL) + 8;
            (*(void (__fastcall **)(char *, unsigned __int64))(*(_QWORD *)v24 + 40LL))(
              v24,
              -(__int64)(this != 0LL) & ((unsigned __int64)this + 56));
            if ( v35 )
            {
              *(_QWORD *)v37 = v5;
              std::unordered_map<IDeviceTarget const *,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>::_Try_emplace<IDeviceTarget const * const &,>(
                v3,
                v40,
                v37);
              v25 = (char *)(v40[0] + 24LL);
            }
            else
            {
              v25 = (char *)this + 136;
            }
            Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=(v25, &v36);
            v26 = *((_QWORD *)v2 + 2);
            *((_OWORD *)this + 12) = *(_OWORD *)v2;
            *((_QWORD *)this + 26) = v26;
            if ( v35
              && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 741) + 200LL))(*((_QWORD *)a2 + 741)) )
            {
              *((_BYTE *)this + 358) = 1;
            }
          }
          CDrawingContext::PopTransformInternal(a2, 1);
        }
        v27 = CDrawingContext::PopLayer(a2);
        if ( v27 < 0 && v9 >= 0 )
          v9 = v27;
      }
    }
  }
  if ( CWindowBackgroundTreatment::HasValidSource(this, v5) && v34 )
    *((_QWORD *)this + 47) = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
  *((_QWORD *)this + 46) = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v41 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v41);
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v36);
  return (unsigned int)v9;
}
