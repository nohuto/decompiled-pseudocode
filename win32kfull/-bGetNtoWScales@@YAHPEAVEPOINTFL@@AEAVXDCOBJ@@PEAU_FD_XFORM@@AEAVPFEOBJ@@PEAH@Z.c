__int64 __fastcall bGetNtoWScales(
        struct EPOINTFL *a1,
        struct XDCOBJ *a2,
        struct _FD_XFORM *a3,
        struct PFEOBJ *a4,
        int *a5)
{
  float eYY; // xmm3_4
  float eYX; // xmm2_4
  float eXY; // xmm1_4
  __int64 v11; // rax
  float *v12; // rdx
  __int64 v14; // r9
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // [rsp+28h] [rbp-51h] BYREF
  float v18; // [rsp+2Ch] [rbp-4Dh]
  float v19; // [rsp+30h] [rbp-49h] BYREF
  float v20; // [rsp+34h] [rbp-45h]
  float *v21; // [rsp+38h] [rbp-41h] BYREF
  int v22; // [rsp+44h] [rbp-35h]
  _BYTE v23[8]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v25; // [rsp+60h] [rbp-19h] BYREF
  float v26[4]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v27; // [rsp+80h] [rbp+7h]
  int v28; // [rsp+90h] [rbp+17h]

  eYY = a3->eYY;
  eYX = a3->eYX;
  eXY = a3->eXY;
  v28 = 0;
  v22 = 0;
  v27 = 0LL;
  v21 = v26;
  v26[0] = a3->eXX * 16.0;
  v26[1] = eXY * 16.0;
  v26[2] = eYX * 16.0;
  v26[3] = eYY * 16.0;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v21);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v21, 8u);
  v25 = *(_QWORD *)(*(_QWORD *)a4 + 32LL);
  v11 = (__int64)*IFIOBJ::pptlBaseline((IFIOBJ *)&v25);
  v17 = (float)(int)v11;
  v18 = (float)SHIDWORD(v11);
  if ( (*(_DWORD *)(v25 + 48) & 0x80000) != 0 )
  {
    v20 = (float)(int)v11;
    v19 = (float)-HIDWORD(v11);
  }
  else
  {
    v19 = (float)SHIDWORD(v11);
    v20 = (float)-(int)v11;
  }
  v12 = v21;
  if ( ((_DWORD)v21[8] & 2) == 0 )
  {
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v21, (struct VECTORFL *)&v17, (struct VECTORFL *)&v17, 1uLL) )
      return 0LL;
    v12 = v21;
  }
  if ( ((_DWORD)v12[8] & 2) == 0 )
  {
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v21, (struct VECTORFL *)&v19, (struct VECTORFL *)&v19, 1uLL) )
      return 0LL;
    v12 = v21;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    *a5 = (_DWORD)v12[8] & 2;
LABEL_11:
    EFLOAT::eqLength(a1, v23, &v17);
    EFLOAT::eqLength((char *)a1 + 4, v23, &v19);
    return 1LL;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v24, a2, 1026);
  v14 = v24[0];
  if ( v24[0] )
  {
    *a5 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1
      && !(unsigned int)DC::bUseMetaPtoD(*(DC **)a2)
      && (*(_DWORD *)(v25 + 48) & 4) == 0 )
    {
      v15 = v17 * *(float *)v14;
      v18 = v18 * *(float *)v14;
      v17 = v15;
      v16 = *(float *)(v14 + 12);
      v18 = v18 * 16.0;
      v20 = (float)(v20 * v16) * 16.0;
      v17 = v15 * 16.0;
      v19 = (float)(v16 * v19) * 16.0;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v14 + 32) & 2) == 0 )
    {
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v24, (struct VECTORFL *)&v17, (struct VECTORFL *)&v17, 1uLL) )
        return 0LL;
      v14 = v24[0];
    }
    if ( (*(_DWORD *)(v14 + 32) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)v24, (struct VECTORFL *)&v19, (struct VECTORFL *)&v19, 1uLL) )
    {
      goto LABEL_11;
    }
  }
  return 0LL;
}
