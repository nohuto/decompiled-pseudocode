__int64 __fastcall bIFIMetricsToLogFontW2(struct XDCOBJ *a1, struct tagENUMLOGFONTW *a2, struct _IFIMETRICS *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  float v7; // r8d
  float x; // xmm0_4
  int v10; // r9d
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // r9d
  __int64 v14; // rcx
  float v15; // [rsp+20h] [rbp-60h] BYREF
  LONG v16; // [rsp+24h] [rbp-5Ch] BYREF
  float v17; // [rsp+28h] [rbp-58h] BYREF
  float v18; // [rsp+2Ch] [rbp-54h]
  float v19[2]; // [rsp+30h] [rbp-50h] BYREF
  float v20; // [rsp+38h] [rbp-48h] BYREF
  float v21; // [rsp+3Ch] [rbp-44h]
  float v22[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v23[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-28h] BYREF
  float v25; // [rsp+A0h] [rbp+20h] BYREF

  v23[0] = a3;
  vIFIMetricsToEnumLogFontW(a2, a3);
  v6 = v23[0];
  if ( (*(_DWORD *)(v23[0] + 48LL) & 0x3000010) != 0 )
  {
    v25 = 0.0;
    bFToL(v5, &v25, 0LL);
    v7 = v25;
    v25 = 0.0;
    *(float *)&a2->elfLogFont.lfWidth = v7;
    bFToL((unsigned int)(*(__int16 *)(v6 + 60) + *(__int16 *)(v6 + 62)), &v25, 0LL);
    *(float *)&a2->elfLogFont.lfHeight = v25;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v24, a1, 0x402u);
  if ( v24[0] )
  {
    if ( (*(_DWORD *)(v24[0] + 32LL) & 2) != 0 )
      return 1LL;
    IFIOBJ::pptlBaseline((IFIOBJ *)v23);
    x = (float)IFIOBJ::pptlBaseline((IFIOBJ *)v23)->x;
    v18 = (float)v10;
    v17 = x;
    EFLOAT::eqLength(&v25, &v16, &v17);
    v19[0] = v17 / v25;
    v19[1] = v18 / v25;
    if ( (*(_DWORD *)(v24[0] + 32LL) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)v24, (struct VECTORFL *)v19, (struct VECTORFL *)v19, 1uLL) )
    {
      EFLOAT::eqLength(&v25, &v16, v19);
      v16 = 0;
      bFToL(v11, &v16, 0LL);
      a2->elfLogFont.lfWidth = v16;
      IFIOBJ::pptlBaseline((IFIOBJ *)v23);
      v12 = -IFIOBJ::pptlBaseline((IFIOBJ *)v23)->y;
      v21 = (float)v13;
      v20 = (float)v12;
      EFLOAT::eqLength(&v15, &v16, &v20);
      v22[0] = v20 / v15;
      v22[1] = v21 / v15;
      if ( (*(_DWORD *)(v24[0] + 32LL) & 2) != 0
        || EXFORMOBJ::bXform((EXFORMOBJ *)v24, (struct VECTORFL *)v22, (struct VECTORFL *)v22, 1uLL) )
      {
        EFLOAT::eqLength(&v15, &v16, v22);
        v25 = 0.0;
        bFToL(v14, &v25, 0LL);
        *(float *)&a2->elfLogFont.lfHeight = v25;
        return 1LL;
      }
    }
  }
  return 0LL;
}
