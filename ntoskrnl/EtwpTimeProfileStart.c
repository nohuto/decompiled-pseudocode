/*
 * XREFs of EtwpTimeProfileStart @ 0x1409E3D58
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140786150 (EtwpEnableKernelTrace.c)
 *     EtwTimeProfileReset @ 0x140860A78 (EtwTimeProfileReset.c)
 * Callees:
 *     KeStartProfile @ 0x140571A6C (KeStartProfile.c)
 *     KeInitializeProfileCallback @ 0x140971F68 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x140972128 (KeSetIntervalProfile.c)
 */

__int64 EtwpTimeProfileStart()
{
  KeSetIntervalProfile(EtwpProfileInterval, 0);
  KeInitializeProfileCallback(EtwpProfileObject, (__int64)EtwpProfileInterrupt, 0LL, 0);
  return KeStartProfile((ULONG_PTR)EtwpProfileObject);
}
