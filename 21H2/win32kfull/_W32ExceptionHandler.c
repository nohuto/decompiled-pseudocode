/*
 * XREFs of _W32ExceptionHandler @ 0x1C025D4E4
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C0020FF0 (SfnINLPCREATESTRUCT.c)
 *     NtUserUnregisterClass @ 0x1C00696D0 (NtUserUnregisterClass.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0114454 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     SfnDWORDOPTINLPMSG @ 0x1C0139070 (SfnDWORDOPTINLPMSG.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall W32ExceptionHandler(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = RtlNtStatusToDosError(a1);
  UserSetLastError(v1, v2, v3);
  return 1LL;
}
