/*
 * XREFs of FinishStockFontInit @ 0x1C00C81E0
 * Callers:
 *     FinishStockFontReinit @ 0x1C00C8A00 (FinishStockFontReinit.c)
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00EE480 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C00131E4 (GreCreateFontIndirectW.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C0013268 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C001EC98 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00C5360 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00C83A0 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C00C86C0 (-bSetStockFont@@YAHPEAXHH@Z.c)
 */

void __fastcall FinishStockFontInit(unsigned int c)
{
  __int64 v2; // rbx
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __m128i v5; // xmm2
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // edx
  struct PFF *v9; // r15
  __int64 i; // rsi
  __int64 v11; // rdi
  INT a[4]; // [rsp+40h] [rbp-29h] BYREF
  __int128 v13; // [rsp+50h] [rbp-19h]
  __int128 v14; // [rsp+60h] [rbp-9h]
  __int128 v15; // [rsp+70h] [rbp+7h]
  __int128 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+98h] [rbp+2Fh]
  __int64 v19; // [rsp+D8h] [rbp+6Fh] BYREF
  struct PFF *v20; // [rsp+E0h] [rbp+77h] BYREF
  struct _FONTHASH **v21; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
    || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
  {
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v19, (struct HLFONT__ *)gahStockObjects[17], 0LL);
    v2 = v19;
    if ( v19 )
    {
      *(_DWORD *)(v19 + 276) = -((c * *(_DWORD *)(v19 + 276) + 36) / 0x48);
      v3 = *(_OWORD *)(v2 + 292);
      v4 = *(_OWORD *)(v2 + 308);
      v18 = *(_DWORD *)(v2 + 364);
      v5 = *(__m128i *)(v2 + 276);
      v13 = v3;
      v6 = *(_OWORD *)(v2 + 324);
      v14 = v4;
      v7 = *(_OWORD *)(v2 + 340);
      v15 = v6;
      v17 = *(_QWORD *)(v2 + 356);
      *(_QWORD *)&a[2] = v5.m128i_i64[1];
      v16 = v7;
      a[0] = EngMulDiv(_mm_cvtsi128_si32(v5), 96, c);
      a[1] = EngMulDiv(v5.m128i_i32[1], 96, c);
      gahStockObjects96[17] = (void *)GreCreateFontIndirectW((__int64)a, 8u);
    }
    if ( c > 0x6C )
    {
      FinishStockFontInitInternal(
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
        0);
      v8 = 1;
    }
    else
    {
      if ( (dword_1C0335DA0 & 2) != 0 )
        FinishStockFontInitInternal(
          L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
          0);
      v8 = 0;
    }
    FinishStockFontInitInternal(
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\SmallFont",
      v8);
    v20 = 0LL;
    LODWORD(v19) = 0;
    v21 = gpPFTPublic;
    if ( !gppfeMapperDefault )
    {
      if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                           (PUBLIC_PFTOBJ *)&v21,
                           L"\\SystemRoot\\System32\\winsrv.dll",
                           (unsigned int *)&v19,
                           2u,
                           &v20,
                           0LL,
                           0) )
      {
        if ( (_DWORD)v19 )
        {
          v9 = v20;
          if ( v20 )
          {
            for ( i = 0LL; (unsigned int)i < (unsigned int)v19; i = (unsigned int)(i + 1) )
            {
              if ( gppfeMapperDefault )
                break;
              v11 = *((_QWORD *)v9 + i + 27);
              if ( v11
                && !_wcsicmp(
                      (const wchar_t *)(*(_QWORD *)(v11 + 32) + *(int *)(*(_QWORD *)(v11 + 32) + 16LL)),
                      L"SYSTEM") )
              {
                gppfeMapperDefault = (struct PFE *)v11;
              }
            }
          }
        }
      }
    }
    if ( !gahStockObjects[16] )
      bSetStockFont(gahStockObjects[13], 16, 0);
    DcAttrDefault[37] = gahStockObjects[13];
    if ( v2 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v2);
  }
}
