/*
 * XREFs of ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x18007ADFC
 * Callers:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180010250 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x1800102C0 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180018BA0 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 * Callees:
 *     <none>
 */

struct CortanaFeatureConfiguration::FeatureBehaviorMap *__fastcall CortanaFeatureConfiguration::getSharedFeatureTable(
        CortanaFeatureConfiguration *this)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  __int128 v30; // [rsp+0h] [rbp-20h]

  if ( !byte_18064FACD )
  {
    qword_18064FB90 = (__int64)L"ImmersiveSearchTheme";
    *((_QWORD *)&v30 + 1) = 0x100000001LL;
    qword_18064FBA8 = (__int64)L"ImageSnipSearch";
    qword_18064FBC0 = (__int64)L"PWILOActivityUploadEnabled";
    qword_18064FBD8 = (__int64)L"SearchAndCortanaSplit_WideSearchBoxWidth";
    qword_18064FBF0 = (__int64)L"SearchBoxBorderColor";
    qword_18064FC08 = (__int64)L"SearchBoxBorderColorInDarkMode";
    qword_18064FC20 = (__int64)L"SearchBoxBorderColorInDarkModeLightApp";
    qword_18064FC38 = (__int64)L"SearchBoxBorderColorOnHover";
    qword_18064FC50 = (__int64)L"SearchBoxBorderColorOnHoverInDarkMode";
    qword_18064FC68 = (__int64)L"SearchBoxBorderColorOnHoverInDarkModeLightApp";
    qword_18064FC80 = (__int64)L"SearchBoxBorderColorShouldMatchTaskbar";
    qword_18064FC98 = (__int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkMode";
    qword_18064FCB0 = (__int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkModeLightApp";
    qword_18064FCC8 = (__int64)L"SearchBoxBorderThickness";
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessInDarkMode";
    dword_18064FBFC = 855638016;
    dword_18064FC2C = 855638016;
    xmmword_18064FCE0 = v30;
    dword_18064FB98 = 1;
    dword_18064FB9C = 3;
    qword_18064FBA0 = 0LL;
    dword_18064FBB0 = 0;
    dword_18064FBB4 = 1;
    qword_18064FBB8 = 0LL;
    dword_18064FBC8 = 0;
    dword_18064FBCC = 1;
    qword_18064FBD0 = 0LL;
    qword_18064FBE0 = 0LL;
    qword_18064FBE8 = 0LL;
    dword_18064FBF8 = 1;
    qword_18064FC00 = 0LL;
    dword_18064FC10 = 1;
    dword_18064FC14 = 872415231;
    qword_18064FC18 = 0LL;
    dword_18064FC28 = 1;
    qword_18064FC30 = 0LL;
    dword_18064FC40 = 1;
    dword_18064FC44 = 1258291200;
    qword_18064FC48 = 0LL;
    dword_18064FC58 = 1;
    dword_18064FC5C = 1275068415;
    qword_18064FC60 = 0LL;
    dword_18064FC70 = 1;
    dword_18064FC74 = 1258291200;
    qword_18064FC78 = 0LL;
    qword_18064FC88 = 0LL;
    qword_18064FC90 = 0LL;
    qword_18064FCA0 = 0LL;
    qword_18064FCA8 = 0LL;
    qword_18064FCB8 = 0LL;
    qword_18064FCC0 = 0LL;
    dword_18064FCD0 = 1;
    dword_18064FCD4 = 1;
    qword_18064FCD8 = 0LL;
    qword_18064FCF0 = 0LL;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessInDarkModeLightApp";
    v2 = v30;
    *((_QWORD *)&v30 + 1) = 0x200000001LL;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessOnHover";
    xmmword_18064FCF8 = v2;
    v3 = v30;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessOnHoverInDarkMode";
    qword_18064FD08 = 0LL;
    xmmword_18064FD10 = v3;
    v4 = v30;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessOnHoverInDarkModeLightApp";
    xmmword_18064FD28 = v4;
    v5 = v30;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessOnAppVisible";
    qword_18064FD20 = 0LL;
    xmmword_18064FD40 = v5;
    v6 = v30;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessOnAppVisibleInDarkMode";
    xmmword_18064FD58 = v6;
    v7 = v30;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessOnAppVisibleInDarkModeLightApp";
    qword_18064FD38 = 0LL;
    xmmword_18064FD70 = v7;
    v8 = v30;
    *(_QWORD *)&v30 = L"SearchBoxBorderThicknessThreshold";
    HIDWORD(v30) = 10;
    qword_18064FD50 = 0LL;
    qword_18064FD68 = 0LL;
    qword_18064FD80 = 0LL;
    xmmword_18064FD88 = v8;
    qword_18064FD98 = 0LL;
    xmmword_18064FDA0 = v30;
    qword_18064FDB0 = 0LL;
    xmmword_18064FDB8 = (unsigned __int64)L"SearchBoxBorderOnlyOnTop";
    qword_18064FDC8 = 0LL;
    xmmword_18064FDD0 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkMode";
    *((_QWORD *)&v30 + 1) = 0x100000000LL;
    xmmword_18064FDE8 = (unsigned __int64)L"SearchBoxBorderOnlyOnTopInDarkModeLightApp";
    *(_QWORD *)&v30 = L"SearchBoxIbeamPointerOnHover";
    qword_18064FDE0 = 0LL;
    xmmword_18064FE00 = (unsigned __int64)L"SearchBoxDragAndDrop";
    v9 = v30;
    *(_QWORD *)&v30 = L"SearchBoxText";
    *((_QWORD *)&v30 + 1) = 2LL;
    xmmword_18064FE18 = v9;
    v10 = v30;
    *(_QWORD *)&v30 = L"SearchBoxText_NTP";
    qword_18064FDF8 = 0LL;
    xmmword_18064FE30 = v10;
    v11 = v30;
    *(_QWORD *)&v30 = L"SearchBoxWidth";
    *((_QWORD *)&v30 + 1) = 0x14000000001LL;
    xmmword_18064FE48 = v11;
    v12 = v30;
    *(_QWORD *)&v30 = L"SearchBoxWideWidth";
    qword_18064FE10 = 0LL;
    HIDWORD(v30) = 344;
    xmmword_18064FE60 = v12;
    v13 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyBackground";
    *((_QWORD *)&v30 + 1) = 0x6400000001LL;
    qword_18064FE28 = 0LL;
    qword_18064FE40 = 0LL;
    qword_18064FE58 = 0LL;
    xmmword_18064FE78 = v13;
    v14 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyBackgroundInDarkMode";
    qword_18064FE70 = 0LL;
    xmmword_18064FE90 = v14;
    HIDWORD(v30) = 20;
    qword_18064FE88 = 0LL;
    xmmword_18064FEA8 = v30;
    qword_18064FEA0 = 0LL;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyBackgroundInDarkModeLightApp";
    *((_QWORD *)&v30 + 1) = 0x5F00000001LL;
    v15 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyHighlight";
    HIDWORD(v30) = 100;
    xmmword_18064FEC0 = v15;
    v16 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyHighlightInDarkMode";
    *((_QWORD *)&v30 + 1) = 0x1900000001LL;
    qword_18064FEB8 = 0LL;
    xmmword_18064FF68 = v16;
    v17 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyHighlightInDarkModeLightApp";
    HIDWORD(v30) = 100;
    qword_18064FED0 = 0LL;
    xmmword_18064FF80 = v17;
    v18 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyForeground";
    *((_QWORD *)&v30 + 1) = 0x5200000001LL;
    xmmword_18064FF98 = v18;
    v19 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyForegroundInDarkMode";
    qword_18064FF78 = 0LL;
    xmmword_18064FED8 = v19;
    v20 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyForegroundInDarkModeLightApp";
    qword_18064FF90 = 0LL;
    *((_QWORD *)&v30 + 1) = 0x5200000001LL;
    xmmword_18064FEF0 = v20;
    v21 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyForegroundHighlight";
    qword_18064FFA8 = 0LL;
    qword_18064FEE8 = 0LL;
    xmmword_18064FF08 = v21;
    v22 = v30;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyForegroundHighlightInDarkMode";
    qword_18064FF00 = 0LL;
    qword_18064FF18 = 0LL;
    xmmword_18064FF20 = v22;
    *((_QWORD *)&v30 + 1) = 0x5200000001LL;
    v23 = v30;
    qword_18064FF30 = 0LL;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyForegroundHighlightInDarkModeLightApp";
    xmmword_18064FF38 = v23;
    v24 = v30;
    *((_QWORD *)&v30 + 1) = 0x100000000LL;
    qword_18064FF48 = 0LL;
    xmmword_18064FF50 = v24;
    *(_QWORD *)&v30 = L"SearchBoxTransparencyTextLightInDarkMode";
    qword_18064FF60 = 0LL;
    xmmword_18064FFB0 = (unsigned __int64)L"SearchBoxTransparencyTextLight";
    xmmword_18064FFC8 = v30;
    *((_QWORD *)&v30 + 1) = 0x100000000LL;
    qword_18064FFC0 = 0LL;
    xmmword_18064FFE0 = (unsigned __int64)L"SearchBoxTransparencyTextLightInDarkModeLightApp";
    *(_QWORD *)&v30 = L"SearchBoxTransparencyTextLightHighlightInDarkMode";
    xmmword_18064FFF8 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlight";
    qword_18064FFD8 = 0LL;
    xmmword_180650010 = v30;
    *(_QWORD *)&v30 = L"WideQFDelta";
    *((_QWORD *)&v30 + 1) = 1LL;
    qword_18064FFF0 = 0LL;
    qword_180650008 = 0LL;
    qword_180650020 = 0LL;
    xmmword_180650028 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlightInDarkModeLightApp";
    v25 = v30;
    *(_QWORD *)&v30 = L"WideAtStartupDelta";
    qword_180650038 = 0LL;
    xmmword_180650100 = v25;
    HIDWORD(v30) = 440;
    qword_180650110 = 0LL;
    xmmword_1806500D0 = v30;
    qword_1806500E0 = 0LL;
    *(_QWORD *)&v30 = L"WideAtStartupDeltaMinWidthThreshold";
    HIDWORD(v30) = 1024;
    v26 = v30;
    *(_QWORD *)&v30 = L"SearchBoxUseSearchIconAtRest";
    *((_QWORD *)&v30 + 1) = 0x100000000LL;
    xmmword_1806500E8 = v26;
    v27 = v30;
    *(_QWORD *)&v30 = L"SearchButtonUseSearchIcon";
    qword_1806500F8 = 0LL;
    xmmword_180650040 = v27;
    xmmword_180650058 = v30;
    *(_QWORD *)&v30 = L"StartUISearchSuggestion";
    qword_180650050 = 0LL;
    *((_QWORD *)&v30 + 1) = 1LL;
    xmmword_180650070 = (unsigned __int64)L"SearchBoxForceOff";
    v28 = v30;
    *(_QWORD *)&v30 = L"StartUISearchUpsellHeaderText";
    *((_QWORD *)&v30 + 1) = 2LL;
    qword_180650068 = 0LL;
    qword_180650080 = 0LL;
    xmmword_180650088 = v28;
    v29 = v30;
    *(_QWORD *)&v30 = L"StartUISearchUpsellHeaderTextLanguage";
    qword_180650098 = 0LL;
    xmmword_1806500A0 = v29;
    qword_1806500B0 = 0LL;
    xmmword_1806500B8 = v30;
    byte_18064FACD = 1;
    qword_1806500C8 = 0LL;
  }
  return (struct CortanaFeatureConfiguration::FeatureBehaviorMap *)&qword_18064FB90;
}
