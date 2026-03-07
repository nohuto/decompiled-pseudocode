__int64 __fastcall CInteractionTrackerBindingManager::CalculateBoundTrackerInertiaCallbackValues(
        __int64 a1,
        __int64 a2,
        CInteractionTracker *a3,
        float *a4,
        char a5)
{
  CInteractionTracker *v8; // rcx
  __int64 v9; // r8
  __m128 *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __m128 v13; // xmm6
  float v14; // xmm9_4
  float v15; // xmm8_4
  float v16; // xmm6_4
  float v17; // xmm10_4
  __m128 v18; // xmm7
  float v19; // xmm2_4
  int v20; // xmm0_4
  int v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm8_4
  float v26; // xmm7_4
  __int64 result; // rax
  __m128 v28; // [rsp+28h] [rbp-A1h]
  unsigned __int64 v29; // [rsp+58h] [rbp-71h]
  _OWORD v30[3]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v31; // [rsp+90h] [rbp-39h]

  if ( CInteractionTracker::AreInteractionAnimationsAlive(a3) || CInteractionTracker::HasDefaultAnimations(v8) )
  {
    v10 = (__m128 *)CInteractionTracker::CalculateInertiaCallbackValues((__int64)a3, (__int64)v30);
  }
  else
  {
    v10 = (__m128 *)v30;
    v11 = *(_OWORD *)(v9 + 596);
    v30[0] = *(_OWORD *)(v9 + 580);
    v12 = *(_OWORD *)(v9 + 612);
    v30[1] = v11;
    *(_QWORD *)&v11 = *(_QWORD *)(v9 + 628);
    v30[2] = v12;
    v31 = v11;
  }
  v18 = v10[2];
  v13 = v10[1];
  v28 = *v10;
  v29 = v10[3].m128_u64[0];
  v14 = v13.m128_f32[0] - CInteractionTracker::GetCurrentValue((__int64)a3, 0);
  v15 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0] - CInteractionTracker::GetCurrentValue((__int64)a3, 1);
  v16 = _mm_shuffle_ps(v13, v13, 255).m128_f32[0] / CInteractionTracker::GetCurrentValue((__int64)a3, 2);
  v17 = v18.m128_f32[0] - CInteractionTracker::GetCurrentValue((__int64)a3, 0);
  v18.m128_f32[0] = _mm_shuffle_ps(v18, v18, 85).m128_f32[0] - CInteractionTracker::GetCurrentValue((__int64)a3, 1);
  v19 = *(float *)&v29 / CInteractionTracker::GetCurrentValue((__int64)a3, 2);
  v20 = *((_DWORD *)a4 + 21);
  *(float *)(a2 + 16) = a4[20];
  *(_DWORD *)(a2 + 20) = v20;
  *(_DWORD *)(a2 + 24) = 0;
  *(float *)(a2 + 28) = a4[34];
  v21 = *((_DWORD *)a4 + 21);
  *(float *)(a2 + 32) = a4[20];
  *(_DWORD *)(a2 + 36) = v21;
  *(_DWORD *)(a2 + 40) = 0;
  v22 = a4[34];
  *(float *)(a2 + 48) = v22;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (a5 & 1) != 0 )
  {
    v23 = v14 + *(float *)(a2 + 16);
    v24 = v17 + *(float *)(a2 + 32);
    *(_DWORD *)a2 = v28.m128_i32[0];
    *(float *)(a2 + 16) = v23;
    *(float *)(a2 + 32) = v24;
  }
  if ( (a5 & 2) != 0 )
  {
    v25 = v15 + *(float *)(a2 + 20);
    v26 = v18.m128_f32[0] + *(float *)(a2 + 36);
    *(_DWORD *)(a2 + 4) = v28.m128_i32[1];
    *(float *)(a2 + 20) = v25;
    *(float *)(a2 + 36) = v26;
  }
  if ( (a5 & 4) != 0 )
  {
    *(float *)(a2 + 28) = v16 * *(float *)(a2 + 28);
    *(_DWORD *)(a2 + 12) = v28.m128_i32[3];
    *(float *)(a2 + 48) = v22 * v19;
  }
  result = a2;
  *(_BYTE *)(a2 + 44) = v18.m128_i8[12];
  *(_WORD *)(a2 + 52) = WORD2(v29);
  *(_BYTE *)(a2 + 54) = 1;
  return result;
}
