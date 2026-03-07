__int64 __fastcall WdfBindClientHelper(_WDF_BIND_INFO *BindInfo, unsigned int FxMajorVersion, __int64 FxMinorVersion)
{
  unsigned int Major; // eax
  unsigned int Size; // edx
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 Minor; // rdx

  Major = BindInfo->Version.Major;
  if ( Major != FxMajorVersion )
  {
    if ( WdfLdrDbgPrintOn )
      DbgPrint("Unsupported Major version %lu. Expect %lu\n", Major, FxMajorVersion);
    return 3221225485LL;
  }
  Size = BindInfo->Size;
  if ( BindInfo->Size == 48 )
  {
    Minor = BindInfo->Version.Minor;
    if ( (unsigned int)Minor > (unsigned int)FxMinorVersion )
    {
      if ( WdfLdrDbgPrintOn )
        goto LABEL_29;
      return 3221225485LL;
    }
    return 0LL;
  }
  if ( Size != 88 )
  {
    if ( WdfLdrDbgPrintOn )
      DbgPrint("Unrecognized bind info. Size is %lu\n", Size);
    return 3221225485LL;
  }
  v6 = BindInfo->Version.Minor;
  v7 = **(_DWORD **)&BindInfo[1].Size;
  if ( v7 > (unsigned int)v6 )
  {
    if ( WdfLdrDbgPrintOn )
      DbgPrint("Invalid bind info. Target version %lu, minimum required version %lu\n", v6, v7);
    return 3221225485LL;
  }
  if ( v7 <= (unsigned int)FxMinorVersion )
  {
    *(_BYTE *)BindInfo[1].Component = (unsigned int)v6 > (unsigned int)FxMinorVersion;
    if ( (unsigned int)v6 <= (unsigned int)FxMinorVersion )
    {
      if ( (unsigned int)v6 < (unsigned int)FxMinorVersion
        && (**(_DWORD **)&BindInfo[1].Version.Build > WdfVersion.StructCount
         || BindInfo->FuncCount > WdfVersion.FuncCount) )
      {
        if ( WdfLdrDbgPrintOn )
          DbgPrint(
            "Version mismatch detected\n"
            "function  count: client %lu, library %lu\n"
            "structure count: client %lu, library %lu\n",
            BindInfo->FuncCount,
            WdfVersion.FuncCount);
        return 3221225485LL;
      }
    }
    else
    {
      if ( **(_DWORD **)&BindInfo[1].Version.Build < WdfVersion.StructCount
        || BindInfo->FuncCount < WdfVersion.FuncCount )
      {
        if ( WdfLdrDbgPrintOn )
          DbgPrint(
            "Version mismatch detected when running on old framework\n"
            "function  count: client %lu, library %lu\n"
            "structure count: client %lu, library %lu\n",
            BindInfo->FuncCount,
            WdfVersion.FuncCount);
        return 3221225485LL;
      }
      BindInfo->FuncCount = WdfVersion.FuncCount;
      **(_DWORD **)&BindInfo[1].Version.Major = WdfVersion.FuncCount;
      *BindInfo[1].FuncTable = (void (__fastcall *)())&WdfVersion.Structures;
      **(_DWORD **)&BindInfo[1].Version.Build = WdfVersion.StructCount;
    }
    return 0LL;
  }
  if ( WdfLdrDbgPrintOn )
  {
    Minor = v7;
LABEL_29:
    DbgPrint("Unsupported Minor version %lu. Expect %lu or smaller\n", Minor, FxMinorVersion);
  }
  return 3221225485LL;
}
