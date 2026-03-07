__int64 __fastcall CCompositionLight::CalcLocalToDeviceMatrix(
        CCompositionLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CVisual *a4,
        struct CMILMatrix *a5,
        struct CMILMatrix *a6)
{
  const struct CVisualTree *v6; // rdx
  int WorldTransform; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  __int64 v12; // rdx
  int v13; // r8d
  __int128 v15; // [rsp+30h] [rbp-59h] BYREF
  __int128 v16; // [rsp+40h] [rbp-49h]
  __int128 v17; // [rsp+50h] [rbp-39h]
  __int128 v18; // [rsp+60h] [rbp-29h]
  unsigned int v19; // [rsp+70h] [rbp-19h]
  _OWORD v20[4]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v21; // [rsp+C0h] [rbp+37h]

  v6 = (const struct CVisualTree *)*((_QWORD *)a2 + 1007);
  v21 = 0;
  WorldTransform = CVisual::GetWorldTransform(a4, v6, 3, (struct CMILMatrix *)v20, 0LL, 0LL);
  v10 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, WorldTransform, 0xC1u, 0LL);
  }
  else
  {
    v15 = v20[0];
    v19 = v21;
    v16 = v20[1];
    v17 = v20[2];
    v18 = v20[3];
    CMILMatrix::Multiply((CMILMatrix *)&v15, a3);
    v11 = (struct Windows::Foundation::Numerics::float4x4 *)v19;
    *(_OWORD *)a5 = v15;
    *((_OWORD *)a5 + 1) = v16;
    *((_OWORD *)a5 + 2) = v17;
    *((_OWORD *)a5 + 3) = v18;
    *((_DWORD *)a5 + 16) = (_DWORD)v11;
    CMILMatrix::Invert(a5, v12, v11);
    *(_OWORD *)a6 = v15;
    *((_OWORD *)a6 + 1) = v16;
    *((_OWORD *)a6 + 2) = v17;
    *((_OWORD *)a6 + 3) = v18;
    *((_DWORD *)a6 + 16) = v13;
  }
  return v10;
}
