__int64 __fastcall CScrollPositionKeyframeAnimation::EnsureInertiaModifierProcessed(
        CScrollPositionKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  char v4; // al
  struct CExpressionValueStack *v5; // rdi
  char v7; // r14
  int v8; // r12d
  int v9; // r15d
  float v10; // xmm0_4
  char v11; // si
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  int v16; // xmm0_4
  int v17; // xmm0_4
  const char *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  _DWORD *v21; // rcx
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+40h] [rbp-C8h]
  _DWORD v24[16]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+88h] [rbp-80h] BYREF
  int v26; // [rsp+90h] [rbp-78h]
  char v27; // [rsp+94h] [rbp-74h]
  _DWORD v28[16]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-30h] BYREF
  int v30; // [rsp+E0h] [rbp-28h]
  char v31; // [rsp+E4h] [rbp-24h]
  __int64 v32; // [rsp+E8h] [rbp-20h] BYREF
  int v33; // [rsp+F0h] [rbp-18h]
  __int64 v34; // [rsp+128h] [rbp+20h] BYREF
  int v35; // [rsp+130h] [rbp+28h]
  char v36; // [rsp+134h] [rbp+2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v4 = *((_BYTE *)this + 752);
  v5 = a2;
  if ( (v4 & 4) == 0 )
  {
    *((_BYTE *)this + 752) = v4 | 4;
    memset_0(v28, 0, sizeof(v28));
    v29 = 0LL;
    v7 = 0;
    v30 = 18;
    v31 = 0;
    v8 = 18;
    memset_0(v24, 0, sizeof(v24));
    v9 = 18;
    LODWORD(v10) = *((_DWORD *)this + 190) & _xmm;
    v25 = 0LL;
    v26 = 18;
    v11 = 0;
    v27 = 0;
    if ( v10 >= 0.0000011920929 )
    {
      v12 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, v5, a3, 0LL, 0, v28);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 93LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v25);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v29);
        return v13;
      }
      v7 = v31;
      v8 = v30;
      v5 = a2;
    }
    if ( COERCE_FLOAT(*((_DWORD *)this + 191) & _xmm) >= 0.0000011920929 )
    {
      v12 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, v5, a3, 0LL, 1, v24);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 103LL;
        goto LABEL_9;
      }
      v11 = v27;
      v9 = v26;
    }
    if ( v7 || v11 )
    {
      CScrollPositionKeyframeAnimation::GetNaturalEndpoint(this, &v22);
      if ( v7 && v8 == 18 )
      {
        v16 = v28[0];
        *((_BYTE *)this + 752) |= 8u;
        LODWORD(v22) = v16;
      }
      if ( v11 && v9 == 18 )
      {
        v17 = v24[0];
        *((_BYTE *)this + 752) |= 8u;
        HIDWORD(v22) = v17;
      }
      if ( (*((_BYTE *)this + 752) & 8) != 0 )
      {
        memset_0(&v32, 0, 0x40uLL);
        v19 = *((_QWORD *)this + 49);
        v34 = 0LL;
        v33 = v23;
        v20 = (unsigned int)(*(_DWORD *)(v19 + 112) - 1);
        v35 = 52;
        v32 = v22;
        v36 = 1;
        v21 = *(_DWORD **)(*(_QWORD *)(v19 + 104) + 24 * v20 + 8);
        if ( v21[5] != 1 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            111LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
            v18);
        if ( v21[4] != 52 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            114LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
            v18);
        CExpressionValue::CopyFrom((CExpressionValue *)(v21 + 6), (const struct CExpressionValue *)&v32);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v34);
      }
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v29);
  }
  return 0LL;
}
