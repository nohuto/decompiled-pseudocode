/*
 * XREFs of PpmIdleGuestPreExecute @ 0x140390880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvlSetPlatformIdleState @ 0x1404F824C (HvlSetPlatformIdleState.c)
 */

__int64 __fastcall PpmIdleGuestPreExecute(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD); // rax

  if ( a3 == -1 )
    return 0;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(PpmPlatformStates + 24);
  if ( !v6 )
  {
    v4 = 0;
LABEL_8:
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower && a3 == PpmDripsStateIndex )
      HvlSetPlatformIdleState(1LL);
    return v4;
  }
  result = v6(a1, 0xFFFFFFFFLL, a3);
  v4 = result;
  if ( (int)result >= 0 )
    goto LABEL_8;
  return result;
}
