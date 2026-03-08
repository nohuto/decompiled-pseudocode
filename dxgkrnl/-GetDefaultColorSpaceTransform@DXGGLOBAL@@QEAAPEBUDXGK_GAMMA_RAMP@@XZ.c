/*
 * XREFs of ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C030E51C
 * Callers:
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0179EC4 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0004868 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

const struct DXGK_GAMMA_RAMP *__fastcall DXGGLOBAL::GetDefaultColorSpaceTransform(DXGGLOBAL *this)
{
  signed int v1; // edi
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rbx
  __int64 v7; // rdx
  __m128i v8; // xmm0

  v1 = 0;
  if ( !*((_QWORD *)this + 38096) )
  {
    v3 = operator new[](0x30uLL, 0x4B677844u, 256LL);
    if ( !v3 )
    {
LABEL_5:
      *((_QWORD *)this + 38096) = 0LL;
      return (const struct DXGK_GAMMA_RAMP *)*((_QWORD *)this + 38096);
    }
    *(_WORD *)(v3 + 40) = 0;
    *(_QWORD *)v3 = &ReferenceCounted::`vftable';
    *(_DWORD *)(v3 + 8) = 1;
    *(_QWORD *)v3 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v3 + 16) = 1;
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_QWORD *)(v3 + 32) = 0LL;
    *((_QWORD *)this + 38096) = v3;
    v4 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v3, D3DDDI_GAMMARAMP_MATRIX_3x4, 0LL);
    if ( v4 < 0 )
    {
      v5 = v4;
      WdLogSingleEntry1(2LL, v4);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to initialize the 3X4 type of gamma ramp (Status = 0x%I64x).",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
      ReferenceCounted::Release(*((ReferenceCounted **)this + 38096));
      goto LABEL_5;
    }
    memset(*(void **)(*((_QWORD *)this + 38096) + 32LL), 0, 0xC034uLL);
    **(_DWORD **)(*((_QWORD *)this + 38096) + 32LL) = 1065353216;
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38096) + 32LL) + 20LL) = 1065353216;
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38096) + 32LL) + 40LL) = 1065353216;
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38096) + 32LL) + 48LL) = 1065353216;
    v7 = 0LL;
    do
    {
      v7 += 12LL;
      v8 = _mm_cvtsi32_si128(v1++);
      *(float *)v8.m128i_i32 = _mm_cvtepi32_ps(v8).m128_f32[0] / 4095.0;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38096) + 32LL) + v7 + 40) = v8.m128i_i32[0];
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38096) + 32LL) + v7 + 44) = v8.m128i_i32[0];
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38096) + 32LL) + v7 + 48) = v8.m128i_i32[0];
    }
    while ( v1 < 4096 );
  }
  return (const struct DXGK_GAMMA_RAMP *)*((_QWORD *)this + 38096);
}
