/*
 * XREFs of ExpInitializeThreadHistory @ 0x14031E09C
 * Callers:
 *     NtCreateWorkerFactory @ 0x1407860A0 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall ExpInitializeThreadHistory(__int64 a1)
{
  *(_DWORD *)(a1 + 408) &= 0xFFFFFFF8;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_OWORD *)(a1 + 88) = 0LL;
}
