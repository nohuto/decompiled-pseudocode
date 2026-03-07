__int64 __fastcall CScalarForceEvaluator::CorrectOvershootIfNecessary(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  int v5; // edi
  char v9; // cl
  float (__fastcall *v10)(__int64); // rax
  float v11; // xmm0_4
  float v12; // xmm6_4
  double v13; // xmm0_8
  int v14; // eax
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int128 v19; // [rsp+20h] [rbp-38h]

  v5 = 0;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *a5 = 0;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a3 + 16);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a4 + 48LL))(a4) )
  {
    v9 = *(_BYTE *)(a1 + 64) & 0xFB;
    *(_BYTE *)(a1 + 64) = v9;
    v10 = *(float (__fastcall **)(__int64))(*(_QWORD *)a4 + 24LL);
    if ( (v9 & 1) != 0 )
    {
      v11 = v10(a4) - *(float *)(a1 + 16);
      LOBYTE(v5) = v11 < 0.0;
      if ( *(float *)(a1 + 52) != (float)((v11 > 0.0) - v5) )
      {
        v12 = *(float *)(a1 + 36);
        v13 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a4 + 24LL))(a4);
        v14 = *(_DWORD *)(a1 + 28);
        v15 = (float)(*(float *)&v13 - v12) / (float)(*(float *)(a1 + 16) - v12);
        v19 = *(_OWORD *)(a1 + 12);
        *((float *)&v19 + 2) = (float)((float)(1.0 - v15) * *(float *)(a1 + 40)) + (float)(v15 * *(float *)(a1 + 20));
        *((float *)&v19 + 1) = (float)(v15 * *(float *)(a1 + 16)) + (float)((float)(1.0 - v15) * v12);
        *(_OWORD *)a2 = v19;
        *(_DWORD *)(a2 + 16) = v14;
        *(_BYTE *)(a1 + 64) = *(_BYTE *)(a1 + 64) & 0xFA | 4;
      }
    }
    else
    {
      v16 = v10(a4) - *(float *)(a1 + 16);
      LOBYTE(v5) = v16 < 0.0;
      *(_BYTE *)(a1 + 64) &= ~1u;
      v17 = (float)((v16 > 0.0) - v5);
      *(float *)(a1 + 52) = v17;
      *(_BYTE *)(a1 + 64) |= COERCE_FLOAT(LODWORD(v17) & _xmm) >= 0.0000011920929;
    }
  }
  return a2;
}
