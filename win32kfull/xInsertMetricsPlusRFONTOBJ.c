__int64 __fastcall xInsertMetricsPlusRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // eax
  struct _GLYPHDATA *v13; // rcx
  unsigned __int64 v14; // rbx
  void *v15; // rax
  struct _GLYPHDATA *v16; // rcx
  void *v17; // r13
  unsigned int FontData; // eax
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+40h] [rbp-59h] BYREF
  struct _GLYPHDATA *v21; // [rsp+48h] [rbp-51h] BYREF
  struct _GLYPHBITS *v22; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v23[3]; // [rsp+58h] [rbp-41h] BYREF
  struct _GLYPHDATA v24; // [rsp+70h] [rbp-29h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 2) != 0 )
  {
    LODWORD(v21) = 0;
    v20 = a3;
    RFONTOBJ::vXlatGlyphArray(this, &v20, 1u, (unsigned int *)&v21, 0, 0);
    v7 = (unsigned int)v21;
  }
  else
  {
    v7 = a3;
  }
  v8 = *(_QWORD *)this;
  if ( v7 == *(_DWORD *)(*(_QWORD *)this + 460LL) )
  {
    v13 = *(struct _GLYPHDATA **)(v6 + 8);
    if ( v13 )
    {
      *a2 = v13;
      return 1LL;
    }
  }
  if ( !*(_DWORD *)(v8 + 88) )
    return RFONTOBJ::bInsertMetrics(this, a2, a3);
  if ( !(unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
    return 0LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) != 2 )
  {
    v23[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
    v10 = *(_QWORD *)(v23[0] + 88LL);
    if ( v10 == *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v9) + 32) + 23448LL) )
    {
      v21 = 0LL;
      v22 = 0LL;
      v11 = *(_DWORD *)(v8 + 636);
      *(_DWORD *)(v8 + 644) = 6;
      if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                           (PFFOBJ *)v23,
                           *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                           *(struct _FONTOBJ **)this,
                           v7,
                           v11,
                           &v21,
                           &v22) != -1 )
      {
        v21->gdf.pgb = v22;
        *a2 = v21;
        return 1LL;
      }
    }
    else
    {
      memset_0(&v24, 0, sizeof(v24));
      v14 = *(unsigned int *)(v8 + 632);
      if ( v14 <= *(_QWORD *)(v8 + 592) - *(_QWORD *)(v8 + 584)
        || (LODWORD(v14) = PFFOBJ::QueryFontData(
                             (PFFOBJ *)v23,
                             *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                             *(struct _FONTOBJ **)this,
                             1u,
                             v7,
                             &v24,
                             0LL,
                             0),
            (_DWORD)v14 != -1) )
      {
        v15 = RFONTOBJ::pgbCheckGlyphCache(this, (unsigned int)v14);
        v16 = &v24;
        v17 = v15;
        if ( !*(_DWORD *)(*(_QWORD *)this + 640LL) )
          v16 = *(struct _GLYPHDATA **)(v8 + 512);
        FontData = PFFOBJ::QueryFontData(
                     (PFFOBJ *)v23,
                     *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                     *(struct _FONTOBJ **)this,
                     1u,
                     v7,
                     v16,
                     v15,
                     v14);
        if ( FontData != -1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)this + 640LL) )
          {
            v19 = *(_QWORD *)(v8 + 512);
            *(_OWORD *)v19 = *(_OWORD *)&v24.gdf.pgb;
            *(_QWORD *)(v19 + 16) = *(_QWORD *)&v24.fxA;
          }
          *a2 = *(struct _GLYPHDATA **)(v8 + 512);
          *(_QWORD *)(v8 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
          if ( v17 )
            *(_QWORD *)(v8 + 584) += FontData;
          return 1LL;
        }
      }
    }
    return 0LL;
  }
  return RFONTOBJ::bInsertMetricsPlusPath(this, a2, a3);
}
