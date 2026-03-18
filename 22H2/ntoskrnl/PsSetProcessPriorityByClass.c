/*
 * XREFs of PsSetProcessPriorityByClass @ 0x1407C08B0
 * Callers:
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     PspSetProcessPriorityByClass @ 0x14034FB38 (PspSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x1407C08E0 (PspSetProcessForegroundBackgroundRequest.c)
 */

__int64 __fastcall PsSetProcessPriorityByClass(__int64 a1, __int64 a2)
{
  if ( (_DWORD)a2 == 2 )
    return PspSetProcessPriorityByClass(a1, 2);
  LOBYTE(a2) = (_DWORD)a2 == 1;
  return PspSetProcessForegroundBackgroundRequest(a1, a2, 0LL);
}
