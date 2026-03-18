/*
 * XREFs of ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C0017574
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C0108D18 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 * Callees:
 *     ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C00172E8 (-vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        struct _POINTL *const a5)
{
  unsigned int v5; // edi
  int v8; // ecx
  __int64 v9; // r8
  __m128 v10; // xmm0
  __int16 v12; // r15
  __int16 v13; // r13
  int v14; // r14d
  __int64 v15; // rcx
  int v16; // ecx
  __int64 lfOrientation; // rcx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  __int64 y; // rax
  __int64 v22; // rax
  FLOATL v23; // eax
  __int64 v24; // rax
  __int64 x; // rax
  __m128 *v27; // [rsp+28h] [rbp-69h] BYREF
  int v28; // [rsp+34h] [rbp-5Dh]
  float *v29; // [rsp+38h] [rbp-59h] BYREF
  __m128 v30; // [rsp+48h] [rbp-49h] BYREF
  int v31; // [rsp+68h] [rbp-29h]
  _OWORD v32[2]; // [rsp+70h] [rbp-21h] BYREF
  int v33; // [rsp+90h] [rbp-1h]

  v33 = 0;
  v5 = 0;
  v31 = 0;
  memset(v32, 0, sizeof(v32));
  memset(&v30, 0, 32);
  if ( !a5->x || (v8 = *(_DWORD *)(*(_QWORD *)a3 + 48LL), (v8 & 0x3000010) != 0) )
  {
    vGetNtoW((struct MATRIX *)v32, a2, a3, a4);
    v9 = *(_QWORD *)a4;
    v27 = &v30;
    v28 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 976) + 340LL) & 0x802) == 0x802 )
    {
      v10 = (__m128)v32[0];
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v27, (struct MATRIX *)v32, (struct MATRIX *)(v9 + 320), 0) )
        return v5;
      v10 = _mm_mul_ps(v30, (__m128)_xmm);
    }
    v30 = v10;
    v5 = 1;
    LODWORD(a1->eXX) = v10.m128_i32[0];
    *(_QWORD *)&a1->eXY = *(unsigned __int64 *)((char *)v30.m128_u64 + 4);
    LODWORD(a1->eYY) = v30.m128_i32[3];
    return v5;
  }
  if ( (v8 & 0x200000) == 0 )
    goto LABEL_23;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    lfOrientation = (unsigned int)a2->lfOrientation;
  }
  else
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v29, a4, 0x204u);
    v12 = (*v29 > 0.0) - (*v29 < 0.0);
    v13 = (v29[1] > 0.0) - (v29[1] < 0.0);
    v14 = (__PAIR64__(v29[2] > 0.0, *((_DWORD *)v29 + 2)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
    v15 = (unsigned int)a2->lfOrientation;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
    {
      v14 = -v14;
      v16 = 3600 - lNormAngle(v15);
    }
    else
    {
      v16 = lNormAngle(v15);
    }
    lfOrientation = (v13 & 0x384) + (v14 & 0xA8C) + (v12 & 0x708u) + v16;
  }
  v18 = (int)lNormAngle(lfOrientation) / 900;
  if ( !v18 )
  {
LABEL_23:
    x = a5->x;
    *(_QWORD *)&a1->eXY = 0LL;
    a1->eXX = *((FLOATL *)&galFloat + x);
    v23 = *((float *)&galFloatNeg + a5->y);
LABEL_24:
    a1->eYY = v23;
    return 1LL;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      if ( v20 == 1 )
      {
        y = a5->y;
        a1->eXX = 0.0;
        a1->eYY = 0.0;
        a1->eXY = *((FLOATL *)&galFloat + y);
        a1->eYX = *((FLOATL *)&galFloat + a5->x);
      }
      return 1LL;
    }
    v22 = a5->x;
    *(_QWORD *)&a1->eXY = 0LL;
    a1->eXX = *((FLOATL *)&galFloatNeg + v22);
    v23 = *((float *)&galFloat + a5->y);
    goto LABEL_24;
  }
  v24 = a5->x;
  a1->eXX = 0.0;
  a1->eYY = 0.0;
  a1->eYX = *((FLOATL *)&galFloatNeg + v24);
  a1->eXY = *((FLOATL *)&galFloatNeg + a5->y);
  return 1LL;
}
