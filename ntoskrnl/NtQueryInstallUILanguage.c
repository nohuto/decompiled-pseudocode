/*
 * XREFs of NtQueryInstallUILanguage @ 0x140749760
 * Callers:
 *     ExpSetPendingUILanguage @ 0x140749238 (ExpSetPendingUILanguage.c)
 *     NtQueryDefaultUILanguage @ 0x140749740 (NtQueryDefaultUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140843870 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A72CB8 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtQueryInstallUILanguage(_WORD *a1)
{
  __int64 v2; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v2 = (__int64)a1;
    *(_WORD *)v2 = *(_WORD *)v2;
  }
  *a1 = PsInstallUILanguageId;
  return 0LL;
}
