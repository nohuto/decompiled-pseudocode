/*
 * XREFs of ??B?$RedirectedFieldfsHooks@K@tagKERNELDESKTOPINFO@@QEBAKXZ @ 0x1C01AAB0C
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDESKTOPINFO::RedirectedFieldfsHooks<unsigned long>::operator unsigned long(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 - 32) + 16LL);
}
