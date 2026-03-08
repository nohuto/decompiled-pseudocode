/*
 * XREFs of PspSetProcessPriorityByClass @ 0x1402E2DD8
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x1406FF17C (PspApplyJobLimitsToProcess.c)
 *     PsSetProcessPriorityByClass @ 0x14076EC80 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x14076ECB0 (PspSetProcessForegroundBackgroundRequest.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x1402E2E30 (KeSetPriorityAndQuantumProcess.c)
 *     PspComputeQuantumAndPriority @ 0x140709DDC (PspComputeQuantumAndPriority.c)
 */

__int64 __fastcall PspSetProcessPriorityByClass(int a1, int a2)
{
  int v3; // eax
  int v4; // r8d
  char v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v6 = 0;
  v8 = 0;
  v3 = PspComputeQuantumAndPriority(a1, a2, (unsigned int)&v6, (unsigned int)&v8, (__int64)&v7);
  LOBYTE(v4) = v6;
  return KeSetPriorityAndQuantumProcess(a1, v3, v4, v8, v7);
}
