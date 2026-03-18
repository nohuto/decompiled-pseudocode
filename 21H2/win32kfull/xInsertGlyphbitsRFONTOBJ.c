/*
 * XREFs of xInsertGlyphbitsRFONTOBJ @ 0x1C0018B7C
 * Callers:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0018B2C (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0018C7C (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C0019160 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C001B588 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02D47E4 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02D4A70 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall xInsertGlyphbitsRFONTOBJ(struct _FONTOBJ **this, struct _GLYPHDATA *a2, unsigned int a3)
{
  struct _FONTOBJ *v3; // rdi
  unsigned int v4; // ebp
  int iFile; // eax
  unsigned int v8; // ebx
  unsigned int pvProducer_high; // eax
  ULONG_PTR pvProducer_low; // r15
  unsigned __int64 v12; // rax
  void *v13; // r12
  unsigned int v14; // eax
  struct _GLYPHBITS *v15; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-90h] BYREF
  struct _GLYPHDATA v17; // [rsp+60h] [rbp-78h] BYREF

  v3 = *this;
  v4 = a3;
  if ( ((*this)[1].iTTUniq & 0x100000000LL) != 0 )
    return 0LL;
  iFile = v3[1].iFile;
  v8 = 0;
  if ( !iFile )
    return 0LL;
  if ( iFile != 2 )
  {
    v16[0] = *(_QWORD *)&v3[2].iUniq;
    if ( *(_QWORD *)(v16[0] + 88LL) == qword_1C033BDF8 )
    {
      pvProducer_high = HIDWORD(v3[9].pvProducer);
      v15 = 0LL;
      v3[10].iFace = a3 & 1 | 4;
      if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                           (PFFOBJ *)v16,
                           (struct DHPDEV__ *)(*this)[1].pvConsumer,
                           *this,
                           a2->hg,
                           pvProducer_high,
                           0LL,
                           &v15) == -1 )
        return v8;
      a2->gdf.pgb = v15;
    }
    else
    {
      memset(&v17, 0, sizeof(v17));
      pvProducer_low = LODWORD(v3[9].pvProducer);
      if ( pvProducer_low > v3[9].iTTUniq - *(_QWORD *)&v3[9].cxMax )
      {
        LODWORD(pvProducer_low) = PFFOBJ::QueryFontData(
                                    (PFFOBJ *)v16,
                                    (struct DHPDEV__ *)v3[1].pvConsumer,
                                    v3,
                                    1u,
                                    a2->hg,
                                    &v17,
                                    0LL,
                                    0);
        if ( (_DWORD)pvProducer_low == -1 )
          return v8;
      }
      v12 = (unsigned int)pvProducer_low;
      v15 = (struct _GLYPHBITS *)(unsigned int)pvProducer_low;
      while ( 1 )
      {
        v13 = RFONTOBJ::pgbCheckGlyphCache((RFONTOBJ *)this, v12);
        if ( v13 )
          break;
        if ( !v4 )
          return v8;
        RFONTOBJ::vFlushCache((RFONTOBJ *)this);
        v12 = (unsigned __int64)v15;
        v4 = 0;
      }
      v14 = PFFOBJ::QueryFontData(
              (PFFOBJ *)v16,
              (struct DHPDEV__ *)(*this)[1].pvConsumer,
              *this,
              1u,
              a2->hg,
              &v17,
              v13,
              pvProducer_low);
      if ( v14 == -1 )
        return v8;
      a2->gdf.pgb = (GLYPHBITS *)v13;
      *(_QWORD *)&v3[9].cxMax += v14;
    }
    return 1;
  }
  return RFONTOBJ::bInsertGlyphbitsPath((RFONTOBJ *)this, a2, a3);
}
