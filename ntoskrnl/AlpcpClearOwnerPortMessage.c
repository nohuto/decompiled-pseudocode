/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x140716D48
 * Callers:
 *     AlpcpCancelMessage @ 0x1407141F0 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140715F0C (AlpcpDispatchReplyToPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140716318 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407172DC (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall AlpcpClearOwnerPortMessage(__int64 a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      result = ObfDereferenceObject(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
