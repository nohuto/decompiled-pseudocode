__int64 __fastcall CNaturalAnimation::SetScalarProperty(CNaturalAnimation *this, int a2, float a3)
{
  unsigned int v3; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  float *v12; // rbx
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4

  v3 = 0;
  v6 = a2 - 39;
  if ( !v6 )
  {
    *((_BYTE *)this + 588) |= 0x20u;
    *((float *)this + 90) = a3;
    return v3;
  }
  v7 = v6 - 4;
  if ( !v7 )
  {
    *((_BYTE *)this + 588) |= 0x10u;
    *((float *)this + 84) = a3;
    return v3;
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    *((float *)this + 93) = a3;
    return v3;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
    v12 = (float *)*((_QWORD *)this + 56);
    if ( v12 )
      (**(void (__fastcall ***)(float *))v12)(v12);
    v16 = v12[8];
    v12[8] = v16;
    v12[7] = a3;
    v14 = v16 * v16;
    v15 = (float)(a3 + a3) * v16;
    goto LABEL_18;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
    v12 = (float *)*((_QWORD *)this + 56);
    if ( v12 )
      (**(void (__fastcall ***)(float *))v12)(v12);
    v13 = v12[7];
    v12[7] = v13;
    v12[8] = 1.0 / a3;
    v14 = (float)(1.0 / a3) * (float)(1.0 / a3);
    v15 = (float)(v13 + v13) * (float)(1.0 / a3);
LABEL_18:
    v12[6] = v15;
    v12[5] = v14;
LABEL_19:
    (*(void (__fastcall **)(float *))(*(_QWORD *)v12 + 8LL))(v12);
    return v3;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 1);
    v12 = (float *)*((_QWORD *)this + 56);
    if ( v12 )
      (**(void (__fastcall ***)(float *))v12)(v12);
    v12[5] = a3;
    v12[6] = a3 / 0.0099999998;
    goto LABEL_19;
  }
  if ( v11 == 1 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 1);
    v12 = (float *)*((_QWORD *)this + 56);
    if ( v12 )
      (**(void (__fastcall ***)(float *))v12)(v12);
    *((_DWORD *)v12 + 7) = LODWORD(a3) & _xmm;
    v12[8] = (float)((float)(COERCE_FLOAT(LODWORD(a3) & _xmm) + 1.0) * -1.0) / 0.0099999998;
    goto LABEL_19;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x402u, 0LL);
  return v3;
}
