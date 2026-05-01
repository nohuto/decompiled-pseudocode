/*
 * XREFs of ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x18003CF80
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18005D378 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x18003C4D0 (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 *     ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@URect@Foundation@6@1UKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18003DAE0 (-AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@URect@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$Make@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@12@AEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@$$QEAUpermission@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@Z @ 0x1800D2A78 (--$Make@V-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboar.c)
 *     ?GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800D2C0C (-GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundat.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
        __int64 a1,
        __int128 *a2,
        float *a3,
        float *a4,
        char a5,
        __int64 a6)
{
  int PositionAndSizeOptionsHub; // eax
  unsigned int v11; // ebx
  unsigned int v13; // r12d
  __int64 *v14; // rdi
  int v15; // ebx
  int v16; // esi
  float v17; // xmm12_4
  float v18; // xmm13_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm6_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  __int64 v28; // rax
  __int128 v29; // xmm8
  __int128 v30; // xmm10
  __int128 v31; // xmm11
  __int64 v32; // xmm9_8
  int v33; // eax
  int v34; // ebx
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // eax
  float v39; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  __int128 v47; // xmm6
  __int128 v48; // xmm12
  __int128 v49; // xmm13
  __int64 v50; // xmm7_8
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  int v55; // r8d
  unsigned int v56; // ecx
  unsigned int v57; // eax
  int v58; // ecx
  int v59; // ecx
  __int64 v60; // rax
  int v61; // eax
  float v62; // xmm7_4
  float v63; // xmm6_4
  int v64; // esi
  float v65; // xmm1_4
  float v66; // xmm0_4
  float v67; // xmm0_4
  float v68; // xmm2_4
  float v69; // xmm1_4
  float v70; // xmm0_4
  __int64 v71; // rax
  int v72; // eax
  float v73; // xmm1_4
  float v74; // xmm0_4
  float v75; // xmm0_4
  float v76; // xmm2_4
  float v77; // xmm1_4
  float v78; // xmm0_4
  __int64 v79; // rax
  __int128 v80; // xmm6
  __int128 v81; // xmm8
  __int128 v82; // xmm9
  __int64 v83; // xmm7_8
  int v84; // eax
  __int64 v85; // rax
  int v86; // eax
  float v87; // xmm0_4
  float v88; // xmm1_4
  float v89; // xmm0_4
  float v90; // xmm1_4
  int v91; // eax
  int v92; // [rsp+28h] [rbp-E0h]
  int v93; // [rsp+28h] [rbp-E0h]
  __int64 *v94; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v95[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v96; // [rsp+68h] [rbp-A0h] BYREF
  int v97; // [rsp+70h] [rbp-98h] BYREF
  int v98; // [rsp+74h] [rbp-94h]
  __int128 v99; // [rsp+78h] [rbp-90h] BYREF
  __int128 v100; // [rsp+88h] [rbp-80h]
  __int128 v101; // [rsp+98h] [rbp-70h]
  __int64 v102; // [rsp+A8h] [rbp-60h]
  __int128 v103; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v104[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v105; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v106; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v107; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v108; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v109; // [rsp+108h] [rbp+0h]
  _BYTE v110[40]; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  *(_QWORD *)&v107 = a2;
  *(_QWORD *)&v108 = a6;
  if ( !IsPPIEdition() )
  {
    v13 = 0;
    v105 = 0LL;
    Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality const &,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::permission>(&v94);
    v14 = v94;
    if ( !v94 )
    {
      v34 = -2147024882;
      v35 = 2147942414LL;
      v36 = 325LL;
      goto LABEL_72;
    }
    v105 = v94;
    *(_OWORD *)&v95[1] = *(_OWORD *)(a1 + 144);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      (RTL_SRWLOCK *)(a1 + 16),
      v104,
      *(HMONITOR *)(a1 + 136),
      (__int64)&v95[1],
      *(_DWORD *)(a1 + 176),
      *(_BYTE *)(a1 + 208),
      *(double *)(a1 + 216),
      (double *)(a1 + 200));
    *(_OWORD *)&v95[1] = *(_OWORD *)(a1 + 48);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      (RTL_SRWLOCK *)(a1 + 16),
      &v94,
      *(HMONITOR *)(a1 + 40),
      (__int64)&v95[1],
      *(_DWORD *)(a1 + 80),
      *(_BYTE *)(a1 + 208),
      *(double *)(a1 + 216),
      (double *)(a1 + 184));
    v96 = v14;
    (*(void (__fastcall **)(__int64 *))(*v14 + 8))(v14);
    *(_OWORD *)&v95[1] = *(_OWORD *)(a1 + 144);
    v106 = *(_OWORD *)&v95[1];
    v15 = v104[0];
    AddOptionsRelativeToInside(1, (unsigned int)&v106, (unsigned int)&v95[1], v104[0], 0, (__int64)&v96);
    v96 = v14;
    (*(void (__fastcall **)(__int64 *))(*v14 + 8))(v14);
    *(_OWORD *)&v95[1] = *(_OWORD *)(a1 + 48);
    v106 = *(_OWORD *)&v95[1];
    AddOptionsRelativeToInside(1, (unsigned int)&v106, (unsigned int)&v95[1], (_DWORD)v94, 1, (__int64)&v96);
    v96 = (__int64 *)(unsigned int)(int)*(float *)(a1 + 152);
    *(_QWORD *)&v106 = (unsigned int)(int)*(float *)(a1 + 156);
    v94 = (__int64 *)(unsigned int)(int)*(float *)(a1 + 104);
    v95[1] = (unsigned int)(int)*(float *)(a1 + 108);
    v103 = *(_OWORD *)(a1 + 96);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      (RTL_SRWLOCK *)(a1 + 16),
      &v97,
      *(HMONITOR *)(a1 + 88),
      (__int64)&v103,
      *(_DWORD *)(a1 + 128),
      *(_BYTE *)(a1 + 208),
      *(double *)(a1 + 216),
      (double *)(a1 + 192));
    WORD5(v109) = 0;
    *(_QWORD *)&v110[12] = 0LL;
    *(_DWORD *)&v110[36] = 0;
    *(_QWORD *)&v109 = 0x200000002LL;
    *(_DWORD *)v110 = (_DWORD)v96;
    v16 = v106;
    HIDWORD(v109) = v106;
    *(_DWORD *)&v110[8] = v15;
    *(_DWORD *)&v110[4] = v104[1];
    v17 = *(float *)v107;
    v18 = *(float *)(v107 + 4);
    v19 = v18 + *(float *)(v107 + 12);
    v20 = *(float *)(a1 + 144);
    v21 = *(float *)v107 - v20;
    v22 = (float)(int)v96;
    if ( (float)(int)v96 <= v21 )
      v21 = (float)(int)v96;
    *(_DWORD *)&v110[20] = (int)v21;
    v23 = *(float *)(a1 + 148);
    v24 = v19 - v23;
    v25 = (float)(int)v106;
    if ( (float)(int)v106 <= (float)(v19 - v23) )
      v24 = (float)(int)v106;
    *(_DWORD *)&v110[24] = (int)v24;
    v26 = (float)(v20 + *(float *)(a1 + 152)) - v17;
    if ( v22 <= v26 )
      v26 = (float)(int)v96;
    *(_DWORD *)&v110[28] = (int)v26;
    v27 = (float)(v23 + *(float *)(a1 + 156)) - v19;
    if ( v25 <= v27 )
      v27 = (float)(int)v106;
    *(_DWORD *)&v110[32] = (int)v27;
    WORD4(v109) = 0;
    v28 = *v14;
    v29 = v109;
    v99 = v109;
    v30 = *(_OWORD *)v110;
    v100 = *(_OWORD *)v110;
    v31 = *(_OWORD *)&v110[16];
    v101 = *(_OWORD *)&v110[16];
    v32 = *(_QWORD *)&v110[32];
    v102 = *(_QWORD *)&v110[32];
    v33 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v28 + 104))(v14, &v99);
    v34 = v33;
    if ( v33 >= 0 )
    {
      v99 = v29;
      DWORD1(v99) = 1;
      v37 = *v14;
      v100 = v30;
      v101 = v31;
      v102 = v32;
      v38 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v37 + 104))(v14, &v99);
      v34 = v38;
      if ( v38 >= 0 )
      {
        v39 = *(float *)(a1 + 152);
        v40 = *(float *)(a1 + 156);
        v109 = v29;
        *(_DWORD *)&v110[12] = HIDWORD(v30);
        *(_OWORD *)&v110[16] = v31;
        *(_QWORD *)&v110[32] = v32;
        *(_DWORD *)v110 = (_DWORD)v96;
        HIDWORD(v109) = v16;
        *(_DWORD *)&v110[8] = (int)(float)(v39 * 0.5);
        *(_DWORD *)&v110[4] = (int)v40;
        v41 = *(float *)(a1 + 144);
        v42 = v17 - v41;
        if ( v22 <= (float)(v17 - v41) )
          v42 = v22;
        *(_DWORD *)&v110[20] = (int)v42;
        v43 = *(float *)(a1 + 148);
        v44 = v18 - v43;
        if ( v25 <= (float)(v18 - v43) )
          v44 = v25;
        *(_DWORD *)&v110[24] = (int)v44;
        v45 = (float)(v41 + v39) - v17;
        if ( v22 <= v45 )
          v45 = v22;
        *(_DWORD *)&v110[28] = (int)v45;
        v46 = (float)(v43 + v40) - v18;
        if ( v25 <= v46 )
          v46 = v25;
        *(_DWORD *)&v110[32] = (int)v46;
        v47 = v109;
        v99 = v109;
        v48 = *(_OWORD *)v110;
        v49 = *(_OWORD *)&v110[16];
        v50 = *(_QWORD *)&v110[32];
        DWORD1(v99) = 4;
        v51 = *v14;
        v100 = *(_OWORD *)v110;
        v101 = *(_OWORD *)&v110[16];
        v102 = *(_QWORD *)&v110[32];
        v52 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v51 + 104))(v14, &v99);
        v34 = v52;
        if ( v52 >= 0 )
        {
          v99 = v47;
          DWORD1(v99) = 8;
          v53 = *v14;
          v100 = v48;
          v101 = v49;
          v102 = v50;
          v54 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v53 + 104))(v14, &v99);
          v34 = v54;
          if ( v54 >= 0 )
          {
            memset(&v110[12], 0, 28);
            LODWORD(v109) = 2;
            *(_QWORD *)((char *)&v109 + 4) = 0x10100000002LL;
            *(_DWORD *)v110 = (_DWORD)v94;
            v55 = v95[1];
            HIDWORD(v109) = v95[1];
            *(_DWORD *)&v110[4] = v98;
            *(_DWORD *)&v110[8] = v97;
            v56 = (unsigned int)v94;
            v57 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
            if ( v57 < (unsigned int)v94 )
              v56 = v57;
            *(_DWORD *)&v110[20] = v56;
            v58 = v95[1];
            if ( *(_DWORD *)&v110[24] < LODWORD(v95[1]) )
              v58 = *(_DWORD *)&v110[24];
            *(_DWORD *)&v110[24] = v58;
            v59 = (int)v94;
            if ( (_DWORD)v94 )
              v59 = 0;
            *(_DWORD *)&v110[28] = v59;
            if ( *(_DWORD *)&v110[32] < LODWORD(v95[1]) )
              v55 = *(_DWORD *)&v110[32];
            *(_DWORD *)&v110[32] = v55;
            v60 = *v14;
            v99 = v109;
            v100 = *(_OWORD *)v110;
            v101 = *(_OWORD *)&v110[16];
            v102 = *(_QWORD *)&v110[32];
            v61 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v60 + 104))(v14, &v99);
            v34 = v61;
            if ( v61 >= 0 )
            {
              if ( a5 )
              {
                v109 = v29;
                *(_OWORD *)v110 = v30;
                *(_OWORD *)&v110[16] = v31;
                *(_QWORD *)&v110[32] = v32;
                v62 = *a3;
                v63 = a3[3] + a3[1];
                DWORD1(v109) = 6;
                v64 = (int)a3[2];
                *(_DWORD *)&v110[8] = v64;
                *(_DWORD *)v110 = v64;
                *(_DWORD *)&v110[16] = v64;
                v65 = *(float *)(a1 + 144);
                v66 = v62 - v65;
                if ( (float)v64 <= (float)(v62 - v65) )
                  v66 = (float)v64;
                *(_DWORD *)&v110[20] = (int)v66;
                v67 = *(float *)(a1 + 148);
                v68 = v63 - v67;
                if ( (float)SHIDWORD(v109) <= (float)(v63 - v67) )
                  v68 = (float)SHIDWORD(v109);
                *(_DWORD *)&v110[24] = (int)v68;
                v69 = (float)(v65 + *(float *)(a1 + 152)) - v62;
                if ( (float)v64 <= v69 )
                  v69 = (float)v64;
                *(_DWORD *)&v110[28] = (int)v69;
                v70 = (float)(v67 + *(float *)(a1 + 156)) - v63;
                if ( (float)SHIDWORD(v109) <= v70 )
                  v70 = (float)SHIDWORD(v109);
                *(_DWORD *)&v110[32] = (int)v70;
                v71 = *v14;
                v99 = v109;
                v100 = *(_OWORD *)v110;
                v101 = *(_OWORD *)&v110[16];
                v102 = *(_QWORD *)&v110[32];
                v72 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v71 + 104))(v14, &v99);
                v34 = v72;
                if ( v72 < 0 )
                {
                  v35 = (unsigned int)v72;
                  v36 = 442LL;
                  goto LABEL_72;
                }
                v109 = v29;
                *(_OWORD *)v110 = v30;
                *(_OWORD *)&v110[16] = v31;
                *(_QWORD *)&v110[32] = v32;
                DWORD1(v109) = 6;
                *(_DWORD *)&v110[8] = v64;
                *(_DWORD *)v110 = (_DWORD)v94;
                v73 = *(float *)(a1 + 144);
                v74 = v62 - v73;
                if ( (float)(int)v94 <= (float)(v62 - v73) )
                  v74 = (float)(int)v94;
                *(_DWORD *)&v110[20] = (int)v74;
                v75 = *(float *)(a1 + 148);
                v76 = v63 - v75;
                if ( (float)SHIDWORD(v109) <= (float)(v63 - v75) )
                  v76 = (float)SHIDWORD(v109);
                *(_DWORD *)&v110[24] = (int)v76;
                v77 = (float)(v73 + *(float *)(a1 + 152)) - v62;
                if ( (float)(int)v94 <= v77 )
                  v77 = (float)(int)v94;
                *(_DWORD *)&v110[28] = (int)v77;
                v78 = (float)(v75 + *(float *)(a1 + 156)) - v63;
                if ( (float)SHIDWORD(v109) <= v78 )
                  v78 = (float)SHIDWORD(v109);
                *(_DWORD *)&v110[32] = (int)v78;
                v79 = *v14;
                v80 = v109;
                v99 = v109;
                v81 = *(_OWORD *)v110;
                v100 = *(_OWORD *)v110;
                v82 = *(_OWORD *)&v110[16];
                v101 = *(_OWORD *)&v110[16];
                v83 = *(_QWORD *)&v110[32];
                v102 = *(_QWORD *)&v110[32];
                v84 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v79 + 104))(v14, &v99);
                v34 = v84;
                if ( v84 < 0 )
                {
                  v35 = (unsigned int)v84;
                  v36 = 454LL;
                  goto LABEL_72;
                }
                v99 = v80;
                WORD4(v99) = 257;
                v85 = *v14;
                v100 = v81;
                v101 = v82;
                v102 = v83;
                v86 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v85 + 104))(v14, &v99);
                v34 = v86;
                if ( v86 < 0 )
                {
                  v35 = (unsigned int)v86;
                  v36 = 461LL;
                  goto LABEL_72;
                }
              }
              v87 = a3[2];
              if ( v87 > 0.0 )
              {
                v88 = a3[3];
                if ( v88 > 0.0 )
                {
                  v97 = (int)v87;
                  v98 = (int)v88;
                  v94 = v14;
                  (*(void (__fastcall **)(__int64 *))(*v14 + 8))(v14);
                  v103 = *(_OWORD *)(a1 + 144);
                  *(_OWORD *)&v95[1] = *(_OWORD *)a3;
                  AddOptionsRelativeToInside(3, (unsigned int)&v95[1], (unsigned int)&v103, v97, 0, (__int64)&v94);
                  v94 = v14;
                  (*(void (__fastcall **)(__int64 *))(*v14 + 8))(v14);
                  v103 = *(_OWORD *)(a1 + 144);
                  *(_OWORD *)&v95[1] = *(_OWORD *)a3;
                  AddOptionsRelativeToInside(3, (unsigned int)&v95[1], (unsigned int)&v103, v97, 1, (__int64)&v94);
                }
              }
              v89 = a4[2];
              if ( v89 > 0.0 )
              {
                v90 = a4[3];
                if ( v90 > 0.0 )
                {
                  v97 = (int)v89;
                  v98 = (int)v90;
                  v94 = v14;
                  (*(void (__fastcall **)(__int64 *))(*v14 + 8))(v14);
                  v103 = *(_OWORD *)(a1 + 144);
                  *(_OWORD *)&v95[1] = *(_OWORD *)a4;
                  AddOptionsRelativeToInside(5, (unsigned int)&v95[1], (unsigned int)&v103, v97, 0, (__int64)&v94);
                  v94 = v14;
                  (*(void (__fastcall **)(__int64 *))(*v14 + 8))(v14);
                  v103 = *(_OWORD *)(a1 + 144);
                  *(_OWORD *)&v95[1] = *(_OWORD *)a4;
                  AddOptionsRelativeToInside(5, (unsigned int)&v95[1], (unsigned int)&v103, v97, 1, (__int64)&v94);
                }
              }
              v91 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v14 + 64))(v14, v108);
              v34 = v91;
              if ( v91 >= 0 )
                goto LABEL_73;
              v35 = (unsigned int)v91;
              v36 = 480LL;
            }
            else
            {
              v35 = (unsigned int)v61;
              v36 = 425LL;
            }
          }
          else
          {
            v35 = (unsigned int)v54;
            v36 = 409LL;
          }
        }
        else
        {
          v35 = (unsigned int)v52;
          v36 = 405LL;
        }
      }
      else
      {
        v35 = (unsigned int)v38;
        v36 = 386LL;
      }
    }
    else
    {
      v35 = (unsigned int)v33;
      v36 = 382LL;
    }
LABEL_72:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)v35,
      v92);
    v13 = v34;
LABEL_73:
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v105);
    return v13;
  }
  v108 = *(_OWORD *)a4;
  *(_OWORD *)&v95[1] = *(_OWORD *)a3;
  v107 = *a2;
  PositionAndSizeOptionsHub = KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptionsHub(
                                a1,
                                (unsigned int)&v107,
                                (unsigned int)&v95[1],
                                (unsigned int)&v108,
                                a5,
                                a6);
  v11 = PositionAndSizeOptionsHub;
  if ( PositionAndSizeOptionsHub < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x141,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)PositionAndSizeOptionsHub,
      v93);
  return v11;
}
