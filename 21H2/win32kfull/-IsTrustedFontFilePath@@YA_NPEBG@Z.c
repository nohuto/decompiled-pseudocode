/*
 * XREFs of ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C000FF9C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00134A0 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

bool __fastcall IsTrustedFontFilePath(PCWSTR SourceString)
{
  __int64 v2; // rcx
  bool v3; // bl
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(gpxsGlobals + 16LL);
  if ( !v2 )
    return 0;
  v6 = *(_QWORD *)(gpxsGlobals + 16LL);
  GreAcquireSemaphore(v2);
  DestinationString = 0LL;
  RtlInitUnicodeStringEx(&DestinationString, SourceString);
  v3 = RtlLookupElementGenericTableAvl(*(PRTL_AVL_TABLE *)(gpxsGlobals + 24LL), &DestinationString) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  return v3;
}
