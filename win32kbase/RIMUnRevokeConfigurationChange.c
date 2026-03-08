/*
 * XREFs of RIMUnRevokeConfigurationChange @ 0x1C01B0710
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C01AD678 (RIMDeliverConfigRequest.c)
 */

__int64 __fastcall RIMUnRevokeConfigurationChange(__int64 a1, unsigned __int16 a2)
{
  return RIMDeliverConfigRequest((struct RIMDEV *)a1, *(_QWORD *)(a1 + 456), a2, 1);
}
