/*
 * XREFs of xInsertGlyphbitsRFONTOBJ @ 0x1C011E244
 * Callers:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C011E1F4 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C011DEFC (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C011E4D4 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0122090 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02FF7F8 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02FFD48 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall xInsertGlyphbitsRFONTOBJ(struct _FONTOBJ **this, struct _GLYPHDATA *a2, unsigned int a3)
{
  struct _FONTOBJ *v3; // rdi
  unsigned int v4; // ebp
  int iFile; // eax
  __int64 v8; // rbx
  unsigned int pvProducer_high; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG_PTR pvProducer_low; // r15
  void *v14; // rbx
  unsigned int v15; // eax
  struct _GLYPHBITS *v16; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-90h] BYREF
  struct _GLYPHDATA v18; // [rsp+60h] [rbp-78h] BYREF

  v3 = *this;
  v4 = a3;
  if ( ((*this)[1].iTTUniq & 0x100000000LL) != 0 )
    return 0LL;
  iFile = v3[1].iFile;
  if ( !iFile )
    return 0LL;
  if ( iFile != 2 )
  {
    v17[0] = *(_QWORD *)&v3[2].iUniq;
    v8 = *(_QWORD *)(v17[0] + 88LL);
    if ( v8 == *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 23448LL) )
    {
      pvProducer_high = HIDWORD(v3[9].pvProducer);
      v16 = 0LL;
      v3[10].iFace = v4 & 1 | 4;
      if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                           (PFFOBJ *)v17,
                           (struct DHPDEV__ *)(*this)[1].pvConsumer,
                           *this,
                           a2->hg,
                           pvProducer_high,
                           0LL,
                           &v16) != -1 )
      {
        a2->gdf.pgb = v16;
        return 1LL;
      }
    }
    else
    {
      memset_0(&v18, 0, sizeof(v18));
      pvProducer_low = LODWORD(v3[9].pvProducer);
      if ( pvProducer_low <= v3[9].iTTUniq - *(_QWORD *)&v3[9].cxMax
        || (LODWORD(pvProducer_low) = PFFOBJ::QueryFontData(
                                        (PFFOBJ *)v17,
                                        (struct DHPDEV__ *)(*this)[1].pvConsumer,
                                        *this,
                                        1u,
                                        a2->hg,
                                        &v18,
                                        0LL,
                                        0),
            (_DWORD)pvProducer_low != -1) )
      {
        while ( 1 )
        {
          v14 = (void *)RFONTOBJ::pgbCheckGlyphCache((RFONTOBJ *)this, (unsigned int)pvProducer_low, v11, v12);
          if ( v14 )
            break;
          if ( !v4 )
            return 0LL;
          RFONTOBJ::vFlushCache((RFONTOBJ *)this);
          v4 = 0;
        }
        v15 = PFFOBJ::QueryFontData(
                (PFFOBJ *)v17,
                (struct DHPDEV__ *)(*this)[1].pvConsumer,
                *this,
                1u,
                a2->hg,
                &v18,
                v14,
                pvProducer_low);
        if ( v15 != -1 )
        {
          a2->gdf.pgb = (GLYPHBITS *)v14;
          *(_QWORD *)&v3[9].cxMax += v15;
          return 1LL;
        }
      }
    }
    return 0LL;
  }
  return RFONTOBJ::bInsertGlyphbitsPath((RFONTOBJ *)this, a2, a3);
}
