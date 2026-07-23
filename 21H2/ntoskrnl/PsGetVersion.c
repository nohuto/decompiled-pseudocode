/*
 * XREFs of PsGetVersion @ 0x14037F5F0
 * Callers:
 *     Win7PsGetVersion @ 0x1408C19A0 (Win7PsGetVersion.c)
 *     Win81PsGetVersion @ 0x1408C1A80 (Win81PsGetVersion.c)
 *     Win8PsGetVersion @ 0x1408C1B60 (Win8PsGetVersion.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsGetVersion(
        PULONG MajorVersion,
        PULONG MinorVersion,
        PULONG BuildNumber,
        PUNICODE_STRING CSDVersion)
{
  if ( MajorVersion )
    *MajorVersion = 10;
  if ( MinorVersion )
    *MinorVersion = 0;
  if ( BuildNumber )
    *BuildNumber = (unsigned __int16)NtBuildNumber;
  if ( CSDVersion )
    *CSDVersion = CmCSDVersionString;
  return (NtBuildNumber & 0xF0000000) == -1073741824;
}
