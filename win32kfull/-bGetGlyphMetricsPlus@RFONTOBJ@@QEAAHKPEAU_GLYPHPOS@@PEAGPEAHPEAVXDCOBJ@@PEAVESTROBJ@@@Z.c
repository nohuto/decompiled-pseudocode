__int64 __fastcall RFONTOBJ::bGetGlyphMetricsPlus(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        int *a5,
        struct XDCOBJ *a6,
        struct ESTROBJ *a7)
{
  __int64 v9; // r14
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  bool v13; // zf
  struct GPRUN *v14; // r15
  _DWORD *v15; // r13
  int v16; // ebp
  __int64 v17; // r8
  struct _GLYPHDATA *LinkMetricsPlus; // rbp
  __int64 v20; // rbp
  struct GPRUN *Run; // rax
  unsigned __int16 *v22; // [rsp+48h] [rbp-30h]
  unsigned __int16 *v23; // [rsp+80h] [rbp+8h]

  v9 = (unsigned int)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v11 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 104LL) + 1792LL) & 0x40000000) == 0 || *(_DWORD *)(v11 + 88) != 1 )
  {
    v12 = *(_DWORD **)(v11 + 480);
    v23 = a4;
    v13 = *v12 == 0;
    *a5 = 1;
    if ( v13 )
    {
      for ( ; (_DWORD)v9; LODWORD(v9) = v9 - 1 )
      {
        a3->hg = *(_DWORD *)(*(_QWORD *)this + 460LL);
        a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
        ++a3;
      }
    }
    else
    {
      v22 = &a4[v9];
      v14 = (struct GPRUN *)(v12 + 4);
      if ( a4 < v22 )
      {
        v15 = v12 + 5;
        do
        {
          v16 = *a4;
          v17 = (unsigned int)(v16 - *(_DWORD *)v14);
          if ( (unsigned int)v17 >= *v15 )
          {
            Run = RFONTOBJ::gprunFindRun(this, v16);
            v14 = Run;
            v17 = (unsigned int)(v16 - *(_DWORD *)Run);
            v15 = (_DWORD *)((char *)Run + 4);
            if ( (unsigned int)v17 >= *((_DWORD *)Run + 1) )
            {
              LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, a6, a7, a4, v23, v9, a5, 1);
              if ( !LinkMetricsPlus )
                return 0LL;
              goto LABEL_9;
            }
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v17);
          }
          else
          {
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v17);
          }
          if ( !LinkMetricsPlus )
          {
            v20 = (unsigned int)v17;
            if ( !(unsigned int)RFONTOBJ::bInsertMetricsPlus(
                                  this,
                                  (struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v17)) )
              return 0LL;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v20);
          }
LABEL_9:
          if ( !LinkMetricsPlus->gdf.pgb
            && *a5
            && *(_DWORD *)(*(_QWORD *)this + 88LL)
            && !(unsigned int)RFONTOBJ::bInsertGlyphbits(this, LinkMetricsPlus) )
          {
            *a5 = 0;
          }
          ++a4;
          a3->hg = LinkMetricsPlus->hg;
          a3->pgdf = &LinkMetricsPlus->gdf;
          ++a3;
        }
        while ( a4 < v22 );
      }
    }
    return 1LL;
  }
  if ( a5 )
    *a5 = 0;
  return RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)(unsigned int)v9, a3, a4, a6, a7);
}
