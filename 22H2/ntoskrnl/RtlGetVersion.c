/*
 * XREFs of RtlGetVersion @ 0x14068F5D0
 * Callers:
 *     RtlVerifyVersionInfo @ 0x14037D230 (RtlVerifyVersionInfo.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403EB92C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SdbpMatchOsVersion @ 0x140754308 (SdbpMatchOsVersion.c)
 *     _SysCtxOpenMachine @ 0x1407A4D24 (_SysCtxOpenMachine.c)
 *     Win7RtlGetVersion @ 0x1408C1920 (Win7RtlGetVersion.c)
 *     Win81RtlGetVersion @ 0x1408C1A00 (Win81RtlGetVersion.c)
 *     Win8RtlGetVersion @ 0x1408C1AE0 (Win8RtlGetVersion.c)
 *     EtwpTraceSystemInitialization @ 0x140A41CF8 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     RtlGetNtProductType @ 0x14031B310 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x14068F690 (RtlGetSuiteMask.c)
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
