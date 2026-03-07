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
