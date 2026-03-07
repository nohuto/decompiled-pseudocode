__int64 __fastcall RFONTOBJ::bInsertPathLookaside(struct _FONTOBJ **this, struct _GLYPHPOS *a2)
{
  unsigned int v4; // ebx
  struct _FONTOBJ *v5; // r8
  struct DHPDEV__ *pvConsumer; // rdx
  unsigned int v7; // esi
  GLYPHDEF *v8; // rdi
  EPATHOBJ *v9; // rcx
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h]
  struct _GLYPHDATA v14; // [rsp+D0h] [rbp-30h] BYREF

  memset_0(&v14, 0, sizeof(v14));
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v12);
  v4 = 0;
  if ( v13 )
  {
    v5 = *this;
    pvConsumer = (struct DHPDEV__ *)(*this)[1].pvConsumer;
    v11 = *(_QWORD *)&(*this)[2].iUniq;
    if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)&v11, pvConsumer, v5, 2u, a2->hg, &v14, v12, 0) != -1 )
    {
      v7 = EPATHOBJ::cjSize((EPATHOBJ *)v12);
      if ( (unsigned int)RFONTOBJ::bEnsureAuxCacheBuffer((RFONTOBJ *)this, v7 + 488) )
      {
        v8 = *(GLYPHDEF **)&(*this)[9].ulStyleSize;
        EPATHFONTOBJ::vInit((EPATHFONTOBJ *)&v8[8], v7 + 424);
        EPATHOBJ::bClone(v9, (struct EPATHOBJ *)v12);
        *(struct _GLYPHDATA *)&v8->pgb = v14;
        a2->pgdf = v8;
        v8->pgb = (GLYPHBITS *)&v8[8];
        v4 = 1;
      }
    }
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v12);
  return v4;
}
