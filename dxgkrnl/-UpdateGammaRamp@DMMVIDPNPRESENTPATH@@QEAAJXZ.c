__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateGammaRamp(DMMVIDPNPRESENTPATH *this)
{
  unsigned int v2; // r14d
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  DXGGLOBAL *Global; // rax
  const void **DefaultColorSpaceTransform; // rsi
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  ReferenceCounted *v15; // rbx
  int v16; // eax
  int v17; // eax
  struct DMMVIDPNTARGETMODESET *v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 96LL) + 128LL);
  if ( v3 && !IsValidGammaRamp((const struct _D3DKMDT_GAMMA_RAMP *)(v3 + 16)) )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v4 + 40) )
    WdLogSingleEntry0(1LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 88LL);
  if ( !*(_QWORD *)(v5 + 8) )
    WdLogSingleEntry0(1LL);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2928LL)
    && v3
    && DXGK_GAMMA_RAMP::IsDefaultGammaRamp((DXGK_GAMMA_RAMP *)v3) )
  {
    v3 = 0LL;
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v6 + 40) )
    WdLogSingleEntry0(1LL);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 88LL);
  if ( !*(_QWORD *)(v7 + 8) )
    WdLogSingleEntry0(1LL);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL);
  if ( !v3 || (*(_DWORD *)(v8 + 2264) & 0x18) == 0 )
    goto LABEL_13;
  v12 = 4;
  v18 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 12));
  v13 = *((_QWORD *)v18 + 18);
  if ( v13 )
    v12 = *(_DWORD *)(v13 + 136);
  if ( (((auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v18, 0LL), v12 == 12) || v12 == 32)
     && (*(_DWORD *)(v8 + 2264) & 0x10) != 0
     || v12 == 30 && (*(_DWORD *)(v8 + 2264) & 8) != 0)
    && (Global = DXGGLOBAL::GetGlobal(),
        (DefaultColorSpaceTransform = (const void **)DXGGLOBAL::GetDefaultColorSpaceTransform(Global)) != 0LL) )
  {
    v14 = operator new[](0x30uLL, 0x4B677844u, 256LL);
    v15 = (ReferenceCounted *)v14;
    if ( v14 )
    {
      *(_WORD *)(v14 + 40) = 0;
      *(_DWORD *)(v14 + 16) = 1;
      *(_QWORD *)v14 = &ReferenceCounted::`vftable';
      *(_DWORD *)(v14 + 8) = 1;
      *(_QWORD *)v14 = &DXGK_GAMMA_RAMP::`vftable';
      *(_QWORD *)(v14 + 24) = 0LL;
      *(_QWORD *)(v14 + 32) = 0LL;
      v16 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v14, D3DDDI_GAMMARAMP_MATRIX_3x4, 0LL);
      v2 = v16;
      if ( v16 >= 0 )
      {
        v17 = ColorSpaceTransformCombine(DefaultColorSpaceTransform + 2, (int *)(v3 + 16), (__int64)v15 + 16);
        v2 = v17;
        if ( v17 >= 0 )
          DefaultColorSpaceTransform = (const void **)v15;
        else
          WdLogSingleEntry1(2LL, v17);
      }
      else
      {
        WdLogSingleEntry3(
          2LL,
          *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
          *(unsigned int *)(*((_QWORD *)this + 12) + 24LL),
          v16);
      }
    }
    else
    {
      v15 = 0LL;
      WdLogSingleEntry2(
        6LL,
        *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
        *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
      v2 = -1073741801;
    }
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct DXGK_GAMMA_RAMP *)DefaultColorSpaceTransform);
    if ( v15 )
      ReferenceCounted::Release(v15);
  }
  else
  {
LABEL_13:
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct DXGK_GAMMA_RAMP *)v3);
  }
  return v2;
}
