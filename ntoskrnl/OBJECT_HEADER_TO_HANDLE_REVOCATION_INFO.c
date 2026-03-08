/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14035A830
 * Callers:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140366B30 (NtSetInformationWorkerFactory.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     ObpHandlesToObjectAreRevoked @ 0x1407DEA60 (ObpHandlesToObjectAreRevoked.c)
 *     ObpProcessRemoveObjectQueue @ 0x1407DEA90 (ObpProcessRemoveObjectQueue.c)
 *     ObHandleRevocationBlockAddObject @ 0x1409782CC (ObHandleRevocationBlockAddObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(__int64 a1)
{
  __int64 v1; // rcx

  if ( (*(_BYTE *)(a1 + 26) & 0x40) == 0 )
    return 0LL;
  v1 = *(_QWORD *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x7F]);
  return v1 & -(__int64)(*(_BYTE *)(v1 + 24) != 0);
}
