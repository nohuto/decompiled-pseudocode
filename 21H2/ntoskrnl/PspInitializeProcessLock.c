/*
 * XREFs of PspInitializeProcessLock @ 0x140580FC0
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall PspInitializeProcessLock(__int64 a1)
{
  *(_QWORD *)(a1 + 1080) = 0LL;
}
