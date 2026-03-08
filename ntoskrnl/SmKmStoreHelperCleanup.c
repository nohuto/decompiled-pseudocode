/*
 * XREFs of SmKmStoreHelperCleanup @ 0x1402E6C34
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E69A8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     SmKmStoreHelperSendCommand @ 0x1402E6C84 (SmKmStoreHelperSendCommand.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

LONG_PTR __fastcall SmKmStoreHelperCleanup(PVOID *a1)
{
  LONG_PTR result; // rax

  if ( *a1 )
  {
    SmKmStoreHelperSendCommand(a1, 1LL, 0LL, 1LL);
    KeWaitForSingleObject(*a1, Executive, 0, 0, 0LL);
    return ObfDereferenceObjectWithTag(*a1, 0x746C6644u);
  }
  return result;
}
