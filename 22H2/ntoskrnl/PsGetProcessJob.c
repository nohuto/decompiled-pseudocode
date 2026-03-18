/*
 * XREFs of PsGetProcessJob @ 0x1403608E0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1407160C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140739DE0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 1296);
}
