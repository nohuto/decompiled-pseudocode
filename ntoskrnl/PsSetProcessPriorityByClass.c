/*
 * XREFs of PsSetProcessPriorityByClass @ 0x14076EC80
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     PspSetProcessPriorityByClass @ 0x1402E2DD8 (PspSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x14076ECB0 (PspSetProcessForegroundBackgroundRequest.c)
 */

__int64 __fastcall PsSetProcessPriorityByClass(__int64 a1, __int64 a2)
{
  if ( (_DWORD)a2 == 2 )
    return PspSetProcessPriorityByClass(a1, 2);
  LOBYTE(a2) = (_DWORD)a2 == 1;
  return PspSetProcessForegroundBackgroundRequest(a1, a2, 0LL);
}
