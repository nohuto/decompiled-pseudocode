__int64 __fastcall GetMonitorTransform(__int64 a1, const struct tagWND *a2, __int64 a3)
{
  unsigned __int16 v6; // bp
  __int64 v7; // rax
  __int64 v8; // rax
  __m128i v9; // xmm6
  INT v10; // ebx
  INT v11; // esi
  INT v12; // edi
  INT v13; // ebx
  int v14; // r12d
  bool v15; // al
  int v16; // edx
  __int64 v17; // rax
  __int64 result; // rax
  int v19; // ecx
  float v20; // xmm0_4
  INT v21; // [rsp+24h] [rbp-54h]
  int v22; // [rsp+80h] [rbp+8h]

  v6 = (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF;
  if ( !a1 )
    return 0LL;
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 456LL);
  if ( !v7 || (*(_DWORD *)(**(_QWORD **)(v7 + 8) + 64LL) & 1) == 0 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(__m128i *)(v8 + 28);
  v10 = *(unsigned __int16 *)(v8 + 62);
  v11 = *(unsigned __int16 *)(v8 + 60);
  v12 = EngMulDiv(_mm_cvtsi128_si32(v9), (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF, v10);
  v21 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
  v13 = EngMulDiv(v21, v6, v10);
  v14 = v12 + EngMulDiv(0, v6, v11);
  v22 = v13 + EngMulDiv(0, v6, v11);
  EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) - _mm_cvtsi128_si32(v9), v6, v11);
  EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - v21, v6, v11);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 40) + 60LL) == v6 )
  {
    v15 = IsChildWindowDpiBoundary(a2);
    v16 = v22;
    if ( !v15 )
    {
      v17 = *(_QWORD *)(a1 + 40);
      if ( *(_DWORD *)(v17 + 28) == v14 && *(_DWORD *)(v17 + 32) == v22 )
        return 0LL;
    }
  }
  else
  {
    v16 = v22;
  }
  v19 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 60LL);
  *(_DWORD *)(a3 + 40) = 1065353216;
  *(_DWORD *)(a3 + 60) = 1065353216;
  v20 = (float)v19 / (float)v6;
  *(float *)a3 = v20;
  *(float *)(a3 + 20) = v20;
  result = 1LL;
  *(float *)(a3 + 48) = (float)*(int *)(*(_QWORD *)(a1 + 40) + 28LL)
                      - (float)((float)((float)*(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 60LL) * (float)v14)
                              / (float)v6);
  *(float *)(a3 + 52) = (float)*(int *)(*(_QWORD *)(a1 + 40) + 32LL)
                      - (float)((float)((float)*(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 60LL) * (float)v16)
                              / (float)v6);
  return result;
}
