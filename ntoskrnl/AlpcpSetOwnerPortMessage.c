/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x140716D14
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x140715930 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x140715F0C (AlpcpDispatchReplyToPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140716318 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDispatchConnectionRequest @ 0x140717CC0 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x140718414 (AlpcpDispatchCloseMessage.c)
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(a2);
  *(_DWORD *)(a1 + 40) |= 0x1000u;
  *(_QWORD *)(a1 + 24) = a2;
  return result;
}
