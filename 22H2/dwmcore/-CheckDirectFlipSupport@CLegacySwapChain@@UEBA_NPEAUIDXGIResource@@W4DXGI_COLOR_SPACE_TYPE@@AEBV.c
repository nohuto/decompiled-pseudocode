/*
 * XREFs of ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180249130
 * Callers:
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800F6CA0 (-CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPAC.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800F7160 (-CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPA.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800F7440 (-CheckDirectFlipSupport@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SP.c)
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x18024E038 (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 * Callees:
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003043C (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800F1758 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1800F17F0 (-CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?DirectFlipRectRequiresPanelFitter@CLegacySwapChain@@IEBA_NAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180249824 (-DirectFlipRectRequiresPanelFitter@CLegacySwapChain@@IEBA_NAEBV-$TMilRect@IUMilRectU@@UMil3DRect.c)
 */

char __fastcall CLegacySwapChain::CheckDirectFlipSupport(
        __int64 a1,
        __int64 a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        int *a4,
        __int128 *a5)
{
  bool v5; // bl
  float v6; // xmm0_4
  char v7; // r15
  char v8; // r14
  int v12; // eax
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  CD3DDevice *v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  bool v21; // al
  bool v23; // [rsp+30h] [rbp-B1h] BYREF
  int v24; // [rsp+34h] [rbp-ADh] BYREF
  __int64 v25; // [rsp+38h] [rbp-A9h] BYREF
  __int128 *v26; // [rsp+40h] [rbp-A1h]
  _BYTE v27[8]; // [rsp+50h] [rbp-91h] BYREF
  __int64 v28; // [rsp+58h] [rbp-89h]
  int v29; // [rsp+60h] [rbp-81h]
  int v30; // [rsp+6Ch] [rbp-75h]
  int v31; // [rsp+70h] [rbp-71h]
  int v32; // [rsp+74h] [rbp-6Dh]
  int v33; // [rsp+78h] [rbp-69h]
  int v34; // [rsp+7Ch] [rbp-65h]
  int v35; // [rsp+80h] [rbp-61h]
  __int128 v36; // [rsp+84h] [rbp-5Dh]
  __int128 v37; // [rsp+94h] [rbp-4Dh]
  __int64 v38; // [rsp+A4h] [rbp-3Dh]
  int v39; // [rsp+ACh] [rbp-35h]
  __int64 v40; // [rsp+B0h] [rbp-31h]
  int v41; // [rsp+B8h] [rbp-29h]
  enum DXGI_COLOR_SPACE_TYPE v42; // [rsp+BCh] [rbp-25h]
  int v43; // [rsp+C0h] [rbp-21h]
  int v44; // [rsp+D0h] [rbp-11h]
  int v45; // [rsp+D8h] [rbp-9h]

  v5 = 0;
  v6 = *(float *)(a1 - 192);
  v7 = 0;
  v25 = a2;
  v8 = 0;
  v26 = a5;
  v23 = 0;
  v12 = ConvertSDRBoostToSDRWhiteLevel(v6, a3);
  v13 = *(_DWORD *)(a1 - 164) == 2;
  v24 = v12;
  if ( v13 || v12 )
    v7 = 1;
  if ( (unsigned __int8)CLegacySwapChain::DirectFlipRectRequiresPanelFitter(a1 - 352, a4)
    || (unsigned __int8)CLegacySwapChain::DirectFlipRectRequiresPanelFitter(a1 - 352, v26) )
  {
    v8 = 1;
  }
  if ( !v7 && !v8 )
  {
    if ( (unsigned int)a3 <= DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, int *))(**(_QWORD **)(a1 - 280) + 144LL))(
              *(_QWORD *)(a1 - 280),
              0LL,
              v25,
              &v24);
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x20Au, 0LL);
      }
      else if ( v24 )
      {
        return 1;
      }
    }
    return v5;
  }
  if ( *(int *)(a1 - 164) < 1 )
    return v5;
  memset_0(v27, 0, 0x90uLL);
  v29 = *(_DWORD *)(a1 - 172);
  v32 = *a4;
  v33 = a4[1];
  v34 = a4[2];
  v35 = a4[3];
  v36 = *v26;
  v45 = v24;
  v16 = v31;
  if ( v8 )
    v16 = 4;
  v28 = v25;
  v17 = *(CD3DDevice **)(a1 - 288);
  v31 = v16;
  v30 = 0;
  v37 = v36;
  v38 = 1LL;
  v39 = 0;
  v40 = 0LL;
  v41 = 0;
  v42 = a3;
  v43 = 0;
  v44 = 2;
  if ( CD3DDevice::CheckMPOCache(v17, (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)v27, 1u, &v23) )
    return v23;
  v18 = *(_QWORD *)(a1 - 280);
  v24 = 0;
  LODWORD(v25) = 0;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, int *, __int64 *))(*(_QWORD *)v18 + 176LL))(
          v18,
          1LL,
          v27,
          &v24,
          &v25);
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1F1u, 0LL);
    return v23;
  }
  v21 = v23;
  if ( v24 )
    v21 = 1;
  v5 = v21;
  CD3DDevice::AddCheckMPOCache(
    *(CD3DDevice **)(a1 - 288),
    (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)v27);
  return v5;
}
