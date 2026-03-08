/*
 * XREFs of RtlGetVersion @ 0x1407A1380
 * Callers:
 *     RtlVerifyVersionInfo @ 0x140380780 (RtlVerifyVersionInfo.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403ED7C0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SdbpMatchOsVersion @ 0x1407A2004 (SdbpMatchOsVersion.c)
 *     _SysCtxOpenMachine @ 0x1408520D0 (_SysCtxOpenMachine.c)
 *     Win7RtlGetVersion @ 0x140974F30 (Win7RtlGetVersion.c)
 *     Win81RtlGetVersion @ 0x140975010 (Win81RtlGetVersion.c)
 *     Win8RtlGetVersion @ 0x1409750F0 (Win8RtlGetVersion.c)
 *     EtwpTraceSystemInitialization @ 0x140B41904 (EtwpTraceSystemInitialization.c)
 *     PopEtInit @ 0x140B678A0 (PopEtInit.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140303E90 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x1407A1440 (RtlGetSuiteMask.c)
 */

NTSTATUS __stdcall RtlGetVersion(PRTL_OSVERSIONINFOW lpVersionInformation)
{
  __int64 v1; // rdx
  ULONG v3; // eax
  __int16 v4; // ax
  bool v5; // zf
  __int16 SuiteMask; // ax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&lpVersionInformation->dwMajorVersion = 10LL;
  lpVersionInformation->dwBuildNumber = (unsigned __int16)NtBuildNumber;
  v3 = lpVersionInformation->dwOSVersionInfoSize - 284;
  v8 = 0;
  lpVersionInformation->dwPlatformId = 2;
  if ( (v3 & 0xFFFFFFF7) == 0 )
  {
    LOWORD(lpVersionInformation[1].dwOSVersionInfoSize) = BYTE1(CmNtCSDVersion);
    v4 = (unsigned __int8)CmNtCSDVersion;
    LOWORD(lpVersionInformation[1].dwMajorVersion) = 0;
    v5 = (_DWORD)InitializationPhase == 0;
    HIWORD(lpVersionInformation[1].dwOSVersionInfoSize) = v4;
    BYTE2(lpVersionInformation[1].dwMajorVersion) = 0;
    if ( !v5 )
    {
      if ( RtlGetNtProductType(&v8, v1) )
        BYTE2(lpVersionInformation[1].dwMajorVersion) = v8;
      SuiteMask = RtlGetSuiteMask();
      v5 = lpVersionInformation->dwOSVersionInfoSize == 292;
      LOWORD(lpVersionInformation[1].dwMajorVersion) = SuiteMask;
      if ( v5 )
        lpVersionInformation[1].dwMinorVersion = RtlGetSuiteMask() & 0x1FFFF;
    }
    HIBYTE(lpVersionInformation[1].dwMajorVersion) = 0;
  }
  return 0;
}
