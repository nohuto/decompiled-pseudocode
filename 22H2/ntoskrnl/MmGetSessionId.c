/*
 * XREFs of MmGetSessionId @ 0x140252DB0
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 *     MmCreatePeb @ 0x1406121F8 (MmCreatePeb.c)
 *     PsGetThreadSessionId @ 0x140612EE0 (PsGetThreadSessionId.c)
 *     PspBindProcessSessionToJob @ 0x1406139C8 (PspBindProcessSessionToJob.c)
 *     PsInvokeWin32Callout @ 0x14061B5A0 (PsInvokeWin32Callout.c)
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     ExpGetProcessInformation @ 0x14063E980 (ExpGetProcessInformation.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     ExCallSessionCallBack @ 0x140660AC8 (ExCallSessionCallBack.c)
 *     PopInvokeWin32Callout @ 0x1406F45B8 (PopInvokeWin32Callout.c)
 *     PspInitializeProcessSecurity @ 0x140703CD0 (PspInitializeProcessSecurity.c)
 *     EtwpStartLogger @ 0x140711A40 (EtwpStartLogger.c)
 *     SeExchangePrimaryToken @ 0x1407BC404 (SeExchangePrimaryToken.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C4920 (MmGetSessionMappedViewInformation.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1408E39FC (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopInputDisabled @ 0x1408F515C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x14093E350 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140949FB0 (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionId(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}
