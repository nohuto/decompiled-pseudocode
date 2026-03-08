/*
 * XREFs of ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180095CCC
 * Callers:
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180030350 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 * Callees:
 *     ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapRealization@@@Z @ 0x180092F70 (--4-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapReal.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x180092FF0 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     ??A?$span@PEBVCDrawListBrush@@$0?0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z @ 0x180095C34 (--A-$span@PEBVCDrawListBrush@@$0-0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800B6654 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1800DF4F0 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1801062B4 (--0SamplerMode@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CBrushRenderingEffect::CBrushRenderingEffect(
        __int64 a1,
        _QWORD *a2,
        gsl::details *a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rsi
  __int64 v8; // r14
  CDrawListBitmap *v9; // rbp
  __int64 v10; // r12
  SamplerMode *v11; // rbp
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 *v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // r14
  __int64 v18; // r15
  gsl::details *v19; // rcx
  __int128 v20; // xmm0
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  float v24[18]; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+70h] [rbp+8h]
  int v26; // [rsp+74h] [rbp+Ch]

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CBrushRenderingEffect::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = 4LL;
  v8 = 4LL;
  v9 = (CDrawListBitmap *)(a1 + 24);
  do
  {
    CDrawListBitmap::CDrawListBitmap(v9);
    v9 = (CDrawListBitmap *)((char *)v9 + 24);
    --v8;
  }
  while ( v8 );
  v10 = a1 + 120;
  v11 = (SamplerMode *)(a1 + 120);
  do
  {
    SamplerMode::SamplerMode(v11);
    v11 = (SamplerMode *)((char *)v11 + 3);
    --v7;
  }
  while ( v7 );
  if ( *(_QWORD **)(a1 + 16) != a2 )
  {
    if ( a2 )
      (**(void (__fastcall ***)(_QWORD))*a2)(*a2);
    v12 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 16) = a2;
    if ( v12 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 8LL))(*v12);
  }
  v13 = 0LL;
  if ( *(_QWORD *)a3 )
  {
    v14 = a1 + 132;
    v15 = (__int64 *)(a1 + 40);
    do
    {
      v16 = (_QWORD *)gsl::span<CDrawListBrush const *,-1>::operator[](a3, v13);
      v17 = *v16;
      v18 = *v16 + 56LL;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v16 + 8LL))(*v16, 2LL) )
      {
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(v15 - 2, *(_QWORD *)v18);
        wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(v15 - 1, *(_QWORD *)(v18 + 8));
        *(_BYTE *)v15 = *(_BYTE *)(v18 + 16);
        *(_WORD *)v10 = *(_WORD *)(v17 + 80);
        *(_BYTE *)(v10 + 2) = *(_BYTE *)(v17 + 82);
        *(_BYTE *)(a1 + v13 + 264) = *(_BYTE *)(v17 + 146);
        if ( v13 >= *a4 )
        {
          gsl::details::terminate(v19);
          JUMPOUT(0x180095F37LL);
        }
        *(_BYTE *)(a1 + v13 + 260) = *(_BYTE *)(v13 + a4[1]);
        if ( !*(_BYTE *)(v17 + 146) && (*(_BYTE *)(v17 + 52) || *(_BYTE *)(v17 + 145)) )
          v20 = 0LL;
        else
          v20 = *(_OWORD *)(v17 + 120);
        *(_OWORD *)v14 = v20;
        CDrawListBitmap::GetSize((CDrawListBitmap *)v18);
        v21 = 0LL;
        v22 = 0LL;
        v21.m128_f32[0] = (float)v25;
        v22.m128_f32[0] = (float)v26;
        *(_QWORD *)(v14 + 16) = _mm_unpacklo_ps(v21, v22).m128_u64[0];
        *(float *)(v14 + 24) = 1.0 / (float)v25;
        *(float *)(v14 + 28) = 1.0 / (float)v26;
      }
      else
      {
        v24[3] = *(float *)(v18 + 12);
        v24[0] = v24[3] * *(float *)v18;
        v24[1] = v24[3] * *(float *)(v18 + 4);
        v24[2] = v24[3] * *(float *)(v18 + 8);
        *(_OWORD *)v14 = *(_OWORD *)v24;
      }
      ++v13;
      v10 += 3LL;
      v15 += 3;
      v14 += 32LL;
    }
    while ( v13 < *(_QWORD *)a3 );
  }
  return a1;
}
