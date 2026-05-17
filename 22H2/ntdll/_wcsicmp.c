/*
 * XREFs of _wcsicmp @ 0x18008E340
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     LdrRscIsTypeExist @ 0x180034C60 (LdrRscIsTypeExist.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003A494 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x18003B9AC (RtlpMuiRegGetStringIndexInPool.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003BD04 (RtlpAddNeutralsToMergedList.c)
 *     RtlpLangNameInMultiSzString @ 0x18003C268 (RtlpLangNameInMultiSzString.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003D0E0 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlGetFileMUIPath @ 0x1800468F0 (RtlGetFileMUIPath.c)
 *     LdrpResSearchResourceMappedFile @ 0x180055BD4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180058CAC (LdrpVerifyAlternateResourceModuleEx.c)
 *     RtlpHashStringToAtom @ 0x1800597B0 (RtlpHashStringToAtom.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800748D0 (LdrRemoveLoadAsDataTable.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800DA6F0 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800DA7CC (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800DAA94 (AVrfpFindClosestThunkDuplicate.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DAF60 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DB4A0 (AVrfpVerifierStopInitialize.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFB00 (RtlpCleanupRegistryKeys.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x180103DC0 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1801041A0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180105160 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     PsspWalkHandleTable @ 0x1801161E4 (PsspWalkHandleTable.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // r10
  signed __int64 v3; // r9
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8

  v2 = String2;
  v3 = (char *)String1 - (char *)String2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2++;
    v6 = v4 + 32;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned __int16)(v5 - 65) > 0x19u )
      v7 = v5;
  }
  while ( v6 && v6 == v7 );
  return v6 - v7;
}
