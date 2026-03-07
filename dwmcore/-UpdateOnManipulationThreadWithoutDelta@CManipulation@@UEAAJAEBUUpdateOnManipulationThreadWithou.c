__int64 __fastcall CManipulation::UpdateOnManipulationThreadWithoutDelta(
        CManipulation *this,
        const struct UpdateOnManipulationThreadWithoutDeltaArgs *a2)
{
  unsigned int v2; // ebx
  unsigned int *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  CManipulation *v7; // r11
  char v8; // dl
  char v9; // dl
  int v10; // eax
  __int64 v11; // rcx

  v2 = 0;
  CManipulation::_UpdateCaptureState((CManipulation *)((char *)this - 72), (*((_BYTE *)a2 + 16) & 4) != 0);
  CManipulation::_ResetManipulationThreadDataIfNecessary(v4, *v3);
  *(_QWORD *)(v5 + 20) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(v5 + 28) = 0;
  *(_QWORD *)(v5 + 44) = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  *(_DWORD *)(v5 + 52) = 1065353216;
  if ( __PAIR64__(*(_DWORD *)(v5 + 176), *(_DWORD *)(v5 + 164)) != *(_QWORD *)v6
    || *(_DWORD *)(v5 + 180) != *(_DWORD *)(v6 + 8)
    || *(_DWORD *)(v5 + 184) != *(_DWORD *)(v6 + 12)
    || ((*(_BYTE *)(v6 + 16) ^ *(_BYTE *)(v5 + 188)) & 1) != 0
    || ((*(_BYTE *)(v6 + 16) ^ *(_BYTE *)(v5 + 188)) & 2) != 0 )
  {
    *(_DWORD *)(v5 + 160) = 0;
    v8 = *(_BYTE *)(v5 + 188);
    *(_QWORD *)(v5 + 136) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v5 + 144) = 0;
    *(_QWORD *)(v5 + 148) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v5 + 156) = 0;
    *(_DWORD *)(v5 + 164) = *(_DWORD *)v6;
    *(_DWORD *)(v5 + 176) = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v5 + 180) = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v5 + 184) = *(_DWORD *)(v6 + 12);
    v9 = *(_BYTE *)(v5 + 188) ^ (*(_BYTE *)(v6 + 16) ^ v8) & 1;
    *(_BYTE *)(v5 + 188) = v9;
    *(_BYTE *)(v5 + 188) = v9 ^ (*(_BYTE *)(v6 + 16) ^ v9) & 2;
    v10 = CManipulation::_SendUpdateToRenderThread(v7, 0, 0LL, 0LL);
    v2 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xAAu, 0LL);
  }
  return v2;
}
