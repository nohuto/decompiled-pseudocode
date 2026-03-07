__int64 __fastcall CVisual::CalcSrcToDestVisualTransform(
        gsl::details *a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  void *v7; // r8
  unsigned int v8; // ebx
  char v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  int WorldTransform; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  gsl::details *v15; // rcx
  int v16; // edx
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  __int64 v20; // rcx
  unsigned int v22; // [rsp+28h] [rbp-E0h]
  void *v23[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+48h] [rbp-C0h]
  __int128 v25; // [rsp+58h] [rbp-B0h]
  __int128 v26; // [rsp+68h] [rbp-A0h]
  int v27; // [rsp+78h] [rbp-90h]
  _OWORD v28[4]; // [rsp+88h] [rbp-80h] BYREF
  int v29; // [rsp+C8h] [rbp-40h]
  _BYTE v30[64]; // [rsp+D8h] [rbp-30h] BYREF
  int v31; // [rsp+118h] [rbp+10h]
  gsl::details *v32; // [rsp+158h] [rbp+50h]

  v32 = a1;
  v7 = 0LL;
  v8 = 0;
  v31 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( !*a3 )
    return v8;
  while ( 1 )
  {
    if ( v10 >= *a3 )
    {
LABEL_15:
      gsl::details::terminate(a1);
      JUMPOUT(0x180005D94LL);
    }
    v11 = *(_QWORD *)(a3[1] + 8 * v10);
    if ( v11 != a4 )
      break;
    if ( v10 >= *a5 )
      goto LABEL_15;
    CMILMatrix::SetToIdentity(*(CMILMatrix **)(a5[1] + 8 * v10));
LABEL_11:
    if ( ++v10 >= *a3 )
      return v8;
    a1 = v32;
  }
  if ( !v9 )
  {
    WorldTransform = CVisual::GetWorldTransform(a4, a1, 3LL, v30, v7, v7);
    v8 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      v22 = 1061;
      goto LABEL_21;
    }
    if ( !CMILMatrix::Invert((CMILMatrix *)v30) )
    {
      v8 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, (unsigned int)v7, -2003304441, 0x428u, v7);
      return v8;
    }
    a1 = v32;
    v9 = 1;
  }
  v29 = (int)v7;
  WorldTransform = CVisual::GetWorldTransform(v11, a1, 3LL, v28, v7, v7);
  v8 = WorldTransform;
  if ( WorldTransform >= 0 )
  {
    *(_OWORD *)v23 = v28[0];
    v27 = v29;
    v24 = v28[1];
    v25 = v28[2];
    v26 = v28[3];
    CMILMatrix::Multiply((CMILMatrix *)v23, (const struct CMILMatrix *)v30);
    v16 = v27;
    v17 = v24;
    v18 = v25;
    v19 = v26;
    if ( v10 >= *a5 )
    {
      gsl::details::terminate(v15);
      __debugbreak();
    }
    v7 = 0LL;
    v20 = *(_QWORD *)(a5[1] + 8 * v10);
    *(_OWORD *)v20 = *(_OWORD *)v23;
    *(_OWORD *)(v20 + 16) = v17;
    *(_OWORD *)(v20 + 32) = v18;
    *(_OWORD *)(v20 + 48) = v19;
    *(_DWORD *)(v20 + 64) = v16;
    goto LABEL_11;
  }
  v22 = 1074;
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, WorldTransform, v22, 0LL);
  return v8;
}
