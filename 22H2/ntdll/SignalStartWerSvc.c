/*
 * XREFs of SignalStartWerSvc @ 0x1800DD558
 * Callers:
 *     SendMessageToWERService @ 0x1800DD34C (SendMessageToWERService.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x180061EA0 (EtwEventWriteNoRegistration.c)
 *     NtQueryWnfStateNameInformation @ 0x1800A0170 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1800A0ED0 (ZwUpdateWnfStateData.c)
 */

__int64 SignalStartWerSvc()
{
  unsigned int v0; // ebx
  int v1; // edi
  __int128 v3; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+60h] [rbp+8h]

  v0 = 0;
  v1 = 0;
  if ( (int)NtQueryWnfStateNameInformation() >= 0 && v4 )
    v1 = (int)ZwUpdateWnfStateData() >= 0;
  v3 = 0LL;
  if ( !(unsigned int)EtwEventWriteNoRegistration((__int64)&`SignalStartWerSvc'::`2'::WerSvcTriggerGuid, &v3, 0, 0LL) )
    ++v1;
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
