/*
 * XREFs of _lambda_75d12933469d574ec35b52b770ab7fc4_::operator() @ 0x1804195F8
 * Callers:
 *     ??$LambdaCustomPaintProc@V_lambda_75d12933469d574ec35b52b770ab7fc4_@@PEAUID2D1DeviceContext@@@@YAXPEAUID2D1DeviceContext@@AEBUtagSIZE@@_J@Z @ 0x1804191B0 (--$LambdaCustomPaintProc@V_lambda_75d12933469d574ec35b52b770ab7fc4_@@PEAUID2D1DeviceContext@@@@Y.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertColor@D2DUtil@@YA?AU_D3DCOLORVALUE@@KM@Z @ 0x1804101BC (-ConvertColor@D2DUtil@@YA-AU_D3DCOLORVALUE@@KM@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180410420 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804195CC (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 */

__int64 __fastcall lambda_75d12933469d574ec35b52b770ab7fc4_::operator()(__int64 a1, __int64 *a2, __int64 a3, float a4)
{
  int v4; // ebx
  unsigned int Color; // edi
  struct _D3DCOLORVALUE *v8; // rax
  float *v9; // rcx
  float v10; // xmm6_4
  float v11; // xmm7_4
  __int128 v12; // xmm1
  int v13; // eax
  unsigned int v14; // edi
  int v15; // ecx
  float v16; // xmm7_4
  int v17; // eax
  int v18; // eax
  void (__fastcall *v19)(__int64 *, struct _D3DCOLORVALUE *, __int64); // rax
  __int64 v20; // rax
  __int64 v21; // rax
  void (__fastcall *v22)(__int64 *, struct _D3DCOLORVALUE *, __int64); // rax
  __int64 v24; // [rsp+48h] [rbp-79h] BYREF
  int v25[2]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v26; // [rsp+58h] [rbp-69h] BYREF
  __int64 v27; // [rsp+60h] [rbp-61h]
  struct _D3DCOLORVALUE v28; // [rsp+68h] [rbp-59h] BYREF
  _DWORD v29[4]; // [rsp+78h] [rbp-49h] BYREF
  __int128 v30; // [rsp+88h] [rbp-39h] BYREF
  __int128 v31; // [rsp+98h] [rbp-29h] BYREF
  int v32; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v33; // [rsp+ACh] [rbp-15h]
  int v34; // [rsp+BCh] [rbp-5h]
  __int128 v35; // [rsp+C0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v4 = a3;
  v27 = a3;
  Color = CImmersiveColor::GetColor(0xABu);
  v8 = D2DUtil::ConvertColor(&v28, (struct _D3DCOLORVALUE *)Color, 0.0, a4);
  v9 = (float *)(*(_QWORD *)a1 + 352LL);
  v30 = *(_OWORD *)&v8->r;
  v10 = 1.0 - HighContrastAwareOpacity<float>::operator float(v9);
  v11 = 1.0
      - (float)(v10 / (float)(1.0 - HighContrastAwareOpacity<float>::operator float((float *)(*(_QWORD *)a1 + 340LL))));
  v12 = *(_OWORD *)&D2DUtil::ConvertColor(&v28, (struct _D3DCOLORVALUE *)Color, v11, a4)->r;
  v32 = 0;
  v26 = 0LL;
  v31 = v12;
  v34 = 1065353216;
  v35 = v12;
  v33 = v30;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  v13 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64))(*a2 + 72))(a2, &v32, 2LL);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v15 = HIDWORD(v27) - *(_DWORD *)(*(_QWORD *)a1 + 360LL);
    v29[0] = 0;
    v29[1] = 0;
    v29[2] = 0;
    *(_QWORD *)v25 = 0LL;
    v16 = (float)v15;
    *(float *)&v29[3] = (float)v15;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
    v17 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, __int64, int *))(*a2 + 80))(a2, v29, 0LL, v26, v25);
    v14 = v17;
    if ( v17 >= 0 )
    {
      v24 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v18 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int64 *))(*a2 + 64))(a2, &v30, 0LL, &v24);
      v14 = v18;
      if ( v18 >= 0 )
      {
        *(_QWORD *)&v28.r = 0LL;
        v19 = *(void (__fastcall **)(__int64 *, struct _D3DCOLORVALUE *, __int64))(*a2 + 136);
        *(_QWORD *)&v28.b = COERCE_UNSIGNED_INT((float)v4);
        v19(a2, &v28, v24);
        *(_QWORD *)&v28.r = 0LL;
        v20 = *a2;
        v28.b = (float)v4;
        v28.a = v16;
        (*(void (__fastcall **)(__int64 *, struct _D3DCOLORVALUE *, _QWORD))(v20 + 136))(a2, &v28, *(_QWORD *)v25);
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 64LL))(v24, &v31);
        v28.r = 0.0;
        v21 = *a2;
        v28.g = v16;
        v28.b = (float)v4;
        v22 = *(void (__fastcall **)(__int64 *, struct _D3DCOLORVALUE *, __int64))(v21 + 136);
        v28.a = (float)SHIDWORD(v27);
        v22(a2, &v28, v24);
        v14 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A3,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)v18);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A0,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v17);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x398,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)v13);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  return v14;
}
