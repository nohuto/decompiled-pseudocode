/*
 * XREFs of ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x180276A04
 * Callers:
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802768A4 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?ProcessStateChanges@CCursorState@@QEAAX_K_N@Z @ 0x180276F18 (-ProcessStateChanges@CCursorState@@QEAAX_K_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180090CB0 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DAF28 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18026D270 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 */

void __fastcall CCursorState::EnsureDestRectAndTransform(CCursorState *this, char a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int *v5; // rax
  int v6; // ecx
  int v7; // edx
  float v8; // xmm1_4
  float v9; // xmm2_4
  __int64 v10; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  const char *v12; // r9
  unsigned __int64 v13; // xmm1_8
  int v14; // [rsp+20h] [rbp-89h] BYREF
  int v15; // [rsp+24h] [rbp-85h] BYREF
  _DWORD v16[6]; // [rsp+28h] [rbp-81h] BYREF
  __int128 v17; // [rsp+40h] [rbp-69h] BYREF
  __int128 v18; // [rsp+50h] [rbp-59h]
  __int128 v19; // [rsp+60h] [rbp-49h]
  unsigned int v20; // [rsp+70h] [rbp-39h]
  unsigned int v21; // [rsp+74h] [rbp-35h]
  int v22; // [rsp+78h] [rbp-31h]
  int v23; // [rsp+7Ch] [rbp-2Dh]
  int v24; // [rsp+80h] [rbp-29h]
  _BYTE v25[64]; // [rsp+90h] [rbp-19h] BYREF
  int v26; // [rsp+D0h] [rbp+27h]
  __int128 v27; // [rsp+E0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  if ( !*((_BYTE *)this + 106) || a2 )
  {
    v3 = *((_QWORD *)this + 23);
    if ( v3 )
    {
      v24 = 0;
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**(_QWORD **)(v3 + 24) + 24LL))(
             *(_QWORD *)(v3 + 24),
             &v14,
             &v15);
      if ( v4 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          351LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          (const char *)(unsigned int)v4,
          v14);
      *(_QWORD *)&v27 = 0LL;
      *((float *)&v27 + 2) = (float)v14;
      *((float *)&v27 + 3) = (float)v15;
      if ( *((_BYTE *)this + 105) )
      {
        *((float *)&v27 + 2) = (float)v14 + 6.0;
        *((float *)&v27 + 3) = (float)v15 + 4.0;
      }
      v5 = (int *)*((_QWORD *)this + 23);
      v6 = *v5;
      v7 = v5[1];
      v22 = 0;
      v18 = _xmm;
      v17 = _xmm;
      v23 = 1065353216;
      LOBYTE(v24) = 84;
      BYTE1(v24) = BYTE1(v24) & 0xC0 | 0x17;
      v19 = _xmm;
      v20 = COERCE_UNSIGNED_INT((float)v6) ^ _xmm;
      v8 = 1.0 / *((float *)this + 44);
      v21 = COERCE_UNSIGNED_INT((float)v7) ^ _xmm;
      CMILMatrix::Scale((CMILMatrix *)&v17, v8, v8, 1.0);
      v9 = *((float *)this + 50);
      if ( COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.0000011920929 )
      {
        v16[0] = 0;
        v16[1] = 0;
        v26 = 0;
        v16[2] = 1065353216;
        CMILMatrix::SetRotation((CMILMatrix *)v25, (const struct Windows::Foundation::Numerics::float3 *)v16, v9);
        CMILMatrix::Multiply((CMILMatrix *)&v17, (const struct CMILMatrix *)v25);
      }
      CMILMatrix::Translate((CMILMatrix *)&v17, *((float *)this + 51), *((float *)this + 52));
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v17, (struct MilRectF *)&v27, (float *)this + 34);
      if ( !CMILMatrix::Invert((CMILMatrix *)&v17, v10, v11) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          389LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          v12);
      *(_QWORD *)&v27 = v17;
      *((_QWORD *)&v27 + 1) = v18;
      v13 = _mm_unpacklo_ps((__m128)v20, (__m128)v21).m128_u64[0];
      *(_OWORD *)((char *)this + 152) = v27;
      *((_QWORD *)this + 21) = v13;
    }
    else
    {
      *((_QWORD *)this + 18) = 0LL;
      *((_QWORD *)this + 17) = 0LL;
      *((_QWORD *)this + 19) = 1065353216LL;
      *((_DWORD *)this + 40) = 0;
      *(_QWORD *)((char *)this + 164) = 1065353216LL;
      *((_DWORD *)this + 43) = 0;
    }
    *((_BYTE *)this + 106) = 1;
  }
}
