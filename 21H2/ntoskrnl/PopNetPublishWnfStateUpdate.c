/*
 * XREFs of PopNetPublishWnfStateUpdate @ 0x14085CEF8
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403DA240 (PopNetEvaluationWorkerCallback.c)
 *     PopNetInitialize @ 0x140B02560 (PopNetInitialize.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopNetPublishWnfStateUpdate(char a1)
{
  int v1; // eax
  __int64 result; // rax
  unsigned __int64 v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0xFFFFFFFF00000000uLL;
  if ( a1 )
    v1 = 3;
  else
    v1 = 1;
  LODWORD(v3) = v1;
  result = ZwUpdateWnfStateData((__int64)&WNF_SEB_NETWORK_CONNECTIVITY_IN_STANDBY, (__int64)&v3);
  PopNetStandbyStatePublished = 1;
  return result;
}
