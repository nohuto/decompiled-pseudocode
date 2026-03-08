/*
 * XREFs of ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F3370
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0289008 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEB.c)
 *     EngStrokeAndFillPath @ 0x1C028BFF0 (EngStrokeAndFillPath.c)
 *     NtGdiFrameRgn @ 0x1C02ABB30 (NtGdiFrameRgn.c)
 *     NtGdiWidenPath @ 0x1C02C4190 (NtGdiWidenPath.c)
 * Callees:
 *     LongLongToLong @ 0x1C0013C0C (LongLongToLong.c)
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 */

__int64 __fastcall EPATHOBJ::bComputeWidenedBounds(
        EPATHOBJ *this,
        struct EPATHOBJ *a2,
        struct _XFORMOBJ *a3,
        const struct _LINEATTRS *a4)
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
  __int64 result; // rax
  float eMiterLimit; // xmm1_4
  LONG v21; // esi
  unsigned int v22; // r8d
  LONG v23; // esi
  int *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  LONG v27; // r11d
  LONG v28; // r10d
  __int64 v29; // r11
  __int64 v30; // r10
  _DWORD *v31; // r9
  LONG v32; // r8d
  LONG v33; // r10d
  LONG v34; // r11d
  LONG v35; // [rsp+20h] [rbp-20h] BYREF
  LONG v36; // [rsp+24h] [rbp-1Ch] BYREF
  LONG v37; // [rsp+28h] [rbp-18h] BYREF
  LONG v38; // [rsp+30h] [rbp-10h] BYREF
  LONG v39; // [rsp+34h] [rbp-Ch]
  LONG v40; // [rsp+38h] [rbp-8h]
  int v41; // [rsp+3Ch] [rbp-4h]
  LONG plResult; // [rsp+88h] [rbp+48h] BYREF

  LODWORD(v4.e) = a4->elWidth;
  plResult = 0;
  bFToL(v4.e, &plResult, 6u);
  v38 = plResult;
  v39 = plResult;
  v40 = plResult;
  v41 = -plResult;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)&v38, (struct _VECTORFX *)&v38, (unsigned int)(v8 - 4)) )
    return 0LL;
  v9 = v38;
  v10 = v38;
  plResult = 0;
  v35 = 0;
  if ( v38 < 0 )
    v10 = -v38;
  v11 = v40;
  v12 = v40;
  if ( v40 < 0 )
    v12 = -v40;
  if ( v10 <= v12 )
  {
    if ( v40 < 0 )
      v11 = -v40;
    v9 = v11;
  }
  else if ( v38 < 0 )
  {
    v9 = -v38;
  }
  if ( LongLongToLong(((__int64)v9 >> 1) + 16, &plResult) < 0 )
    return 0LL;
  v13 = v39;
  v14 = v39;
  if ( v39 < 0 )
    v14 = -v39;
  v15 = v41;
  v16 = v41;
  if ( v41 < 0 )
    v16 = -v41;
  if ( v14 <= v16 )
  {
    if ( v41 < 0 )
      v15 = -v41;
    v13 = v15;
  }
  else if ( v39 < 0 )
  {
    v13 = -v39;
  }
  if ( LongLongToLong(((__int64)v13 >> 1) + 16, &v35) < 0 )
    return 0LL;
  if ( a4->iEndCap == 1 )
  {
    if ( LongLongToLong(plResult + (__int64)(plResult >> 1), &plResult) < 0 )
      return 0LL;
    if ( LongLongToLong(v35 + (__int64)(v35 >> 1), &v35) < 0 )
      return 0LL;
    v17 = plResult;
    if ( (unsigned int)(plResult + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
    v18 = v35;
    if ( (unsigned int)(v35 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  else
  {
    v17 = plResult;
    v18 = v35;
  }
  if ( a4->iJoin == 2 )
  {
    eMiterLimit = a4->eMiterLimit;
    v21 = v17;
    if ( !(unsigned int)bFToL((float)v17 * eMiterLimit, &plResult, 6u) )
      return 0LL;
    v17 = plResult;
    if ( plResult < v21 )
      return 0LL;
    v23 = v18;
    if ( !(unsigned int)bFToL((float)v18 * eMiterLimit, &v35, v22) )
      return 0LL;
    v18 = v35;
    if ( v35 < v23 || (unsigned int)(v17 + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v35 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  v24 = (int *)*((_QWORD *)a2 + 1);
  v25 = v24[12];
  v26 = v24[14];
  v27 = v24[13];
  v28 = v24[15];
  plResult = v25;
  v35 = v26;
  v36 = v27;
  v37 = v28;
  if ( (unsigned int)(v25 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v26 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v27 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v28 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( LongLongToLong(v25 - v17, &plResult) < 0 )
    return 0LL;
  if ( LongLongToLong(v17 + v26, &v35) < 0 )
    return 0LL;
  if ( LongLongToLong(v29 - v18, &v36) < 0 )
    return 0LL;
  if ( LongLongToLong(v18 + v30, &v37) < 0 )
    return 0LL;
  if ( (unsigned int)(plResult + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v32 = v35;
  if ( (unsigned int)(v35 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v33 = v36;
  if ( (unsigned int)(v36 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v34 = v37;
  if ( (unsigned int)(v37 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v31[12] = plResult;
  result = 1LL;
  v31[14] = v32;
  v31[13] = v33;
  v31[15] = v34;
  return result;
}
