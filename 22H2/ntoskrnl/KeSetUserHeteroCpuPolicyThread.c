/*
 * XREFs of KeSetUserHeteroCpuPolicyThread @ 0x14056F134
 * Callers:
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 * Callees:
 *     KeQueryHeteroCpuPolicyThread @ 0x14056EEA0 (KeQueryHeteroCpuPolicyThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577A9C (KiSetHeteroPolicyThread.c)
 */

__int64 __fastcall KeSetUserHeteroCpuPolicyThread(__int64 a1, unsigned int a2)
{
  unsigned int HeteroCpuPolicyThread; // ebx

  HeteroCpuPolicyThread = KeQueryHeteroCpuPolicyThread(a1, 1);
  KiSetHeteroPolicyThread(a1, a2);
  return HeteroCpuPolicyThread;
}
