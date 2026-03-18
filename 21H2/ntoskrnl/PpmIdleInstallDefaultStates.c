/*
 * XREFs of PpmIdleInstallDefaultStates @ 0x1403D1850
 * Callers:
 *     <none>
 * Callees:
 *     PpmInstallNewIdleStates @ 0x1403D1870 (PpmInstallNewIdleStates.c)
 */

__int64 __fastcall PpmIdleInstallDefaultStates(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = a1 + 33600;
  return PpmInstallNewIdleStates();
}
