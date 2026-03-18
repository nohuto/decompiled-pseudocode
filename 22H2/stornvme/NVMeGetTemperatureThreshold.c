/*
 * XREFs of NVMeGetTemperatureThreshold @ 0x1C001EEE4
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DD8C (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002360 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x1C000C21C (LocalCommandReuse.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C0010E4C (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025504 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetTemperatureThreshold(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 20) )
  {
    *(_WORD *)(a1 + 228) = -1;
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    BuildGetFeaturesTemperatureThresholdCommand(*(_QWORD *)(a1 + 1040) + 4096LL, 0, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeGetTemperatureThresholdCompletion;
    ProcessCommand(a1, a1 + 952);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
