/*
 * XREFs of PsGetProcessJob @ 0x140249460
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140667F24 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1407AA950 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 1296);
}
