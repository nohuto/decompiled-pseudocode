__int64 __fastcall CCpuClipAntialiasDrawListEntry::Render(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128 *v9; // rdi
  int v10; // eax
  bool v11; // zf
  float v12; // xmm7_4
  float v13; // xmm9_4
  float v14; // xmm8_4
  float v15; // xmm6_4
  int CurrentLightBufferForContextNoRef; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edi
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // [rsp+28h] [rbp-61h]
  struct CHwLightCollectionBuffer *v27[2]; // [rsp+38h] [rbp-51h] BYREF
  __m128 v28; // [rsp+48h] [rbp-41h] BYREF
  __int128 v29; // [rsp+58h] [rbp-31h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  if ( (a1[12] & 0x200) != 0 )
  {
    v23 = D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a2 + 332));
    (*(void (__fastcall **)(__int64, _QWORD))(v24 + 64))(v25, v23);
  }
  v4 = *(_QWORD *)(a2 + 200);
  if ( v4 && *(_BYTE *)(v4 + 1912) )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 40);
  v6 = *(_QWORD *)(a2 + 904);
  v7 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 48LL))(a1);
  v8 = 0LL;
  v9 = (__m128 *)v7;
  v10 = *(_DWORD *)(v5 + 368);
  v29 = 0LL;
  if ( v10 )
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 344) + 8LL * (unsigned int)(v10 - 1));
  v11 = *(_DWORD *)(v8 + 68) == 1;
  *(_OWORD *)v27 = *(_OWORD *)(v8 + 52);
  if ( v11 )
  {
    v28.m128_f32[0] = (float)(int)CFloatFPU::CeilingSat(*(float *)v27 - 0.5);
    v28.m128_f32[1] = (float)(int)CFloatFPU::CeilingSat(*((float *)v27 + 1) - 0.5);
    v28.m128_f32[2] = (float)(int)CFloatFPU::CeilingSat(*(float *)&v27[1] - 0.5);
    v28.m128_f32[3] = (float)(int)CFloatFPU::CeilingSat(*((float *)&v27[1] + 1) - 0.5);
    v15 = v28.m128_f32[0];
    LODWORD(v14) = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
    LODWORD(v13) = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
    LODWORD(v12) = _mm_shuffle_ps(v28, v28, 255).m128_u32[0];
  }
  else
  {
    v12 = *((float *)&v27[1] + 1);
    v13 = *(float *)&v27[1];
    v14 = *((float *)v27 + 1);
    v15 = *(float *)v27;
  }
  v28 = *v9;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v6 - 84), (struct MilRectF *)&v28);
  if ( v13 <= *(float *)&v29
    || v12 <= *((float *)&v29 + 1)
    || *((float *)&v29 + 2) <= v15
    || *((float *)&v29 + 3) <= v14 )
  {
    return 0LL;
  }
  CurrentLightBufferForContextNoRef = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
                                        (CLightStack *)(a2 + 560),
                                        (struct CDrawingContext *)a2,
                                        (const struct CMILMatrix *)(a2 + 96),
                                        v27);
  v18 = CurrentLightBufferForContextNoRef;
  if ( CurrentLightBufferForContextNoRef >= 0 )
  {
    v19 = (unsigned int)BlendMode::FromMilCompositingMode(*(_DWORD *)(a2 + 340));
    CCpuClipAntialiasSinkContext::AddDrawList(*(_QWORD *)(*(_QWORD *)(a2 + 904) - 16LL), a1, v21, v19, v27[0], v20);
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, CurrentLightBufferForContextNoRef, 0x3DEu, 0LL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x43,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasdrawlistentry.cpp",
    (const char *)v18,
    v26);
  return v18;
}
