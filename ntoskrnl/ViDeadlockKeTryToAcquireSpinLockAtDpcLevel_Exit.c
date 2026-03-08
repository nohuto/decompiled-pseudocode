/*
 * XREFs of ViDeadlockKeTryToAcquireSpinLockAtDpcLevel_Exit @ 0x140AD64C0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140AD3DAC (VfDeadlockAcquireResource.c)
 */

PVOID __fastcall ViDeadlockKeTryToAcquireSpinLockAtDpcLevel_Exit(__int64 a1)
{
  PVOID result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return VfDeadlockAcquireResource(*(LONG **)(a1 + 8), 5, (__int64)KeGetCurrentThread(), 1u, *(PVOID *)a1);
  return result;
}
