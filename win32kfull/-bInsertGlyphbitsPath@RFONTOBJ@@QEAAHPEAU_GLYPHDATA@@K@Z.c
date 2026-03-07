__int64 __fastcall RFONTOBJ::bInsertGlyphbitsPath(RFONTOBJ *this, struct _GLYPHDATA *a2, int a3)
{
  __int64 v3; // r15
  struct _FONTOBJ *v7; // r8
  struct DHPDEV__ *v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  EPATHFONTOBJ *v12; // rax
  GLYPHDEF v13; // rbx
  EPATHOBJ *v14; // rcx
  __int64 v16; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v17[8]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v18; // [rsp+58h] [rbp-90h]

  v3 = *(_QWORD *)this;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v17);
  if ( !v18
    || (v7 = *(struct _FONTOBJ **)this,
        v8 = *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
        v16 = *(_QWORD *)(*(_QWORD *)this + 128LL),
        (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)&v16, v8, v7, 2u, a2->hg, 0LL, v17, 0) == -1) )
  {
LABEL_8:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v17);
    return 0LL;
  }
  else
  {
    v9 = EPATHOBJ::cjSize((EPATHOBJ *)v17) + 424;
    while ( 1 )
    {
      v12 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache(this, v9, v10, v11);
      v13.pgb = (GLYPHBITS *)v12;
      if ( v12 )
        break;
      if ( !a3 )
        goto LABEL_8;
      RFONTOBJ::vFlushCache(this);
      a3 = 0;
    }
    EPATHFONTOBJ::vInit(v12, v9);
    EPATHOBJ::bClone(v14, (struct EPATHOBJ *)v17);
    a2->gdf = v13;
    *(_QWORD *)(v3 + 584) += v9;
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v17);
    return 1LL;
  }
}
