/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1402F4E10
 * Callers:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9090 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 *     ObpHandlesToObjectAreRevoked @ 0x140749A18 (ObpHandlesToObjectAreRevoked.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749A50 (ObpProcessRemoveObjectQueue.c)
 *     ObHandleRevocationBlockAddObject @ 0x14097B37C (ObHandleRevocationBlockAddObject.c)
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
