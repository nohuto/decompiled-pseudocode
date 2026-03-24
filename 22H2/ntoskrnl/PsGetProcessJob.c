/*
 * XREFs of PsGetProcessJob @ 0x1403166D0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1405DF168 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1405E5250 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 1296);
}
