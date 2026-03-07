__int64 __fastcall CDebugFrameCounter::GetFrameRate(CDebugFrameCounter *this)
{
  int FrameCountInternal; // eax
  __int64 v2; // r10
  unsigned int v3; // r9d
  __int64 v4; // rcx
  unsigned int v5; // r11d
  int v6; // ebx
  float v7; // xmm0_4
  __int64 v8; // rax
  float v9; // xmm1_4
  __int64 result; // rax
  __m128 v11; // xmm2
  float v12; // xmm1_4
  __m128 v13; // xmm2
  float v14; // [rsp+30h] [rbp+8h]
  float v15; // [rsp+30h] [rbp+8h]

  FrameCountInternal = CDebugFrameCounter::GetFrameCountInternal(this);
  v3 = *(_DWORD *)(v2 + 4144);
  v4 = *(_QWORD *)(v2 + 4136);
  v5 = *(_DWORD *)(v2 + 4148) - v3;
  v6 = FrameCountInternal;
  if ( v3 > *(_DWORD *)(v2 + 4148) )
    v5 += 60;
  if ( v4 < 0 )
  {
    v8 = *(_QWORD *)(v2 + 4136) & 1LL | (*(_QWORD *)(v2 + 4136) >> 1);
    v7 = (float)(int)v8 + (float)(int)v8;
  }
  else
  {
    v7 = (float)(int)v4;
  }
  v9 = (float)(int)g_qpcFrequency.LowPart / v7;
  if ( COERCE_UNSIGNED_INT(fabs(v9)) > 0x497FFFF0 )
  {
    v11 = 0LL;
    v11.m128_f32[0] = (float)(int)v9 - v9;
    result = (int)v9 - _mm_cmple_ss(v11, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v14 = v9 + 6291456.25;
    result = (unsigned int)((int)(LODWORD(v14) << 10) >> 11);
  }
  if ( v5 )
  {
    v12 = (float)(v6 * result) / (float)(int)(v5 + v6);
    if ( COERCE_UNSIGNED_INT(fabs(v12)) > 0x497FFFF0 )
    {
      v13 = 0LL;
      v13.m128_f32[0] = (float)(int)v12 - v12;
      return (int)v12 - _mm_cmple_ss(v13, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v15 = v12 + 6291456.25;
      return (unsigned int)((int)(LODWORD(v15) << 10) >> 11);
    }
  }
  return result;
}
