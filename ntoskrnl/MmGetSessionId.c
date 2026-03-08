/*
 * XREFs of MmGetSessionId @ 0x140299600
 * Callers:
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspBindProcessSessionToJob @ 0x140700678 (PspBindProcessSessionToJob.c)
 *     MmCreatePeb @ 0x140706A60 (MmCreatePeb.c)
 *     PspInitializeProcessSecurity @ 0x140709ED0 (PspInitializeProcessSecurity.c)
 *     PsGetThreadSessionId @ 0x14071F760 (PsGetThreadSessionId.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     PopInvokeWin32Callout @ 0x14073A52C (PopInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x140776B38 (ExCallSessionCallBack.c)
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 *     EtwpPsProvTraceProcess @ 0x1407E8D90 (EtwpPsProvTraceProcess.c)
 *     SeExchangePrimaryToken @ 0x14083FA34 (SeExchangePrimaryToken.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140980CF0 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140987528 (PopSendSuspendResumeApplicationNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionId(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0LL;
  v3 = 0;
  if ( *(_DWORD *)(v1 + 8) != -1 )
    return *(unsigned int *)(v1 + 8);
  return v3;
}
