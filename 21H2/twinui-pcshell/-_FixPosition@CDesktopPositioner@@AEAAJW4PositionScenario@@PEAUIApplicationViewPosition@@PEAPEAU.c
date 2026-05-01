/*
 * XREFs of ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18004CB98
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004C538 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004F1A4 (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x18045AF80 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18045F8C4 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18004D5FC (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x18004D6A0 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801F411C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x18045876C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_18045876C.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x1804587AC (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18045EAE0 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x18045F0F8 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_FixPosition(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // edi
  void *v9; // rcx
  void *v10; // rbx
  int v11; // ebx
  int DefaultRect; // eax
  __int64 v14; // rdx
  CDesktopPositioner *v15; // rcx
  CDesktopPositioner *v16; // rcx
  int v17; // eax
  int fixed; // eax
  __int64 v19; // rdx
  CDesktopPositioner *v20; // rcx
  void *v21; // rax
  struct tagRECT *v22; // [rsp+20h] [rbp-E0h]
  void *v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  void *v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  void *v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v29[44]; // [rsp+60h] [rbp-A0h]
  struct tagRECT v30; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v31; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-50h]
  struct tagRECT v33; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  struct tagRECT v36; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v37[16]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v38; // [rsp+100h] [rbp+0h] BYREF
  __int64 v39; // [rsp+110h] [rbp+10h]
  __m128i v40; // [rsp+118h] [rbp+18h]
  int v41; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v8 = 0;
  v23 = 0LL;
  *a4 = 0LL;
  v28 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v25 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, GUID *, void **))a3)(a3, &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1, &v25) < 0 )
  {
    if ( !*(_DWORD *)(a1 + 400) )
    {
      v11 = 0;
      goto LABEL_9;
    }
    fixed = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 24LL))(a3, v37);
    v11 = fixed;
    if ( fixed < 0 )
    {
      v19 = 2084LL;
LABEL_54:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed,
        (int)v22);
      goto LABEL_9;
    }
    v22 = (struct tagRECT *)&v41;
    fixed = CDesktopPositioner::_FixRectForWorkArea(a1, a2, v37, 0LL);
    v11 = fixed;
    if ( fixed < 0 )
    {
      if ( fixed != -2147024809 )
      {
        v19 = 2115LL;
        goto LABEL_54;
      }
      fixed = CDesktopPositioner::_GetDefaultRect(a1, v37, 0LL, &v30);
      v11 = fixed;
      if ( fixed < 0 )
      {
        v19 = 2097LL;
        goto LABEL_54;
      }
      if ( a2 == 4 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v23);
        v11 = fixed;
        if ( fixed < 0 )
        {
          v19 = 2103LL;
          goto LABEL_54;
        }
      }
      else
      {
        fixed = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v20, &v30, &v31);
        v11 = fixed;
        if ( fixed < 0 )
        {
          v19 = 2109LL;
          goto LABEL_54;
        }
        v24 = 3;
        fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(&v23);
        v11 = fixed;
        if ( fixed < 0 )
        {
          v19 = 2110LL;
          goto LABEL_54;
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v23);
      v11 = fixed;
      if ( fixed < 0 )
      {
        v19 = 2090LL;
        goto LABEL_54;
      }
    }
    v21 = v23;
    v23 = 0LL;
    *a4 = v21;
    goto LABEL_10;
  }
  v9 = v25;
  v10 = v25;
  v27 = v25;
  if ( v25 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 8LL))(v25);
    v9 = v25;
  }
  if ( a2 )
    goto LABEL_7;
  DefaultRect = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v9 + 32LL))(v9, &v26);
  v11 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v14 = 2017LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DefaultRect,
      (int)v22);
    goto LABEL_8;
  }
  DefaultRect = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)v25 + 72LL))(v25, &v38);
  v11 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v14 = 2022LL;
    goto LABEL_33;
  }
  *(_DWORD *)v29 = 44;
  *(_OWORD *)&v29[4] = v38;
  *(_QWORD *)&v29[20] = v39;
  *(__m128i *)&v29[28] = v40;
  v32 = *(_OWORD *)v29;
  v33 = *(struct tagRECT *)&v29[16];
  v34 = *(__int64 *)((char *)v40.m128i_i64 + 4);
  v35 = _mm_cvtsi128_si32(_mm_srli_si128(v40, 12));
  if ( v26 == 1 )
  {
    DefaultRect = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v25 + 64LL))(v25, &v24);
    v11 = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v14 = 2030LL;
      goto LABEL_33;
    }
    DWORD2(v32) = (v24 != 1) + 3;
  }
  DefaultRect = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)v25 + 56LL))(v25, &v36);
  v11 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v14 = 2038LL;
    goto LABEL_33;
  }
  DefaultRect = CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v15, &v36, &v31);
  v11 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v14 = 2042LL;
    goto LABEL_33;
  }
  v22 = &v30;
  if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea(a1, 0LL, &v31, 0LL) == -2147024809 )
  {
    DefaultRect = CDesktopPositioner::_GetDefaultRect(a1, &v36, 0LL, &v30);
    v11 = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v14 = 2050LL;
      goto LABEL_33;
    }
    v17 = DWORD2(v32);
    if ( v26 == 2 )
      v17 = 3;
    DWORD2(v32) = v17;
  }
  DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v16, &v30, (struct tagRECT *)&v33.bottom);
  v11 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v14 = 2060LL;
    goto LABEL_33;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(&v27);
  v11 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v14 = 2062LL;
    goto LABEL_33;
  }
  v10 = v27;
LABEL_7:
  v27 = 0LL;
  *a4 = v10;
  v11 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
LABEL_9:
  v8 = v11;
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return v8;
}
