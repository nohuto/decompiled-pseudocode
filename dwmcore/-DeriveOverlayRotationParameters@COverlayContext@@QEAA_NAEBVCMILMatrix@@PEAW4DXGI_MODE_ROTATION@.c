char __fastcall COverlayContext::DeriveOverlayRotationParameters(
        COverlayContext *this,
        const struct CMILMatrix *a2,
        enum DXGI_MODE_ROTATION *a3,
        unsigned int *a4,
        bool *a5)
{
  int v5; // r12d
  bool v6; // di
  unsigned int v7; // ebx
  enum DXGI_MODE_ROTATION v9; // r15d
  char v10; // r14
  float v11; // xmm2_4
  unsigned int v12; // eax
  int v13; // xmm0_4
  int v14; // xmm1_4
  int v15; // xmm0_4
  __int128 v16; // xmm1
  int v17; // xmm0_4
  __int128 v18; // xmm1
  int v19; // xmm0_4
  int v20; // xmm0_4
  float v21; // xmm2_4
  unsigned int v22; // eax
  int v24; // [rsp+20h] [rbp-60h]
  _DWORD v25[6]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v26; // [rsp+48h] [rbp-38h]
  __int128 v27; // [rsp+58h] [rbp-28h]
  int v28; // [rsp+68h] [rbp-18h]
  int v29; // [rsp+6Ch] [rbp-14h]
  int v30; // [rsp+70h] [rbp-10h]

  v5 = *((_DWORD *)this + 14);
  v6 = 1;
  v7 = 0;
  v24 = v5 & 6;
  v9 = DXGI_MODE_ROTATION_IDENTITY;
  v10 = 0;
  if ( CMILMatrix::IsTranslateAndScale<1>((__int64)a2) )
  {
    v11 = *(float *)a2;
    if ( *(float *)a2 >= 0.0 && *((float *)a2 + 5) >= 0.0 )
    {
      v10 = 1;
LABEL_32:
      *a3 = v9;
      *a5 = v6;
      *a4 = v7;
      return v10;
    }
    if ( v24 == 6 )
    {
      v10 = 1;
      if ( v11 < 0.0 )
        v7 = 2;
      v12 = v7;
      v7 |= 1u;
      if ( *((float *)a2 + 5) >= 0.0 )
        v7 = v12;
      goto LABEL_32;
    }
    if ( (v5 & 0x8001) != 0
      && v11 < 0.0
      && *((float *)a2 + 5) < 0.0
      && !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, a2) )
    {
      v9 = DXGI_MODE_ROTATION_ROTATE180;
LABEL_31:
      v10 = 1;
      v6 = (v5 & 1) != 0;
      goto LABEL_32;
    }
  }
  else if ( (v5 & 0x8001) != 0 )
  {
    v13 = *((_DWORD *)a2 + 1);
    v25[1] = *(_DWORD *)a2;
    v14 = *((_DWORD *)a2 + 3);
    v25[0] = v13;
    v15 = *((_DWORD *)a2 + 2);
    v25[3] = v14;
    v16 = *(_OWORD *)((char *)a2 + 24);
    v30 = 0;
    v25[2] = v15;
    v17 = *((_DWORD *)a2 + 5);
    v26 = v16;
    v18 = *(_OWORD *)((char *)a2 + 40);
    v25[4] = v17;
    v19 = *((_DWORD *)a2 + 4);
    v27 = v18;
    LODWORD(v18) = *((_DWORD *)a2 + 14);
    v25[5] = v19;
    v20 = *((_DWORD *)a2 + 15);
    v28 = v18;
    v29 = v20;
    if ( CMILMatrix::IsTranslateAndScale<1>((__int64)v25)
      && !COverlayContext::IsQualcommRotationWorkaroundNeeded(this, (const struct CMILMatrix *)v25) )
    {
      v21 = *((float *)a2 + 4);
      if ( v24 == 6 )
      {
        v9 = DXGI_MODE_ROTATION_ROTATE90;
        if ( v21 > 0.0 )
          v7 = 2;
        v22 = v7;
        v7 |= 1u;
        if ( *((float *)a2 + 1) >= 0.0 )
          v7 = v22;
        goto LABEL_31;
      }
      if ( v21 > 0.0 && *((float *)a2 + 1) < 0.0 )
      {
        v9 = DXGI_MODE_ROTATION_ROTATE270;
        goto LABEL_31;
      }
      if ( v21 < 0.0 && *((float *)a2 + 1) > 0.0 )
      {
        v9 = DXGI_MODE_ROTATION_ROTATE90;
        goto LABEL_31;
      }
    }
  }
  return v10;
}
