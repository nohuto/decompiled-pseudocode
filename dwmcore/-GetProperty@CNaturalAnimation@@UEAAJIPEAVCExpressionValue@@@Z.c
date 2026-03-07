__int64 __fastcall CNaturalAnimation::GetProperty(CNaturalAnimation *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // esi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // xmm0_4
  float *v14; // rbx
  float v15; // xmm0_4
  __int64 v16; // xmm0_8
  int v17; // eax
  float v18; // xmm0_4
  __int64 v20; // [rsp+30h] [rbp-18h] BYREF
  int v21; // [rsp+38h] [rbp-10h]

  v3 = 0;
  v6 = a2 - 16;
  if ( !v6 )
  {
    v18 = (float)*((int *)this + 104);
    *((_DWORD *)a3 + 18) = 42;
    *((_BYTE *)a3 + 76) = 1;
    *(float *)a3 = v18;
    return v3;
  }
  v7 = v6 - 23;
  if ( !v7 )
  {
    v16 = *((_QWORD *)this + 45);
    v17 = *((_DWORD *)this + 92);
    goto LABEL_21;
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    v16 = *((_QWORD *)this + 42);
    v17 = *((_DWORD *)this + 86);
    goto LABEL_21;
  }
  v9 = v8 - 4;
  if ( !v9 )
  {
    v16 = *(_QWORD *)((char *)this + 372);
    v17 = *((_DWORD *)this + 95);
LABEL_21:
    v20 = v16;
    v21 = v17;
    CNaturalAnimation::ExpressionValueFromInternalValue((__int64)this, (unsigned int *)&v20, (__int64)a3);
    return v3;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
    v14 = (float *)*((_QWORD *)this + 56);
    if ( v14 )
      (**(void (__fastcall ***)(float *))v14)(v14);
    v15 = v14[7];
    goto LABEL_19;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
    v14 = (float *)*((_QWORD *)this + 56);
    if ( v14 )
      (**(void (__fastcall ***)(float *))v14)(v14);
    v15 = 1.0 / v14[8];
LABEL_19:
    *(float *)a3 = v15;
    *((_DWORD *)a3 + 18) = 18;
    *((_BYTE *)a3 + 76) = 1;
    (*(void (__fastcall **)(float *))(*(_QWORD *)v14 + 8LL))(v14);
    return v3;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 1);
    v13 = *(_DWORD *)(*((_QWORD *)this + 56) + 20LL);
    goto LABEL_12;
  }
  if ( v12 == 1 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 1);
    v13 = *(_DWORD *)(*((_QWORD *)this + 56) + 28LL);
LABEL_12:
    *(_DWORD *)a3 = v13;
    *((_DWORD *)a3 + 18) = 18;
    *((_BYTE *)a3 + 76) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x284u, 0LL);
  return v3;
}
