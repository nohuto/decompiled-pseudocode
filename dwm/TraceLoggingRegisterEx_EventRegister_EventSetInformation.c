/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x14000DA0C
 * Callers:
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D484 (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 * Callees:
 *     __security_check_cookie @ 0x140005510 (__security_check_cookie.c)
 */

__int64 TraceLoggingRegisterEx_EventRegister_EventSetInformation()
{
  signed int v0; // eax
  unsigned int v1; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  ProviderId = (GUID)*((_OWORD *)off_140016008 - 1);
  if ( RegHandle )
    __fastfail(5u);
  xmmword_140016028 = 0LL;
  v0 = EventRegister(&ProviderId, tlgEnableCallback, &dword_140016000, &RegHandle);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 > 0 )
      return (unsigned __int16)v0 | 0x80070000;
  }
  else
  {
    EventSetInformation(
      RegHandle,
      2LL,
      off_140016008,
      *(unsigned __int16 *)off_140016008,
      *(_QWORD *)&ProviderId.Data1,
      *(_QWORD *)ProviderId.Data4);
  }
  return v1;
}
