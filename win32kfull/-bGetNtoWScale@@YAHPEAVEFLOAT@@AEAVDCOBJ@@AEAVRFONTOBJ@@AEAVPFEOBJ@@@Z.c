__int64 __fastcall bGetNtoWScale(struct EFLOAT *a1, struct DCOBJ *a2, struct RFONTOBJ *a3, struct PFEOBJ *a4)
{
  int v8; // xmm0_4
  int v9; // xmm2_4
  int v10; // xmm1_4
  float x; // xmm0_4
  int v12; // r9d
  __int64 result; // rax
  float v14; // [rsp+28h] [rbp-79h] BYREF
  float v15; // [rsp+2Ch] [rbp-75h]
  float v16; // [rsp+30h] [rbp-71h] BYREF
  struct MATRIX *v17[2]; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v18[8]; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-41h] BYREF
  struct MATRIX *v21; // [rsp+70h] [rbp-31h] BYREF
  _OWORD v22[2]; // [rsp+80h] [rbp-21h] BYREF
  int v23; // [rsp+A0h] [rbp-1h]
  _OWORD v24[2]; // [rsp+A8h] [rbp+7h] BYREF
  int v25; // [rsp+C8h] [rbp+27h]

  v23 = 0;
  v25 = 0;
  memset(v22, 0, sizeof(v22));
  memset(v24, 0, sizeof(v24));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v19, (struct MATRIX *)v22, 0);
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v17, (struct MATRIX *)v24, 0);
  v8 = *(_DWORD *)(*(_QWORD *)a3 + 140LL);
  v9 = *(_DWORD *)(*(_QWORD *)a3 + 136LL);
  v10 = *(_DWORD *)(*(_QWORD *)a3 + 144LL);
  *(_DWORD *)v17[0] = v9;
  *((_DWORD *)v17[0] + 1) = v8;
  *((_DWORD *)v17[0] + 2) = v10;
  *((_DWORD *)v17[0] + 3) = v9;
  *(float *)v17[0] = *(float *)v17[0] * 16.0;
  *((float *)v17[0] + 1) = *((float *)v17[0] + 1) * 16.0;
  *((float *)v17[0] + 2) = *((float *)v17[0] + 2) * 16.0;
  *((float *)v17[0] + 3) = *((float *)v17[0] + 3) * 16.0;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)v17);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)v17, 8u);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v21, a2, 1026);
  if ( !v21 )
    return 0LL;
  if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)v19, v17[0], v21, 0) )
    return 0LL;
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)v19, 8u);
  v20[0] = *(_QWORD *)(*(_QWORD *)a4 + 32LL);
  IFIOBJ::pptlBaseline((IFIOBJ *)v20);
  x = (float)IFIOBJ::pptlBaseline((IFIOBJ *)v20)->x;
  v16 = 0.0;
  v15 = (float)v12;
  v14 = x;
  EFLOAT::eqLength(&v16, v18, &v14);
  v14 = v14 / v16;
  v15 = v15 / v16;
  if ( (*(_DWORD *)(v19[0] + 32LL) & 2) == 0
    && !EXFORMOBJ::bXform((EXFORMOBJ *)v19, (struct VECTORFL *)&v14, (struct VECTORFL *)&v14, 1uLL) )
  {
    return 0LL;
  }
  EFLOAT::eqLength(a1, v18, &v14);
  result = 1LL;
  *(float *)a1 = *(float *)a1 * 16.0;
  return result;
}
