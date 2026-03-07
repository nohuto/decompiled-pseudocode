__int64 __fastcall CNaturalAnimation::ProcessSetCommonParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS *a3)
{
  float v3; // xmm0_4
  int v4; // eax
  __m128 v5; // xmm2
  __m128 v6; // rt1
  char v7; // dl
  float v9; // [rsp+10h] [rbp+10h]

  *((_DWORD *)this + 102) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 103) = *((_DWORD *)a3 + 3);
  v3 = *((float *)a3 + 2) * 1000.0;
  if ( COERCE_UNSIGNED_INT(fabs(v3)) > 0x497FFFF0 )
  {
    v5 = 0LL;
    v5.m128_f32[0] = (float)(int)v3 - v3;
    v6.m128_f32[0] = FLOAT_N0_5;
    v4 = (int)v3 - _mm_cmple_ss(v5, v6).m128_u32[0];
  }
  else
  {
    v9 = v3 + 6291456.25;
    v4 = (int)(LODWORD(v9) << 10) >> 11;
  }
  *((_DWORD *)this + 104) = v4;
  if ( !*((_BYTE *)a3 + 32) )
  {
    v7 = *((_BYTE *)this + 588);
    if ( (v7 & 2) == 0 )
    {
      *((_QWORD *)this + 50) = *((_QWORD *)a3 + 3) - Time::s_luBegin.QuadPart;
      *((_BYTE *)this + 588) = v7 | 2;
    }
  }
  return 0LL;
}
