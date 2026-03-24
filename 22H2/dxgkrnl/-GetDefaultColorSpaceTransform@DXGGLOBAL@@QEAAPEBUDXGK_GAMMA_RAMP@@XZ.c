/*
 * XREFs of ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C026A2F4
 * Callers:
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00EB514 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000B554 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

const struct DXGK_GAMMA_RAMP *__fastcall DXGGLOBAL::GetDefaultColorSpaceTransform(DXGGLOBAL *this)
{
  _WORD *v2; // rax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  signed int v9; // r8d
  __m128i v10; // xmm0

  if ( !*((_QWORD *)this + 38069) )
  {
    v2 = operator new[](0x30uLL, 0x4B677844u, PagedPool);
    if ( v2 )
    {
      v2[20] = 0;
      *((_QWORD *)v2 + 3) = 0LL;
      *((_QWORD *)v2 + 4) = 0LL;
      *(_QWORD *)v2 = &ReferenceCounted::`vftable';
      *(_QWORD *)v2 = &DXGK_GAMMA_RAMP::`vftable';
      *((_DWORD *)v2 + 2) = 1;
      *((_DWORD *)v2 + 4) = 1;
    }
    *((_QWORD *)this + 38069) = v2;
    if ( v2 )
    {
      v3 = DXGK_GAMMA_RAMP::Initialize((size_t *)v2, 4LL, 0LL);
      v6 = v3;
      if ( v3 >= 0 )
      {
        LODWORD(v6) = 0;
        memset(*(void **)(*((_QWORD *)this + 38069) + 32LL), 0, 0xC034uLL);
        v9 = 0;
        **(_DWORD **)(*((_QWORD *)this + 38069) + 32LL) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38069) + 32LL) + 20LL) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38069) + 32LL) + 40LL) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38069) + 32LL) + 48LL) = 1065353216;
        v8 = 0LL;
        do
        {
          v8 += 12LL;
          v10 = _mm_cvtsi32_si128(v9++);
          *(float *)v10.m128i_i32 = _mm_cvtepi32_ps(v10).m128_f32[0] / 4095.0;
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38069) + 32LL) + v8 + 40) = v10.m128i_i32[0];
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38069) + 32LL) + v8 + 44) = v10.m128i_i32[0];
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38069) + 32LL) + v8 + 48) = v10.m128i_i32[0];
        }
        while ( v9 < 4096 );
      }
      else
      {
        v7 = WdLogNewEntry5_WdError(v5, v4);
        *(_QWORD *)(v7 + 24) = v6;
        WdLogEvent5_WdError(v7);
      }
      if ( (int)v6 < 0 )
      {
        ReferenceCounted::Release(*((ReferenceCounted **)this + 38069), v8);
        *((_QWORD *)this + 38069) = 0LL;
      }
    }
  }
  return (const struct DXGK_GAMMA_RAMP *)*((_QWORD *)this + 38069);
}
