/*
 * XREFs of PoFxActivateDevice @ 0x140202138
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140683054 (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x140688710 (PipEnumerateDevice.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 *     PnpDeleteLockedDeviceNode @ 0x1408635A0 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140956564 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x14096B8B8 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x140982F50 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x140988CE0 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140202154 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
