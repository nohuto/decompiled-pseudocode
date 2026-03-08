/*
 * XREFs of ObpHandleRevocationBlockRemoveObject @ 0x1407DEDE0
 * Callers:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140366B30 (NtSetInformationWorkerFactory.c)
 *     ObpProcessRemoveObjectQueue @ 0x1407DEA90 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x14097838C (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

__int64 __fastcall ObpHandleRevocationBlockRemoveObject(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 > 2 )
    return ObpHandleRevocationBlockRemoveInsertedObject(a1, v1, 0LL, 0LL);
  return result;
}
