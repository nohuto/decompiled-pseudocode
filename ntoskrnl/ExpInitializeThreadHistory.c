/*
 * XREFs of ExpInitializeThreadHistory @ 0x140203AF8
 * Callers:
 *     NtCreateWorkerFactory @ 0x14068A160 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall ExpInitializeThreadHistory(__int64 a1)
{
  *(_DWORD *)(a1 + 408) &= 0xFFFFFFF8;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_OWORD *)(a1 + 88) = 0LL;
}
