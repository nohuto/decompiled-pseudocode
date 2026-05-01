/*
 * XREFs of ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180478A1C
 * Callers:
 *     ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180479260 (-ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804E0F78 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1804EFAD8 (-_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall AppResizeOperation::QueryResizeApps(__int64 a1, int a2, _DWORD *a3)
{
  const struct LAYOUT_ENVIRONMENT_DETAILS *v6; // rdx
  int v7; // edi
  int v8; // r14d
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 *v21; // rcx
  __int64 v23; // rdi
  __int64 v24; // rbx
  int v25; // eax
  __int128 v26; // xmm6
  __int64 v27; // rbx
  int v28; // eax
  __int64 *v29; // rcx
  __int64 v30; // rbx
  int v31; // eax
  int v32; // r10d
  int v33; // r8d
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // rbx
  int v37; // eax
  int v38; // r10d
  int v39; // r8d
  __int64 v40; // rbx
  int v41; // eax
  __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // rbx
  int v45; // eax
  __int64 v46; // [rsp+38h] [rbp-69h] BYREF
  __int64 v47; // [rsp+40h] [rbp-61h] BYREF
  __int128 v48; // [rsp+48h] [rbp-59h] BYREF
  __int128 v49; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v51[12]; // [rsp+6Ch] [rbp-35h]
  int v52; // [rsp+78h] [rbp-29h]
  __int128 v53; // [rsp+98h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), &v50);
  v7 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)&v50, v6);
  v8 = *(_DWORD *)&v51[4];
  v9 = v50;
  v10 = *(_DWORD *)&v51[4] - v50 - v7;
  if ( !a2 )
  {
    v46 = 0LL;
    v42 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v42 + 96LL))(
            v42,
            0LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v46);
    v17 = v43;
    if ( v43 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v43);
      goto LABEL_19;
    }
    *(_QWORD *)&v48 = __PAIR64__(*(unsigned int *)v51, v50);
    HIDWORD(v48) = *(_DWORD *)&v51[8];
    DWORD2(v48) = *a3 - v7 / 2;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v46 + 104LL))(v46, 0LL, &v48);
    v47 = 0LL;
    v44 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    v45 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v44 + 96LL))(
            v44,
            1LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v47);
    v17 = v45;
    if ( v45 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v45);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
      goto LABEL_19;
    }
LABEL_48:
    *(_QWORD *)((char *)&v49 + 4) = *(_QWORD *)v51;
    HIDWORD(v49) = *(_DWORD *)&v51[8];
    LODWORD(v49) = v7 + DWORD2(v48);
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v47 + 104LL))(v47, 0LL, &v49);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
LABEL_49:
    v29 = &v46;
    goto LABEL_50;
  }
  v11 = a2 - 1;
  if ( !v11 )
  {
    v46 = 0LL;
    v36 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v36 + 96LL))(
            v36,
            0LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v46);
    v17 = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v37);
      goto LABEL_19;
    }
    v38 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v46 + 72LL))(v46, &v50, v10);
    v39 = 320 * v52 / 100 + 2 * (v52 / 100);
    if ( v38 > v39 )
      v39 = v38;
    *(_QWORD *)&v48 = __PAIR64__(*(unsigned int *)v51, v50);
    HIDWORD(v48) = *(_DWORD *)&v51[8];
    DWORD2(v48) = v39 + v50;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v46 + 104LL))(v46, 0LL, &v48);
    v47 = 0LL;
    v40 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    v41 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v40 + 96LL))(
            v40,
            1LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v47);
    v17 = v41;
    if ( v41 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v41);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
      goto LABEL_19;
    }
    goto LABEL_48;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v46 = 0LL;
    v30 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    v31 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v30 + 96LL))(
            v30,
            1LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v46);
    v17 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA1,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v31);
      goto LABEL_19;
    }
    v32 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v46 + 72LL))(v46, &v50, v10);
    v33 = 320 * v52 / 100 + 2 * (v52 / 100);
    if ( v32 > v33 )
      v33 = v32;
    *(_QWORD *)((char *)&v48 + 4) = *(_QWORD *)v51;
    HIDWORD(v48) = *(_DWORD *)&v51[8];
    LODWORD(v48) = *(_DWORD *)&v51[4] - v33;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v46 + 104LL))(v46, 0LL, &v48);
    v47 = 0LL;
    v34 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v34 + 96LL))(
            v34,
            0LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v47);
    v17 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAB,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v35);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
      goto LABEL_19;
    }
    *(_QWORD *)&v49 = __PAIR64__(*(unsigned int *)v51, v50);
    HIDWORD(v49) = *(_DWORD *)&v51[8];
    DWORD2(v49) = v48 - v7;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v47 + 104LL))(v47, 0LL, &v49);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    goto LABEL_49;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    *(_QWORD *)&v48 = __PAIR64__(*(unsigned int *)v51, v50);
    *((_QWORD *)&v48 + 1) = *(_QWORD *)&v51[4];
    v47 = 0LL;
    v24 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v24 + 96LL))(
            v24,
            0LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v47);
    v17 = v25;
    if ( v25 >= 0 )
    {
      v26 = v48;
      v49 = v48;
      DWORD2(v49) = v9 + (int)(v8 - v9 - v7) / 2;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v47 + 104LL))(v47, 0LL, &v49);
      v46 = 0LL;
      v27 = *(_QWORD *)(a1 + 64);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
      v28 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v27 + 96LL))(
              v27,
              1LL,
              &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
              &v46);
      v17 = v28;
      if ( v28 >= 0 )
      {
        v53 = v26;
        LODWORD(v53) = v7 + DWORD2(v49);
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v46 + 104LL))(v46, 0LL, &v53);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
        v29 = &v47;
LABEL_50:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v29);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v25);
    }
    v21 = &v47;
    goto LABEL_20;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v46 = 0LL;
    v20 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v20 + 96LL))(
            v20,
            1LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v46);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 87LL;
      goto LABEL_18;
    }
    (*(void (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v46 + 104LL))(v46, 0LL, &v50);
    v16 = CAppLayoutOperation::_EvictItem(a1 + 24, 0LL, 3LL);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 91LL;
      goto LABEL_18;
    }
    v23 = v46;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 88));
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v23 + 48LL))(
           v23,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           a1 + 88) >= 0 )
      *(_DWORD *)(a1 + 104) |= 2u;
    goto LABEL_49;
  }
  if ( v14 == 1 )
  {
    v46 = 0LL;
    v15 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v15 + 96LL))(
            v15,
            0LL,
            &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
            &v46);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 105LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
        (const char *)(unsigned int)v16);
LABEL_19:
      v21 = &v46;
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
      return v17;
    }
    (*(void (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v46 + 104LL))(v46, 0LL, &v50);
    v16 = CAppLayoutOperation::_EvictItem(a1 + 24, 1LL, 4LL);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 109LL;
      goto LABEL_18;
    }
    v19 = v46;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 88));
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v19 + 48LL))(
           v19,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           a1 + 88) >= 0 )
      *(_DWORD *)(a1 + 104) |= 2u;
    goto LABEL_49;
  }
  return 0LL;
}
