/*
 * XREFs of PsGetProcessJob @ 0x1402F5B40
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140717CC0 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1407CB7E0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 1296);
}
