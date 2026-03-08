/*
 * XREFs of ViDeadlockExTryToAcquireFastMutex_Exit @ 0x140AD6130
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140AD3DAC (VfDeadlockAcquireResource.c)
 */

PVOID __fastcall ViDeadlockExTryToAcquireFastMutex_Exit(__int64 a1)
{
  PVOID result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return VfDeadlockAcquireResource(*(LONG **)(a1 + 8), 3, (__int64)KeGetCurrentThread(), 1u, *(PVOID *)a1);
  return result;
}
