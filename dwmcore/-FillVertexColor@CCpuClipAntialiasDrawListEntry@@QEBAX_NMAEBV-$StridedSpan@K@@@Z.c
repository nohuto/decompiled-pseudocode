/*
 * XREFs of ?FillVertexColor@CCpuClipAntialiasDrawListEntry@@QEBAX_NMAEBV?$StridedSpan@K@@@Z @ 0x18007D418
 * Callers:
 *     ?EmitCpuClipAntialiasTemplateGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCCpuClipAntialiasBatchCommand@@_N@Z @ 0x18007D038 (-EmitCpuClipAntialiasTemplateGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCCpuClipAntialiasBa.c)
 * Callees:
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x18007E818 (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 */

int __fastcall CCpuClipAntialiasDrawListEntry::FillVertexColor(__int64 a1, char a2, float a3)
{
  const __m128i *v3; // r8
  __m128i v5; // xmm4
  const __m128i *v6; // rax
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm4_4
  unsigned int v11; // r9d
  unsigned int v12; // r10d
  __int64 *v13; // r11
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // eax
  __int64 v17; // rcx
  __m128 v18; // xmm3
  float v19; // xmm2_4
  struct _D3DCOLORVALUE v21; // [rsp+20h] [rbp-40h] BYREF
  struct _D3DCOLORVALUE v22; // [rsp+30h] [rbp-30h] BYREF

  v3 = (const __m128i *)(a1 + 24);
  if ( CCommonRegistryData::CpuClipAASinkEnableDebugColors )
  {
    LODWORD(v14) = ColorDWFromStraightColorF((const struct _D3DCOLORVALUE *)(a1 + 24));
    v11 = v14;
  }
  else if ( *(_BYTE *)(*(_QWORD *)(a1 + 64) + 104LL) )
  {
    *(struct _D3DCOLORVALUE *)&v22.r = (struct _D3DCOLORVALUE)_mm_loadu_si128(v3);
    v22.a = _mm_shuffle_ps(*(__m128 *)&v22.r, *(__m128 *)&v22.r, 255).m128_f32[0] * a3;
    v11 = ColorDWFromStraightColorF(&v22);
    LODWORD(v14) = v11 & 0xFFFFFF;
  }
  else
  {
    v5 = _mm_loadu_si128(v3);
    v6 = *(const __m128i **)(a1 + 16);
    v7 = *(float *)&v5.m128i_i32[1] * a3;
    v8 = *(float *)&v5.m128i_i32[2] * a3;
    v9 = *(float *)&v5.m128i_i32[3] * a3;
    v10 = *(float *)v5.m128i_i32 * a3;
    v21.g = *(float *)&v5.m128i_i32[1] * a3;
    v21.b = *(float *)&v5.m128i_i32[2] * a3;
    v21.a = *(float *)&v5.m128i_i32[3] * a3;
    v21.r = v10;
    if ( v6 )
    {
      v18 = (__m128)_mm_loadu_si128(v6 + 4);
      v19 = _mm_shuffle_ps(v18, v18, 255).m128_f32[0];
      v22.r = v18.m128_f32[0] * v19;
      v22.g = _mm_shuffle_ps(v18, v18, 85).m128_f32[0] * v19;
      v22.a = v19;
      v22.b = _mm_shuffle_ps(v18, v18, 170).m128_f32[0] * v19;
      v21.a = v9 * _mm_shuffle_ps(*(__m128 *)&v22.r, *(__m128 *)&v22.r, 255).m128_f32[0];
      v21.r = v10 * (float)(v18.m128_f32[0] * v19);
      v21.g = v7 * _mm_shuffle_ps(*(__m128 *)&v22.r, *(__m128 *)&v22.r, 85).m128_f32[0];
      v21.b = v8 * _mm_shuffle_ps(*(__m128 *)&v22.r, *(__m128 *)&v22.r, 170).m128_f32[0];
    }
    v11 = ColorDWFromStraightColorF(&v21);
    LODWORD(v14) = v12;
  }
  v15 = v11;
  if ( a2 )
    v15 = v14;
  for ( ; v12 < *((_DWORD *)v13 + 3); *(_DWORD *)(v17 + *v13) = v15 )
  {
    *(_DWORD *)((int)(*((_DWORD *)v13 + 2) * v12) + *v13) = v11;
    v16 = *((_DWORD *)v13 + 2) * (v12 + 1);
    v12 += 2;
    v17 = v16;
    v14 = *v13;
  }
  return v14;
}
