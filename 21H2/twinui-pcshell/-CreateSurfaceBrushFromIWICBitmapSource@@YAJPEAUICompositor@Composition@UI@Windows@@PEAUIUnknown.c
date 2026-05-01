/*
 * XREFs of ?CreateSurfaceBrushFromIWICBitmapSource@@YAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIWICBitmapSource@@PEAPEAUICompositionSurfaceBrush@234@@Z @ 0x1802DD310
 * Callers:
 *     ?CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1802DD8CC (-CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CreateSurfaceBrushFromIWICBitmapSource(
        __int64 (__fastcall ***a1)(struct Windows::UI::Composition::ICompositor *, GUID *, __int64 *),
        struct IUnknown *a2,
        struct IWICBitmapSource *a3,
        struct Windows::UI::Composition::ICompositionSurfaceBrush **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(struct Windows::UI::Composition::ICompositor *, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(struct Windows::UI::Composition::ICompositor *, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, struct IUnknown *, __int64 *); // rdi
  int v17; // eax
  __m128 v18; // xmm7
  __m128 v19; // xmm6
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, unsigned __int64, __int64, __int64, int *); // rdi
  int v22; // eax
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v24)(_QWORD, GUID *, __int64 *); // rdi
  int v25; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, _QWORD, GUID *, __int64 *, int *); // rdi
  int v28; // eax
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rdx
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v33)(_QWORD, GUID *, __int64 *); // rdi
  int v34; // eax
  __int64 (__fastcall *v35)(struct Windows::UI::Composition::ICompositor *, __int64, struct Windows::UI::Composition::ICompositionSurfaceBrush **); // rbx
  int v36; // eax
  __int64 v37; // rdx
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v38; // rax
  __int64 v40; // [rsp+48h] [rbp-99h] BYREF
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v41; // [rsp+50h] [rbp-91h] BYREF
  __int64 v42; // [rsp+58h] [rbp-89h] BYREF
  __int64 v43; // [rsp+60h] [rbp-81h] BYREF
  int v44[2]; // [rsp+68h] [rbp-79h] BYREF
  __int64 v45; // [rsp+70h] [rbp-71h] BYREF
  __int64 v46; // [rsp+78h] [rbp-69h] BYREF
  __int64 v47; // [rsp+80h] [rbp-61h] BYREF
  __int64 v48; // [rsp+88h] [rbp-59h] BYREF
  __int64 v49; // [rsp+90h] [rbp-51h] BYREF
  int v50; // [rsp+98h] [rbp-49h] BYREF
  int v51; // [rsp+9Ch] [rbp-45h]
  _QWORD v52[2]; // [rsp+A0h] [rbp-41h] BYREF
  int v53; // [rsp+B0h] [rbp-31h]
  int v54; // [rsp+B4h] [rbp-2Dh]
  float v55; // [rsp+B8h] [rbp-29h]
  float v56; // [rsp+BCh] [rbp-25h]
  float v57[4]; // [rsp+C0h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+5Fh]

  *a4 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64 *, char *))a3->lpVtbl->GetSize)(
         a3,
         &v40,
         (char *)&v40 + 4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v49 = 0LL;
    v10 = **a1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v49);
    v11 = v10((struct Windows::UI::Composition::ICompositor *)a1, &GUID_6b556968_2d25_11e2_99f6_8bc36088709b, &v49);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 21LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\util_wic_comp.h",
        (const char *)(unsigned int)v11);
LABEL_39:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v49);
      return v9;
    }
    v52[0] = 0LL;
    v52[1] = v40;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v49 + 32LL))(v49, v52, 1LL);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 26LL;
      goto LABEL_7;
    }
    v48 = 0LL;
    v13 = **a1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
    v14 = v13((struct Windows::UI::Composition::ICompositor *)a1, &GUID_25297d5c_3ad4_4c9c_b5cf_e36a38512330, &v48);
    v9 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\util_wic_comp.h",
        (const char *)(unsigned int)v14);
LABEL_38:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
      goto LABEL_39;
    }
    v47 = 0LL;
    v15 = v48;
    v16 = *(__int64 (__fastcall **)(__int64, struct IUnknown *, __int64 *))(*(_QWORD *)v48 + 40LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    v17 = v16(v15, a2, &v47);
    v9 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\util_wic_comp.h",
        (const char *)(unsigned int)v17);
LABEL_37:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
      goto LABEL_38;
    }
    *(_QWORD *)v44 = 0LL;
    v18 = 0LL;
    v18.m128_f32[0] = (float)(int)v40;
    v19 = 0LL;
    v19.m128_f32[0] = (float)SHIDWORD(v40);
    v20 = v47;
    v21 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, __int64, int *))(*(_QWORD *)v47 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v44);
    v22 = v21(v20, _mm_unpacklo_ps(v18, v19).m128_u64[0], 87LL, 1LL, v44);
    v9 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\util_wic_comp.h",
        (const char *)(unsigned int)v22);
LABEL_36:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v44);
      goto LABEL_37;
    }
    v43 = 0LL;
    v23 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v44;
    v24 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v44;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v25 = v24(v23, &GUID_fd04e6e3_fe0c_4c3c_ab19_a07601a576ee, &v43);
    v9 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\util_wic_comp.h",
        (const char *)(unsigned int)v25);
LABEL_35:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
      goto LABEL_36;
    }
    v42 = 0LL;
    v26 = v43;
    v27 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *, int *))(*(_QWORD *)v43 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    v28 = v27(v26, 0LL, &GUID_e8f7fe7a_191c_466d_ad95_975678bda998, &v42, &v50);
    v9 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\util_wic_comp.h",
        (const char *)(unsigned int)v28);
LABEL_34:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
      goto LABEL_35;
    }
    v46 = 0LL;
    v29 = v42;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    v30 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, _QWORD, __int64 *))(*(_QWORD *)v29 + 40LL))(
            v29,
            a3,
            0LL,
            &v46);
    v9 = v30;
    if ( v30 < 0 )
    {
      v31 = 50LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\util_wic_comp.h",
        (const char *)(unsigned int)v30);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
      goto LABEL_34;
    }
    v57[0] = (float)v50;
    v57[1] = (float)v51;
    v57[2] = (float)v50 + (float)(int)v40;
    v57[3] = (float)v51 + (float)SHIDWORD(v40);
    v53 = 0;
    v54 = 0;
    v55 = (float)(int)v40;
    v56 = (float)SHIDWORD(v40);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 624LL))(v42, 1LL);
    (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v42 + 208LL))(v42, v46, v57);
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
    v9 = v30;
    if ( v30 < 0 )
    {
      v31 = 71LL;
      goto LABEL_22;
    }
    v45 = 0LL;
    v32 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v44;
    v33 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v44;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
    v34 = v33(v32, &GUID_1527540d_42c7_47a6_a408_668f79a90dfb, &v45);
    v9 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\util_wic_comp.h",
        (const char *)(unsigned int)v34);
LABEL_32:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
      goto LABEL_33;
    }
    v41 = 0LL;
    v35 = (__int64 (__fastcall *)(struct Windows::UI::Composition::ICompositor *, __int64, struct Windows::UI::Composition::ICompositionSurfaceBrush **))(*a1)[24];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
    v36 = v35((struct Windows::UI::Composition::ICompositor *)a1, v45, &v41);
    v9 = v36;
    if ( v36 >= 0 )
    {
      v36 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionSurfaceBrush *, __int64))(*(_QWORD *)v41 + 88LL))(
              v41,
              2LL);
      v9 = v36;
      if ( v36 >= 0 )
      {
        v38 = v41;
        v41 = 0LL;
        *a4 = v38;
        v9 = 0;
        goto LABEL_31;
      }
      v37 = 79LL;
    }
    else
    {
      v37 = 78LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (__int64)"onecoreuap\\internal\\shell\\inc\\private\\util_wic_comp.h",
      (const char *)(unsigned int)v36);
LABEL_31:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12,
    (__int64)"onecoreuap\\internal\\shell\\inc\\private\\util_wic_comp.h",
    (const char *)(unsigned int)v8);
  return v9;
}
