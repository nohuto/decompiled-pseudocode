/*
 * XREFs of EtwpIsProcessZombie @ 0x140792A24
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1407925D0 (EtwpProcessEnumCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093EBB0 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpIsProcessZombie(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 4) != 0
      && *(_DWORD *)(a1 + 4)
      && !*(_DWORD *)(a1 + 1520)
      && *(_QWORD *)(a1 + 48) == a1 + 48;
}
