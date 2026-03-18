/*
 * XREFs of DpiMiracastAddRefMiracastDeviceContext @ 0x1C005FE5C
 * Callers:
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C01E4710 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C01F1460 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C039E960 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C039F134 (DpiMiracastGetDeviceContextFromName.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastAddRefMiracastDeviceContext(__int64 a1, unsigned int a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  _InterlockedXor((volatile signed __int32 *)(a1 + 28), a2);
}
