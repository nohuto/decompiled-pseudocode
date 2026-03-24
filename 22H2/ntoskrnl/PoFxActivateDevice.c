/*
 * XREFs of PoFxActivateDevice @ 0x14036F174
 * Callers:
 *     PipProcessDevNodeTree @ 0x14073D6A4 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1407432C8 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x140745EDC (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNode @ 0x14074B3F8 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A2738 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x1408B8764 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408E5860 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x1408F07A4 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14036F190 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
