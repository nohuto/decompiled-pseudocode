/*
 * XREFs of ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C0062CDC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C00E8988 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 * Callees:
 *     ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C0099BF4 (-vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        struct _POINTL *const a5)
{
  unsigned int v5; // edi
  int v9; // ecx
  __int64 v10; // r8
  __m128 v11; // xmm0
  int v13; // edx
  __int64 lfOrientation; // rcx
  __int64 v15; // rax
  FLOATL v16; // eax
  __int16 v17; // r15
  __int16 v18; // r13
  int v19; // r14d
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // edx
  int v23; // edx
  __int64 y; // rax
  __int64 v25; // rax
  __int64 x; // rax
  __m128 *v28; // [rsp+28h] [rbp-69h] BYREF
  int v29; // [rsp+34h] [rbp-5Dh]
  float *v30; // [rsp+38h] [rbp-59h] BYREF
  __m128 v31; // [rsp+48h] [rbp-49h] BYREF
  int v32; // [rsp+68h] [rbp-29h]
  _OWORD v33[2]; // [rsp+70h] [rbp-21h] BYREF
  int v34; // [rsp+90h] [rbp-1h]

  v34 = 0;
  v5 = 0;
  v32 = 0;
  memset(v33, 0, sizeof(v33));
  memset(&v31, 0, 32);
  if ( !a5->x || (v9 = *(_DWORD *)(*(_QWORD *)a3 + 48LL), (v9 & 0x3000010) != 0) )
  {
    vGetNtoW((struct MATRIX *)v33, a2, a3, a4);
    v10 = *(_QWORD *)a4;
    v28 = &v31;
    v29 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v10 + 976) + 340LL) & 0x802) == 0x802 )
    {
      v11 = (__m128)v33[0];
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v28, (struct MATRIX *)v33, (struct MATRIX *)(v10 + 320), 0) )
        return v5;
      v11 = _mm_mul_ps(v31, (__m128)_xmm);
    }
    v31 = v11;
    v5 = 1;
    LODWORD(a1->eXX) = v11.m128_i32[0];
    *(_QWORD *)&a1->eXY = *(unsigned __int64 *)((char *)v31.m128_u64 + 4);
    LODWORD(a1->eYY) = v31.m128_i32[3];
    return v5;
  }
  v13 = 0;
  if ( (v9 & 0x200000) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x802) == 0x802 )
    {
      lfOrientation = (unsigned int)a2->lfOrientation;
    }
    else
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v30, a4, 0x204u);
      v17 = (*v30 > 0.0) - (*v30 < 0.0);
      v18 = (v30[1] > 0.0) - (v30[1] < 0.0);
      v19 = (__PAIR64__(v30[2] > 0.0, *((_DWORD *)v30 + 2)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
      v20 = (unsigned int)a2->lfOrientation;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
      {
        v19 = -v19;
        v21 = 3600 - lNormAngle(v20);
      }
      else
      {
        v21 = lNormAngle(v20);
      }
      lfOrientation = (v18 & 0x384) + (v19 & 0xA8C) + (v17 & 0x708u) + v21;
    }
    v13 = (int)lNormAngle(lfOrientation) / 900;
  }
  if ( v13 )
  {
    v22 = v13 - 1;
    if ( !v22 )
    {
      x = a5->x;
      a1->eXX = 0.0;
      a1->eYY = 0.0;
      a1->eYX = *((FLOATL *)&galFloatNeg + x);
      a1->eXY = *((FLOATL *)&galFloatNeg + a5->y);
      return 1LL;
    }
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 == 1 )
      {
        y = a5->y;
        a1->eXX = 0.0;
        a1->eYY = 0.0;
        a1->eXY = *((FLOATL *)&galFloat + y);
        a1->eYX = *((FLOATL *)&galFloat + a5->x);
      }
      return 1LL;
    }
    v25 = a5->x;
    *(_QWORD *)&a1->eXY = 0LL;
    a1->eXX = *((FLOATL *)&galFloatNeg + v25);
    v16 = *((float *)&galFloat + a5->y);
  }
  else
  {
    v15 = a5->x;
    *(_QWORD *)&a1->eXY = 0LL;
    a1->eXX = *((FLOATL *)&galFloat + v15);
    v16 = *((float *)&galFloatNeg + a5->y);
  }
  a1->eYY = v16;
  return 1LL;
}
