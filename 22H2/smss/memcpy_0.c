/*
 * XREFs of memcpy_0 @ 0x140011B67
 * Callers:
 *     SmpParseToken @ 0x140004B00 (SmpParseToken.c)
 *     SmpSaveRegistryValue_U @ 0x14000B840 (SmpSaveRegistryValue_U.c)
 *     SmpConfigureSharedSessionData @ 0x14000C490 (SmpConfigureSharedSessionData.c)
 *     SmpCopyListToSharedSection @ 0x14000C998 (SmpCopyListToSharedSection.c)
 *     SmpConfigureEnvironment @ 0x14000E2E0 (SmpConfigureEnvironment.c)
 *     SmpCheckFolderForRedirections @ 0x14000EE7C (SmpCheckFolderForRedirections.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14000F84C (BasepGetVolumeDosLetterNameFromNTName.c)
 *     FindFirstFileExW @ 0x140011438 (FindFirstFileExW.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x140014478 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpConfigureS0InitCmd @ 0x140016DB0 (SmpConfigureS0InitCmd.c)
 *     SmpRenameTargetFile @ 0x140017798 (SmpRenameTargetFile.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t MaxCount)
{
  return memcpy(a1, Src, MaxCount);
}
