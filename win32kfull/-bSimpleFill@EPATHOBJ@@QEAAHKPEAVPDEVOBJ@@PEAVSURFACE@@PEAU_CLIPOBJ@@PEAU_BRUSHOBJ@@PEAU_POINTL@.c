BOOL __fastcall EPATHOBJ::bSimpleFill(
        PATHOBJ *ppo,
        char a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  int v13; // eax
  __int64 v14; // r9
  int v15; // edi
  int v16; // eax
  __m128i *v17; // r9
  int v19; // r15d
  __int64 (__fastcall *v20)(unsigned __int64, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  int v21; // r14d
  __int64 (__fastcall *v22)(unsigned __int64, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  _BYTE v23[32]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v24[32]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v25; // [rsp+90h] [rbp-38h]

  memset(v23, 0, sizeof(v23));
  LOBYTE(v13) = bSubOverflow(*(_DWORD *)(*(_QWORD *)&ppo[1] + 56LL), *(_DWORD *)(*(_QWORD *)&ppo[1] + 48LL));
  v15 = 0;
  if ( !v13 )
  {
    LOBYTE(v16) = bSubOverflow(*(_DWORD *)(v14 + 60), *(_DWORD *)(v14 + 52));
    if ( !v16
      && _mm_cvtsi128_si32(_mm_srli_si128(v17[3], 8)) - v17[3].m128i_i32[0] >= 0
      && (int)(_mm_srli_si128(v17[48LL], 8).m128i_i32[1] - HIDWORD(v17[3].m128i_i64[0])) >= 0 )
    {
      if ( !ppo->cCurves )
        return 1;
      if ( (*((_DWORD *)a4 + 28) & 0x40) == 0 )
        goto LABEL_37;
      if ( (flOptions & 2) != 0 )
      {
        if ( (a2 & 8) == 0 )
          goto LABEL_37;
      }
      else if ( (a2 & 4) == 0 )
      {
        goto LABEL_37;
      }
      PRECOMPUTE::vInit(v24, a4, a3, ppo, pco, 0LL, 0LL, mix, flOptions, 1);
      if ( !v25 )
      {
        EngSetLastError(8u);
LABEL_35:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v24);
        return v15;
      }
      v19 = -1;
      if ( (ppo->fl & 1) != 0 )
      {
        if ( (a2 & 1) != 0 )
        {
          ++*((_DWORD *)a4 + 23);
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PushThreadGuardedObject(v23, ppo, vCleanupPathStackObj);
          v20 = *(__int64 (__fastcall **)(unsigned __int64, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2784LL);
          if ( v20 )
            v21 = v20(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL), ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
          else
            v21 = -1;
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PopThreadGuardedObject(v23);
          if ( v21 == 1 )
            goto LABEL_33;
          if ( v21 == -1 )
            goto LABEL_35;
        }
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
          goto LABEL_35;
      }
      ++*((_DWORD *)a4 + 23);
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
        PushThreadGuardedObject(v23, ppo, vCleanupPathStackObj);
      v22 = *(__int64 (__fastcall **)(unsigned __int64, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2784LL);
      if ( v22 )
        v19 = v22(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL), ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
        PopThreadGuardedObject(v23);
      if ( v19 == 1 )
      {
LABEL_33:
        v15 = 1;
        goto LABEL_35;
      }
      if ( v19 == -1 )
        goto LABEL_35;
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v24);
LABEL_37:
      ++*((_DWORD *)a4 + 23);
      return EngFillPath(
               (SURFOBJ *)(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL)),
               ppo,
               pco,
               pbo,
               pptlBrushOrg,
               mix,
               flOptions);
    }
  }
  return 0;
}
