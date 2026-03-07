BOOL __fastcall EPATHOBJ::bSimpleStrokeAndFill(
        PATHOBJ *ppo,
        char a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  PATHOBJ v12; // r10
  MIX v13; // r12d
  struct PDEVOBJ *v16; // r13
  int v17; // eax
  __int64 v18; // r10
  int v19; // edi
  int v20; // eax
  __int64 v21; // r9
  __m128i *v22; // r10
  char v23; // r11
  int v25; // eax
  int v26; // ebx
  CLIPOBJ *v27; // r15
  int v28; // r13d
  __int64 (__fastcall *v29)(unsigned __int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // r10
  int v30; // r15d
  __int64 (__fastcall *v31)(unsigned __int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // r10
  int v32; // r8d
  MIX v33; // ecx
  _OWORD v34[2]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v35[32]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-48h]

  v12 = ppo[1];
  v13 = mixFill;
  memset(v34, 0, sizeof(v34));
  v16 = a3;
  LOBYTE(v17) = bSubOverflow(*(_DWORD *)(*(_QWORD *)&v12 + 56LL), *(_DWORD *)(*(_QWORD *)&v12 + 48LL));
  v19 = 0;
  if ( v17 )
    return 0;
  LOBYTE(v20) = bSubOverflow(*(_DWORD *)(v18 + 60), *(_DWORD *)(v18 + 52));
  if ( v20
    || _mm_cvtsi128_si32(_mm_srli_si128(v22[3], 8)) - v22[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v22[48LL], 8).m128i_i32[1] - HIDWORD(v22[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( !ppo->cCurves )
    return 1;
  v25 = *(_DWORD *)(v21 + 112);
  v26 = 1;
  ++*(_DWORD *)(v21 + 92);
  if ( (v25 & 0x80u) != 0 )
  {
    v27 = pco;
    PRECOMPUTE::vInit(v35, a4, v16, ppo, pco, pxo, plineattrs, mixFill, flOptions, 2);
    if ( !v36 )
    {
      EngSetLastError(8u);
LABEL_33:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v35);
      return v19;
    }
    if ( (plineattrs->fl & 1) == 0 || (a2 & 2) != 0 )
    {
      v28 = -1;
      if ( (ppo->fl & 1) != 0 )
      {
        if ( (a2 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PushThreadGuardedObject(v34, ppo, vCleanupPathStackObj);
          v29 = *(__int64 (__fastcall **)(unsigned __int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2792LL);
          if ( v29 )
            v30 = v29(
                    ((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL),
                    ppo,
                    pco,
                    pxo,
                    pboStroke,
                    plineattrs,
                    pbo,
                    pptlBrushOrg,
                    mixFill,
                    flOptions);
          else
            v30 = -1;
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PopThreadGuardedObject(v34);
          if ( v30 == 1 )
            goto LABEL_31;
          if ( v30 == -1 )
            goto LABEL_33;
          v27 = pco;
        }
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
          goto LABEL_33;
      }
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
        PushThreadGuardedObject(v34, ppo, vCleanupPathStackObj);
      v31 = *(__int64 (__fastcall **)(unsigned __int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2792LL);
      if ( v31 )
        v28 = v31(
                ((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL),
                ppo,
                v27,
                pxo,
                pboStroke,
                plineattrs,
                pbo,
                pptlBrushOrg,
                mixFill,
                flOptions);
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
        PopThreadGuardedObject(v34);
      if ( v28 == 1 )
      {
LABEL_31:
        v19 = 1;
        goto LABEL_33;
      }
      if ( v28 == -1 )
        goto LABEL_33;
      v16 = a3;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v35);
    v23 = a2;
  }
  if ( (plineattrs->fl & 1) != 0
    && ((unsigned __int8)mixFill != 13 || (unsigned int)(*(_DWORD *)(*((_QWORD *)a4 + 6) + 2108LL) - 1) > 1) )
  {
    return EngStrokeAndFillPath(
             (SURFOBJ *)(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL)),
             ppo,
             pco,
             pxo,
             pboStroke,
             plineattrs,
             pbo,
             pptlBrushOrg,
             mixFill,
             flOptions);
  }
  v32 = (unsigned __int8)mixFill << 8;
  v33 = mixFill;
  if ( (pbo[5].iSolidColor & 0x8000) == 0 )
    v33 = v32 | (unsigned __int8)mixFill;
  if ( (pboStroke[5].iSolidColor & 0x8000) == 0 )
    v13 = v32 | (unsigned __int8)mixFill;
  if ( !EPATHOBJ::bSimpleFill(ppo, v23, v16, a4, pco, pbo, pptlBrushOrg, v33, flOptions)
    || !EPATHOBJ::bSimpleStroke(ppo, a2, v16, a4, pco, pxo, pboStroke, pptlBrushOrg, plineattrs, v13) )
  {
    return 0;
  }
  return v26;
}
