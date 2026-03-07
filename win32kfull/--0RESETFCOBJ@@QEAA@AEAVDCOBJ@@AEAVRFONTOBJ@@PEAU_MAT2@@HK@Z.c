RESETFCOBJ *__fastcall RESETFCOBJ::RESETFCOBJ(
        RESETFCOBJ *this,
        struct DCOBJ *a2,
        struct RFONTOBJ *a3,
        struct _MAT2 *a4,
        int a5,
        unsigned int a6)
{
  int v6; // eax
  struct _POINTL v11; // rbx
  float eM11; // xmm4_4
  float eM22; // xmm3_4
  float eM12; // xmm2_4
  float eM21; // xmm1_4
  __int64 v17; // rax
  FLOATL eXY; // xmm1_4
  FLOATL eYY; // xmm3_4
  FLOATL eYX; // xmm2_4
  unsigned int v21; // [rsp+28h] [rbp-D8h]
  struct _POINTL v22; // [rsp+50h] [rbp-B0h] BYREF
  struct MATRIX *v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct MATRIX *v24[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v25[16]; // [rsp+78h] [rbp-88h] BYREF
  PFEOBJ *v26; // [rsp+88h] [rbp-78h] BYREF
  struct _FD_XFORM v27; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v28[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v29; // [rsp+C8h] [rbp-38h]
  _OWORD v30[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v31; // [rsp+F0h] [rbp-10h]
  _OWORD v32[2]; // [rsp+F8h] [rbp-8h] BYREF
  int v33; // [rsp+118h] [rbp+18h]

  v6 = 1;
  *((_QWORD *)this + 1) = a3;
  *(_DWORD *)this = 1;
  if ( *(_DWORD *)&a4->eM11 != 0x10000
    || a4->eM22.value != 1
    || a4->eM22.fract
    || a4->eM12.value
    || a4->eM12.fract
    || a4->eM21.value
    || a4->eM21.fract )
  {
    v6 = 0;
  }
  *((_DWORD *)this + 1) = v6;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v22, *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 296LL), 0LL);
  v11 = v22;
  if ( !*(_QWORD *)&v22 )
  {
    *(_DWORD *)this = 0;
    return this;
  }
  if ( (*(_DWORD *)(*(_QWORD *)&v22 + 284LL) || *(_DWORD *)(*(_QWORD *)&v22 + 288LL)) && a5 )
    *((_DWORD *)this + 1) = 0;
  if ( !*((_DWORD *)this + 1) )
  {
    v29 = 0;
    memset(v28, 0, sizeof(v28));
    EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v24, (struct MATRIX *)v28, 0x20u);
    eM11 = (float)(int)a4->eM11;
    *(float *)&v22.x = eM11;
    if ( eM11 != 0.0 )
    {
      v22.x = (LODWORD(eM11) ^ (LODWORD(eM11) - 0x8000000)) & 0x7F800000 ^ LODWORD(eM11);
      eM11 = *(float *)&v22.x;
    }
    eM22 = (float)(int)a4->eM22;
    *(float *)&v22.x = eM22;
    if ( eM22 != 0.0 )
    {
      v22.x = (LODWORD(eM22) ^ (LODWORD(eM22) - 0x8000000)) & 0x7F800000 ^ LODWORD(eM22);
      eM22 = *(float *)&v22.x;
    }
    eM12 = (float)(int)a4->eM12;
    *(float *)&v22.x = eM12;
    if ( eM12 != 0.0 )
    {
      v22.x = (LODWORD(eM12) ^ (LODWORD(eM12) - 0x8000000)) & 0x7F800000 ^ LODWORD(eM12);
      eM12 = *(float *)&v22.x;
    }
    eM21 = (float)(int)a4->eM21;
    *(float *)&v22.x = eM21;
    if ( eM21 != 0.0 )
    {
      v22.x = (LODWORD(eM21) ^ (LODWORD(eM21) - 0x8000000)) & 0x7F800000 ^ LODWORD(eM21);
      eM21 = *(float *)&v22.x;
    }
    *(float *)v24[0] = eM11;
    *((_DWORD *)v24[0] + 1) = LODWORD(eM12) ^ _xmm;
    *((_DWORD *)v24[0] + 2) = LODWORD(eM21) ^ _xmm;
    *((float *)v24[0] + 3) = eM22;
    EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)v24);
    v31 = 0;
    memset(v30, 0, sizeof(v30));
    EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v23, (struct MATRIX *)v30, 8u);
    v33 = 0;
    memset(v32, 0, sizeof(v32));
    EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v25, (struct MATRIX *)v32, 8u);
    v27 = 0LL;
    if ( a5 )
    {
      v17 = *(_QWORD *)a3;
      v22 = 0LL;
      v26 = *(PFEOBJ **)(*(_QWORD *)(v17 + 120) + 32LL);
      if ( !(unsigned int)PFEOBJ::bSetFontXform(
                            v26,
                            a2,
                            (struct tagLOGFONTW *)(*(_QWORD *)&v11 + 276LL),
                            &v27,
                            1u,
                            v21,
                            &v22,
                            (struct IFIOBJ *)&v26,
                            0) )
      {
LABEL_29:
        *(_DWORD *)this = 0;
        goto LABEL_12;
      }
      EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)v23);
      eXY = v27.eXY;
      eYY = v27.eYY;
      eYX = v27.eYX;
      *(FLOATL *)v23[0] = v27.eXX;
      *((FLOATL *)v23[0] + 1) = eXY;
      *((FLOATL *)v23[0] + 2) = eYX;
      *((FLOATL *)v23[0] + 3) = eYY;
      *(float *)v23[0] = *(float *)v23[0] * 16.0;
      *((float *)v23[0] + 1) = *((float *)v23[0] + 1) * 16.0;
      *((float *)v23[0] + 2) = *((float *)v23[0] + 2) * 16.0;
      *((float *)v23[0] + 3) = *((float *)v23[0] + 3) * 16.0;
      EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)v23, 8u);
    }
    else
    {
      RFONTOBJ::vSetNotionalToDevice(a3, (struct EXFORMOBJ *)v23);
    }
    if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)v25, v23[0], v24[0], 8u) )
    {
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v25, &v27);
      *(_DWORD *)this = RFONTOBJ::bSetNewFDX(a3, a2, &v27, a6);
      goto LABEL_12;
    }
    goto LABEL_29;
  }
LABEL_12:
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)&v11);
  return this;
}
