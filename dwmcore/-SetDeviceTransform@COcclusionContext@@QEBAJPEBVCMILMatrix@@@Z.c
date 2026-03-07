__int64 __fastcall COcclusionContext::SetDeviceTransform(COcclusionContext *this, const struct CMILMatrix *a2)
{
  unsigned int v2; // ebx
  const struct CMILMatrix *v3; // rsi
  unsigned int v5; // r14d
  char v6; // bp
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned int v12; // ecx
  float *v13; // rcx
  __int128 v14; // xmm0
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  int v18; // eax
  __int128 v19; // xmm1
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+40h] [rbp-48h]
  __int128 v22; // [rsp+50h] [rbp-38h]
  __int128 v23; // [rsp+60h] [rbp-28h]
  int v24; // [rsp+70h] [rbp-18h]

  v2 = 0;
  v3 = a2;
  v5 = 0;
  v6 = 0;
  if ( a2 && !CMILMatrix::IsIdentity<0>((__int64)a2) )
  {
    v8 = *(_OWORD *)v3;
    v9 = *((_OWORD *)v3 + 1);
    v24 = *((_DWORD *)v3 + 16);
    v20 = v8;
    v10 = *((_OWORD *)v3 + 2);
    v21 = v9;
    v11 = *((_OWORD *)v3 + 3);
    v22 = v10;
    v23 = v11;
    if ( CMILMatrix::Invert((CMILMatrix *)&v20) )
    {
      v13 = (float *)((char *)this + 1208);
      if ( !*((_BYTE *)this + 1204) || !CMILMatrix::IsEqualTo<0>(v13, (float *)v3) )
        v6 = 1;
      *(_OWORD *)v13 = *(_OWORD *)v3;
      *((_OWORD *)v13 + 1) = *((_OWORD *)v3 + 1);
      *((_OWORD *)v13 + 2) = *((_OWORD *)v3 + 2);
      v14 = v20;
      *((_OWORD *)v13 + 3) = *((_OWORD *)v3 + 3);
      v15 = *((_DWORD *)v3 + 16);
      v16 = v21;
      *(_OWORD *)((char *)this + 1276) = v14;
      *((_DWORD *)v13 + 16) = v15;
      v17 = v22;
      v18 = v24;
      *(_OWORD *)((char *)this + 1292) = v16;
      *((_BYTE *)this + 1204) = 1;
      v19 = v23;
      *(_OWORD *)((char *)this + 1308) = v17;
      *(_OWORD *)((char *)this + 1324) = v19;
      *((_DWORD *)this + 335) = v18;
    }
    else
    {
      v5 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003304441, 0x4Bu, 0LL);
    }
  }
  else
  {
    if ( *((_BYTE *)this + 1204) )
    {
      *((_BYTE *)this + 1204) = 0;
      v6 = 1;
    }
    v3 = 0LL;
    CMILMatrix::SetToIdentity((COcclusionContext *)((char *)this + 1208));
    CMILMatrix::SetToIdentity((COcclusionContext *)((char *)this + 1276));
  }
  if ( v6 && *((_DWORD *)this + 118) )
  {
    do
      CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)(*((_QWORD *)this + 56) + 36LL * v2++), v3);
    while ( v2 < *((_DWORD *)this + 118) );
  }
  return v5;
}
