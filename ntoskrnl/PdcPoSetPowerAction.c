/*
 * XREFs of PdcPoSetPowerAction @ 0x140994B70
 * Callers:
 *     <none>
 * Callees:
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoSetPowerAction(unsigned int *a1, unsigned int a2, _DWORD *a3, int a4, unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  PopAcquirePolicyLock((_DWORD)a1);
  PopExecutePowerAction(a1, a2, a3, a4, a5);
  return PopReleasePolicyLock(v10, v9, v11);
}
