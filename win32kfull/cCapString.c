/*
 * XREFs of cCapString @ 0x1C0117F80
 * Callers:
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C0003B40 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0003EB0 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     hfontCreate @ 0x1C0027050 (hfontCreate.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B9FA4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00BA638 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1C00D0A54 (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     vProcessEntry @ 0x1C010F5B8 (vProcessEntry.c)
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C01157C4 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     DrawFrameControl @ 0x1C0116938 (DrawFrameControl.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C01175B4 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C0117D44 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C01183E8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     bAddFlEntry @ 0x1C0119070 (bAddFlEntry.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C011B3A0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     FontAssocDefaultRoutine @ 0x1C02A0D90 (FontAssocDefaultRoutine.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02D7F24 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1C03B8900 (QueryRegistryFontMapperFamilyFallbackListRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cCapString(WCHAR *a1, WCHAR *a2, int a3)
{
  WCHAR *v4; // rbx
  WCHAR *v5; // r9
  __int64 v6; // rbx
  __int64 result; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  v4 = a2;
  v5 = &a2[a3 - 1];
  if ( a2 < v5 )
  {
    do
    {
      if ( !*v4 )
        break;
      ++v4;
    }
    while ( v4 < v5 );
  }
  v6 = v4 - a2;
  if ( (_DWORD)v6 )
  {
    SourceString.Buffer = a2;
    SourceString.MaximumLength = 2 * a3;
    DestinationString.MaximumLength = 2 * a3;
    SourceString.Length = 2 * v6;
    DestinationString.Buffer = a1;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
  }
  result = (unsigned int)v6;
  a1[(int)v6] = 0;
  return result;
}
