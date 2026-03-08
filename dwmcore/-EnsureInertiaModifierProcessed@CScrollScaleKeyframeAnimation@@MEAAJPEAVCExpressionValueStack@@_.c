/*
 * XREFs of ?EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180262CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180057DA8 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x18026BE00 (-TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4Modifie.c)
 */

__int64 __fastcall CScrollScaleKeyframeAnimation::EnsureInertiaModifierProcessed(
        CScrollScaleKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  char v3; // al
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  const char *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rcx
  char v15; // al
  _DWORD v16[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+78h] [rbp-88h]
  char v19; // [rsp+7Ch] [rbp-84h]
  _DWORD v20[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-40h] BYREF
  int v22; // [rsp+C8h] [rbp-38h]
  char v23; // [rsp+CCh] [rbp-34h]
  _DWORD v24[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v25; // [rsp+110h] [rbp+10h] BYREF
  int v26; // [rsp+118h] [rbp+18h]
  char v27; // [rsp+11Ch] [rbp+1Ch]
  _DWORD v28[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v29; // [rsp+160h] [rbp+60h] BYREF
  int v30; // [rsp+168h] [rbp+68h]
  char v31; // [rsp+16Ch] [rbp+6Ch]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v3 = *((_BYTE *)this + 752);
  if ( (v3 & 4) != 0 )
    return 0LL;
  *((_BYTE *)this + 752) = v3 | 4;
  memset_0(v24, 0, sizeof(v24));
  v25 = 0LL;
  v26 = 18;
  v27 = 0;
  memset_0(v20, 0, sizeof(v20));
  v21 = 0LL;
  v22 = 18;
  v23 = 0;
  memset_0(v16, 0, sizeof(v16));
  v17 = 0LL;
  v18 = 18;
  v19 = 0;
  v7 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, a3, 0LL, 2, v24);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 96LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v25);
    return v8;
  }
  v7 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, a3, 1LL, 0, v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 103LL;
    goto LABEL_8;
  }
  v7 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, a3, 1LL, 1, v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 110LL;
    goto LABEL_8;
  }
  if ( v27 && v26 == 18 )
  {
    memset_0(v28, 0, sizeof(v28));
    v12 = *((_QWORD *)this + 49);
    v29 = 0LL;
    v28[0] = v24[0];
    v13 = (unsigned int)(*(_DWORD *)(v12 + 112) - 1);
    v30 = 18;
    v31 = 1;
    v14 = *(_DWORD **)(*(_QWORD *)(v12 + 104) + 24 * v13 + 8);
    if ( v14[5] != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        111LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
        v11);
    if ( v14[4] != 18 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        114LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
        v11);
    CExpressionValue::CopyFrom((CExpressionValue *)(v14 + 6), (const struct CExpressionValue *)v28);
    *((_BYTE *)this + 752) |= 8u;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v29);
  }
  v15 = v19;
  if ( v23 )
  {
    if ( v22 == 18 )
      *((_DWORD *)this + 190) = v20[0] ^ _xmm;
    goto LABEL_21;
  }
  if ( v19 )
  {
LABEL_21:
    if ( v15 )
    {
      if ( v18 == 18 )
        *((_DWORD *)this + 191) = v16[0] ^ _xmm;
    }
  }
  *(_QWORD *)(*((_QWORD *)this + 73) + 148LL) = *((_QWORD *)this + 95);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v25);
  return 0LL;
}
