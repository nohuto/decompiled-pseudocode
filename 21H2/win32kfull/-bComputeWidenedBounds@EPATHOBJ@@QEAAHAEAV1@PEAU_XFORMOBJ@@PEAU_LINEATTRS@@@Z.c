/*
 * XREFs of ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01412F0
 * Callers:
 *     NtGdiFrameRgn @ 0x1C013EC70 (NtGdiFrameRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0146E94 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     EngStrokeAndFillPath @ 0x1C014C2B0 (EngStrokeAndFillPath.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C015AA94 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     NtGdiWidenPath @ 0x1C02ADE20 (NtGdiWidenPath.c)
 * Callees:
 *     bFToL @ 0x1C00FB538 (bFToL.c)
 *     LongLongToLong @ 0x1C0158BB0 (LongLongToLong.c)
 */

__int64 __fastcall EPATHOBJ::bComputeWidenedBounds(
        EPATHOBJ *this,
        struct EPATHOBJ *a2,
        struct _XFORMOBJ *a3,
        struct _LINEATTRS *a4)
{
  FLOAT_LONG v4; // xmm0_4
  int v8; // r8d
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  LONG v17; // edi
  LONG v18; // ebx
  int *v19; // rax
  __int64 v20; // rcx
  LONG v21; // r10d
  __int64 v22; // rsi
  LONG v23; // r11d
  __int64 v24; // r10
  __int64 v25; // r10
  __int64 v26; // r11
  _DWORD *v27; // r9
  LONG v28; // r8d
  LONG v29; // r10d
  LONG v30; // r11d
  __int64 result; // rax
  float eMiterLimit; // xmm1_4
  LONG v33; // esi
  unsigned int v34; // r8d
  LONG v35; // esi
  LONG v36; // [rsp+30h] [rbp-20h] BYREF
  LONG v37; // [rsp+34h] [rbp-1Ch] BYREF
  LONG v38; // [rsp+38h] [rbp-18h] BYREF
  LONG v39; // [rsp+40h] [rbp-10h] BYREF
  LONG v40; // [rsp+44h] [rbp-Ch]
  LONG v41; // [rsp+48h] [rbp-8h]
  int v42; // [rsp+4Ch] [rbp-4h]
  LONG plResult; // [rsp+98h] [rbp+48h] BYREF

  LODWORD(v4.e) = a4->elWidth;
  plResult = 0;
  bFToL(v4.e, &plResult, 6u);
  v39 = plResult;
  v40 = plResult;
  v41 = plResult;
  v42 = -plResult;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)&v39, (struct _VECTORFX *)&v39, (unsigned int)(v8 - 4), 0) )
    return 0LL;
  v9 = v39;
  v10 = v39;
  plResult = 0;
  v36 = 0;
  if ( v39 < 0 )
    v10 = -v39;
  v11 = v41;
  v12 = v41;
  if ( v41 < 0 )
    v12 = -v41;
  if ( v10 > v12 )
  {
    if ( v39 < 0 )
      v9 = -v39;
  }
  else
  {
    if ( v41 < 0 )
      v11 = -v41;
    v9 = v11;
  }
  if ( LongLongToLong(((__int64)v9 >> 1) + 16, &plResult) < 0 )
    return 0LL;
  v13 = v40;
  v14 = v40;
  if ( v40 < 0 )
    v14 = -v40;
  v15 = v42;
  v16 = v42;
  if ( v42 < 0 )
    v16 = -v42;
  if ( v14 > v16 )
  {
    if ( v40 < 0 )
      v13 = -v40;
  }
  else
  {
    if ( v42 < 0 )
      v15 = -v42;
    v13 = v15;
  }
  if ( LongLongToLong(((__int64)v13 >> 1) + 16, &v36) < 0 )
    return 0LL;
  if ( a4->iEndCap == 1 )
  {
    if ( LongLongToLong(plResult + (__int64)(plResult >> 1), &plResult) < 0 )
      return 0LL;
    if ( LongLongToLong(v36 + (__int64)(v36 >> 1), &v36) < 0 )
      return 0LL;
    v17 = plResult;
    if ( (unsigned int)(plResult + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
    v18 = v36;
    if ( (unsigned int)(v36 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  else
  {
    v17 = plResult;
    v18 = v36;
  }
  if ( a4->iJoin != 2
    || (eMiterLimit = a4->eMiterLimit, v33 = v17, (unsigned int)bFToL((float)v17 * eMiterLimit, &plResult, 6u))
    && (v17 = plResult, plResult >= v33)
    && (v35 = v18, (unsigned int)bFToL((float)v18 * eMiterLimit, &v36, v34))
    && (v18 = v36, v36 >= v35)
    && (unsigned int)(v17 + 0x3FFFFFFF) <= 0x7FFFFFFD
    && (unsigned int)(v36 + 0x3FFFFFFF) <= 0x7FFFFFFD )
  {
    v19 = (int *)*((_QWORD *)a2 + 1);
    v20 = v19[12];
    v21 = v19[14];
    v22 = v19[13];
    v23 = v19[15];
    plResult = v20;
    v36 = v21;
    v37 = v22;
    v38 = v23;
    if ( (unsigned int)(v20 + 0x3FFFFFFF) <= 0x7FFFFFFD
      && (unsigned int)(v21 + 0x3FFFFFFF) <= 0x7FFFFFFD
      && (unsigned int)(v22 + 0x3FFFFFFF) <= 0x7FFFFFFD
      && (unsigned int)(v23 + 0x3FFFFFFF) <= 0x7FFFFFFD
      && LongLongToLong(v20 - v17, &plResult) >= 0
      && LongLongToLong(v17 + v24, &v36) >= 0
      && LongLongToLong(v22 - v18, &v37) >= 0
      && LongLongToLong(v25 + v26, &v38) >= 0
      && (unsigned int)(plResult + 0x3FFFFFFF) <= 0x7FFFFFFD )
    {
      v28 = v36;
      if ( (unsigned int)(v36 + 0x3FFFFFFF) <= 0x7FFFFFFD )
      {
        v29 = v37;
        if ( (unsigned int)(v37 + 0x3FFFFFFF) <= 0x7FFFFFFD )
        {
          v30 = v38;
          if ( (unsigned int)(v38 + 0x3FFFFFFF) <= 0x7FFFFFFD )
          {
            v27[12] = plResult;
            result = 1LL;
            v27[14] = v28;
            v27[13] = v29;
            v27[15] = v30;
            return result;
          }
        }
      }
    }
  }
  return 0LL;
}
