/*
 * XREFs of ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C011CA84
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsTrustedFontFilePath(PCWSTR SourceString)
{
  __int64 v2; // rbx
  bool v3; // di
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(gpxsGlobals + 16LL);
  if ( !v2 )
    return 0;
  GreAcquireSemaphore(*(_QWORD *)(gpxsGlobals + 16LL));
  DestinationString = 0LL;
  RtlInitUnicodeStringEx(&DestinationString, SourceString);
  v3 = RtlLookupElementGenericTableAvl(*(PRTL_AVL_TABLE *)(gpxsGlobals + 24LL), &DestinationString) != 0LL;
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(v2);
  return v3;
}
