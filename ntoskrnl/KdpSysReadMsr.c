/*
 * XREFs of KdpSysReadMsr @ 0x140565B18
 * Callers:
 *     KdSystemDebugControl @ 0x14096F180 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140AAD824 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
