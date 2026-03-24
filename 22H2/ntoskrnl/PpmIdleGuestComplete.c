/*
 * XREFs of PpmIdleGuestComplete @ 0x140390060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HvlSetPlatformIdleState @ 0x1404F7F4C (HvlSetPlatformIdleState.c)
 */

struct _KPRCB *__fastcall PpmIdleGuestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KPRCB *result; // rax

  if ( a3 != -1 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(PpmPlatformStates + 32))(a1, 0xFFFFFFFFLL, a3);
    result = KeGetCurrentPrcb();
    if ( result->PowerState.Hypervisor >= ProcHypervisorPower && a3 == PpmDripsStateIndex )
      return (struct _KPRCB *)HvlSetPlatformIdleState(0LL);
  }
  return result;
}
