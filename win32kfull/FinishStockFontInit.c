/*
 * XREFs of FinishStockFontInit @ 0x1C00B9D70
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B842C (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     FinishStockFontReinit @ 0x1C00B9210 (FinishStockFontReinit.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C0025AF8 (GreCreateFontIndirectW.c)
 *     ?vInitEmergencyStockFont@@YAXPEBG@Z @ 0x1C00B9F44 (-vInitEmergencyStockFont@@YAXPEBG@Z.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00BA144 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C00BA5D0 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0111C24 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011C800 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011E354 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

void __fastcall FinishStockFontInit(__int64 c)
{
  unsigned int v1; // esi
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __m128i v8; // xmm2
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 FontIndirectW; // rax
  int v12; // edx
  const unsigned __int16 *v13; // rcx
  __int64 v14; // rcx
  INT a[4]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+30h] [rbp-50h]
  __int128 v17; // [rsp+40h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-30h]
  __int128 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+78h] [rbp-8h]
  __int64 v22; // [rsp+98h] [rbp+18h] BYREF

  v1 = c;
  if ( *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(c) + 32) + 23560LL)
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
    || UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread() )
  {
    v3 = Gre::Base::Globals(v2);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v22, *(struct HLFONT__ **)(*((_QWORD *)v3 + 396) + 136LL), 0LL);
    v5 = v22;
    if ( v22 )
    {
      *(_DWORD *)(v22 + 276) = -((*(_DWORD *)(v22 + 276) * v1 + 36) / 0x48);
      v6 = *(_OWORD *)(v5 + 292);
      v7 = *(_OWORD *)(v5 + 308);
      v21 = *(_DWORD *)(v5 + 364);
      v8 = *(__m128i *)(v5 + 276);
      v16 = v6;
      v9 = *(_OWORD *)(v5 + 324);
      v17 = v7;
      v10 = *(_OWORD *)(v5 + 340);
      v18 = v9;
      v20 = *(_QWORD *)(v5 + 356);
      *(_QWORD *)&a[2] = v8.m128i_i64[1];
      v19 = v10;
      a[0] = EngMulDiv(_mm_cvtsi128_si32(v8), 96, v1);
      a[1] = EngMulDiv(v8.m128i_i32[1], 96, v1);
      FontIndirectW = GreCreateFontIndirectW((__int64)a, 8u);
      v4 = *((_QWORD *)v3 + 397);
      *(_QWORD *)(v4 + 136) = FontIndirectW;
    }
    if ( v1 > 0x6C )
    {
      FinishStockFontInitInternal(
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
        0);
      v12 = 1;
    }
    else
    {
      if ( (*(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v4) + 32) + 19384LL) & 2) != 0 )
        FinishStockFontInitInternal(
          L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
          0);
      v12 = 0;
    }
    FinishStockFontInitInternal(
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\SmallFont",
      v12);
    vInitEmergencyStockFont(v13);
    v14 = *((_QWORD *)v3 + 396);
    if ( !*(_QWORD *)(v14 + 128) )
      bSetStockFont(*(void **)(v14 + 104), 16, 0);
    *((_QWORD *)v3 + 76) = *(_QWORD *)(*((_QWORD *)v3 + 396) + 104LL);
    if ( v5 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v5);
  }
}
