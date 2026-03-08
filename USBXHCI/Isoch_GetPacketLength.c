/*
 * XREFs of Isoch_GetPacketLength @ 0x1C00445B8
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C0003800 (Isoch_RetrieveNextStage.c)
 *     Isoch_PrepareStage @ 0x1C0004AD0 (Isoch_PrepareStage.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C00453C4 (Isoch_TransferUrb_MarkLatePackets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Isoch_GetPacketLength(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // edx

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 3LL * a2;
  if ( a2 == *(_DWORD *)(a1 + 96) - 1 )
    v4 = *(_DWORD *)(a1 + 80);
  else
    v4 = *(_DWORD *)(v2 + 12LL * (a2 + 1) + 140);
  return (unsigned int)(v4 - *(_DWORD *)(v2 + 4 * v3 + 140));
}
