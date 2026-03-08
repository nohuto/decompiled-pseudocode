/*
 * XREFs of KiIntSteerInitPrcb @ 0x14037DC1C
 * Callers:
 *     KiInitPrcb @ 0x140A88DD8 (KiInitPrcb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerInitPrcb(__int64 a1)
{
  unsigned __int64 v1; // rax

  *(_DWORD *)(a1 + 11672) = 0;
  v1 = *(unsigned int *)(a1 + 68);
  *(_QWORD *)(a1 + 11664) = 1LL;
  if ( !KiIntSteerSlowestCyclesPerSec || v1 < KiIntSteerSlowestCyclesPerSec )
    KiIntSteerSlowestCyclesPerSec = v1;
  return 0LL;
}
