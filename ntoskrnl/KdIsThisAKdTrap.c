/*
 * XREFs of KdIsThisAKdTrap @ 0x140AB2ED4
 * Callers:
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 * Callees:
 *     <none>
 */

bool __fastcall KdIsThisAKdTrap(__int64 a1)
{
  return (*(_DWORD *)a1 == -2147483645 || *(_DWORD *)a1 == 1073741855)
      && *(_DWORD *)(a1 + 24)
      && *(_QWORD *)(a1 + 32) != 0LL;
}
