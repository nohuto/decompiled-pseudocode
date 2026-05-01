/*
 * XREFs of ?GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800D2C0C
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x18003CF80 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 * Callees:
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x18003C4D0 (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 *     ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@URect@Foundation@6@1UKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18003DAE0 (-AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@URect@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$Make@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@12@AEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@$$QEAUpermission@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@Z @ 0x1800D2A78 (--$Make@V-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboar.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptionsHub(
        __int64 a1,
        __int64 a2,
        float *a3,
        float *a4,
        char a5,
        __int64 a6)
{
  __int64 *v9; // rbx
  int v10; // edi
  __int64 *v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // r15d
  unsigned int v15; // r13d
  __int64 v16; // rax
  int v17; // eax
  int v18; // r13d
  unsigned int v19; // edi
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int128 v25; // xmm7
  __int128 v26; // xmm8
  __int64 v27; // xmm9_8
  float v28; // xmm6_4
  int v29; // r15d
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  __int64 v36; // rax
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  __int64 v43; // rax
  __int128 v44; // xmm6
  __int128 v45; // xmm8
  __int128 v46; // xmm9
  __int64 v47; // xmm7_8
  __int64 v48; // rax
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  __int64 *v54; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v55; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v56; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v57; // [rsp+78h] [rbp-90h] BYREF
  __int64 v58[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v59; // [rsp+98h] [rbp-70h] BYREF
  __int128 v60; // [rsp+A8h] [rbp-60h]
  __int128 v61; // [rsp+B8h] [rbp-50h]
  __int64 v62; // [rsp+C8h] [rbp-40h]
  __int128 v63; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v64; // [rsp+E8h] [rbp-20h]
  __int128 v65; // [rsp+F8h] [rbp-10h]
  __int64 v66; // [rsp+108h] [rbp+0h]
  __int64 v67; // [rsp+118h] [rbp+10h]
  __int128 v68; // [rsp+120h] [rbp+18h]
  __int128 v69; // [rsp+130h] [rbp+28h]
  __int128 v70; // [rsp+140h] [rbp+38h]
  __int64 v71; // [rsp+150h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v67 = a6;
  v58[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v58);
  v9 = 0LL;
  v58[0] = 0LL;
  v10 = 0;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality const &,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::permission>((__int64 *)&v54);
  v11 = v54;
  if ( v54 )
  {
    v9 = v54;
    v54 = 0LL;
    v58[0] = (__int64)v11;
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
  if ( v10 >= 0 )
  {
    v14 = (int)*(float *)(a1 + 152);
    v15 = (int)*(float *)(a1 + 156);
    *(_QWORD *)&v56 = v15;
    v55 = *(_OWORD *)(a1 + 144);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      (RTL_SRWLOCK *)(a1 + 16),
      &v54,
      *(HMONITOR *)(a1 + 136),
      (__int64)&v55,
      *(_DWORD *)(a1 + 176),
      *(_BYTE *)(a1 + 208),
      *(double *)(a1 + 216),
      (double *)(a1 + 200));
    v57 = *(_OWORD *)(a1 + 48);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      (RTL_SRWLOCK *)(a1 + 16),
      &v55,
      *(HMONITOR *)(a1 + 40),
      (__int64)&v57,
      *(_DWORD *)(a1 + 80),
      *(_BYTE *)(a1 + 208),
      *(double *)(a1 + 216),
      (double *)(a1 + 184));
    v71 = 0LL;
    *(_QWORD *)&v68 = 0xE00000001LL;
    *(_QWORD *)&v69 = __PAIR64__(HIDWORD(v54), v14);
    HIDWORD(v68) = v15;
    *((_QWORD *)&v69 + 1) = v14;
    DWORD2(v68) = 0;
    v16 = *v9;
    v63 = v68;
    v64 = v69;
    v65 = 0LL;
    v66 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v16 + 104))(v9, &v63);
    v10 = v17;
    if ( v17 >= 0 )
    {
      v18 = (int)*(float *)(a1 + 104);
      v19 = (int)*(float *)(a1 + 108);
      v57 = *(_OWORD *)(a1 + 96);
      KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
        (RTL_SRWLOCK *)(a1 + 16),
        &v55,
        *(HMONITOR *)(a1 + 88),
        (__int64)&v57,
        *(_DWORD *)(a1 + 128),
        *(_BYTE *)(a1 + 208),
        *(double *)(a1 + 216),
        (double *)(a1 + 192));
      v66 = 0LL;
      LODWORD(v63) = 2;
      *(_QWORD *)((char *)&v63 + 4) = 2LL;
      *(_QWORD *)&v64 = __PAIR64__(HIDWORD(v54), v14);
      HIDWORD(v63) = v56;
      *((_QWORD *)&v64 + 1) = (unsigned int)v54;
      v70 = 0LL;
      v71 = 0LL;
      LODWORD(v68) = 2;
      *(_QWORD *)((char *)&v68 + 4) = 2LL;
      *(_QWORD *)&v69 = __PAIR64__(DWORD1(v55), v18);
      HIDWORD(v68) = v19;
      *((_QWORD *)&v69 + 1) = (unsigned int)v55;
      v20 = v18;
      v21 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
      if ( v21 < v18 )
        v20 = v21;
      DWORD1(v70) = v20;
      v22 = v19;
      if ( DWORD2(v70) < v19 )
        v22 = DWORD2(v70);
      DWORD2(v70) = v22;
      v23 = v18;
      if ( HIDWORD(v70) < v18 )
        v23 = HIDWORD(v70);
      HIDWORD(v70) = v23;
      if ( (unsigned int)v71 < v19 )
        v19 = v71;
      LODWORD(v71) = v19;
      WORD4(v68) = 257;
      v24 = *v9;
      v59 = v68;
      v60 = v69;
      v61 = v70;
      v62 = v71;
      v17 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v24 + 104))(v9, &v59);
      v10 = v17;
      if ( v17 >= 0 )
      {
        if ( a5 )
        {
          v25 = v63;
          v68 = v63;
          v26 = v64;
          v69 = v64;
          v70 = 0LL;
          v27 = v66;
          v71 = v66;
          v28 = a3[3] + a3[1];
          DWORD1(v68) = 6;
          v29 = (int)a3[2];
          DWORD2(v69) = v29;
          LODWORD(v69) = v29;
          LODWORD(v70) = v29;
          v30 = *(float *)(a1 + 144);
          v31 = *a3 - v30;
          if ( (float)v29 <= v31 )
            v31 = (float)v29;
          DWORD1(v70) = (int)v31;
          v32 = *(float *)(a1 + 148);
          v33 = v28 - v32;
          if ( (float)SHIDWORD(v68) <= (float)(v28 - v32) )
            v33 = (float)SHIDWORD(v68);
          DWORD2(v70) = (int)v33;
          v34 = (float)(v30 + *(float *)(a1 + 152)) - *a3;
          if ( (float)v29 <= v34 )
            v34 = (float)v29;
          HIDWORD(v70) = (int)v34;
          v35 = (float)(v32 + *(float *)(a1 + 156)) - v28;
          if ( (float)SHIDWORD(v68) <= v35 )
            v35 = (float)SHIDWORD(v68);
          LODWORD(v71) = (int)v35;
          v36 = *v9;
          v59 = v68;
          v60 = v69;
          v61 = v70;
          v62 = v71;
          v17 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v36 + 104))(v9, &v59);
          v10 = v17;
          if ( v17 < 0 )
          {
            v13 = 269LL;
            goto LABEL_49;
          }
          v68 = v25;
          v69 = v26;
          v70 = 0LL;
          v71 = v27;
          DWORD1(v68) = 6;
          DWORD2(v69) = v29;
          LODWORD(v69) = v18;
          v37 = *(float *)(a1 + 144);
          v38 = *a3 - v37;
          if ( (float)v18 <= v38 )
            v38 = (float)v18;
          DWORD1(v70) = (int)v38;
          v39 = *(float *)(a1 + 148);
          v40 = v28 - v39;
          if ( (float)SHIDWORD(v68) <= (float)(v28 - v39) )
            v40 = (float)SHIDWORD(v68);
          DWORD2(v70) = (int)v40;
          v41 = (float)(v37 + *(float *)(a1 + 152)) - *a3;
          if ( (float)v18 <= v41 )
            v41 = (float)v18;
          HIDWORD(v70) = (int)v41;
          v42 = (float)(v39 + *(float *)(a1 + 156)) - v28;
          if ( (float)SHIDWORD(v68) <= v42 )
            v42 = (float)SHIDWORD(v68);
          LODWORD(v71) = (int)v42;
          v43 = *v9;
          v44 = v68;
          v59 = v68;
          v45 = v69;
          v60 = v69;
          v46 = v70;
          v61 = v70;
          v47 = v71;
          v62 = v71;
          v17 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v43 + 104))(v9, &v59);
          v10 = v17;
          if ( v17 < 0 )
          {
            v13 = 281LL;
            goto LABEL_49;
          }
          v59 = v44;
          WORD4(v59) = 257;
          v48 = *v9;
          v60 = v45;
          v61 = v46;
          v62 = v47;
          v17 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v48 + 104))(v9, &v59);
          v10 = v17;
          if ( v17 < 0 )
          {
            v13 = 288LL;
            goto LABEL_49;
          }
        }
        v49 = a3[2];
        if ( v49 > 0.0 )
        {
          v50 = a3[3];
          if ( v50 > 0.0 )
          {
            LODWORD(v55) = (int)v49;
            DWORD1(v55) = (int)v50;
            v54 = v9;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v54);
            v57 = *(_OWORD *)(a1 + 144);
            v56 = *(_OWORD *)a3;
            AddOptionsRelativeToInside(3u, (__int64)&v56, (__int64)&v57, v55, 0, &v54);
            v54 = v9;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v54);
            v57 = *(_OWORD *)(a1 + 144);
            v56 = *(_OWORD *)a3;
            AddOptionsRelativeToInside(3u, (__int64)&v56, (__int64)&v57, v55, 1, &v54);
          }
        }
        v51 = a4[2];
        if ( v51 > 0.0 )
        {
          v52 = a4[3];
          if ( v52 > 0.0 )
          {
            LODWORD(v54) = (int)v51;
            HIDWORD(v54) = (int)v52;
            *(_QWORD *)&v55 = v9;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v55);
            v57 = *(_OWORD *)(a1 + 144);
            v56 = *(_OWORD *)a4;
            AddOptionsRelativeToInside(5u, (__int64)&v56, (__int64)&v57, (__int64)v54, 0, (__int64 **)&v55);
            *(_QWORD *)&v55 = v9;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v55);
            v57 = *(_OWORD *)(a1 + 144);
            v56 = *(_OWORD *)a4;
            AddOptionsRelativeToInside(5u, (__int64)&v56, (__int64)&v57, (__int64)v54, 1, (__int64 **)&v55);
          }
        }
        v17 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v9 + 64))(v9, v67);
        v10 = v17;
        if ( v17 >= 0 )
        {
          v10 = 0;
          goto LABEL_52;
        }
        v13 = 307LL;
        goto LABEL_49;
      }
      v13 = 252LL;
    }
    else
    {
      v13 = 215LL;
    }
LABEL_49:
    v12 = (unsigned int)v17;
    goto LABEL_50;
  }
  v12 = (unsigned int)v10;
  v13 = 179LL;
LABEL_50:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
    (const char *)v12);
LABEL_52:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v58);
  return (unsigned int)v10;
}
