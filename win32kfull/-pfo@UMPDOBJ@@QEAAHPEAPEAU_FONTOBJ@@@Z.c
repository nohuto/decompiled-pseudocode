/*
 * XREFs of ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C029C3B8
 * Callers:
 *     ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C02BB7F0 (-UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02BD080 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z @ 0x1C02BD3D0 (-UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02BE5A0 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02BECE0 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02C0B90 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 * Callees:
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C00BC8FC (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z @ 0x1C029BB4C (-LookUp@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C029BC38 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 */

__int64 __fastcall UMPDOBJ::pfo(UMPDOBJ *this, __m128i **a2)
{
  __m128i *v2; // rax
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128i v12; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+98h] [rbp+10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+18h] BYREF

  v2 = *a2;
  if ( !*a2 )
    return 1LL;
  v6 = v2[1];
  v7 = v2[3];
  v12 = *v2;
  v8 = v2[2];
  v13[0] = v6;
  v9 = _mm_srli_si128(v6, 8).m128i_u64[0];
  v13[1] = v8;
  v13[2] = v7;
  if ( v9 >= (unsigned __int64)MmSystemRangeStart )
  {
    AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v15);
    v14 = 0LL;
    v11 = SGDGetSessionState(v10);
    if ( NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LookUp(
           *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)(v11 + 32) + 23480LL),
           (_QWORD *)v13 + 1,
           &v14) )
    {
      v9 = 0LL;
    }
    *((_QWORD *)&v13[0] + 1) = v9;
    if ( v15 )
    {
      GreReleasePushLockShared(v15);
      KeLeaveCriticalRegion();
    }
  }
  return UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 176), (const void **)a2, 0x40u, &v12);
}
