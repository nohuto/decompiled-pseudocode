/*
 * XREFs of NVMeGetTemperatureThreshold @ 0x1C0019654
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000E014 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C0011070 (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetTemperatureThreshold(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_WORD *)(a1 + 204) = -1;
    *(_BYTE *)(a1 + 851) = 0;
    memset(*(void **)(a1 + 936), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
    v2 = *(_QWORD *)(a1 + 936);
    *(_QWORD *)(a1 + 904) = v2;
    *(_DWORD *)(a1 + 840) = 1;
    *(_BYTE *)(v2 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 936) + 4244LL) = 0;
    BuildGetFeaturesTemperatureThresholdCommand(*(_QWORD *)(a1 + 936) + 4096LL, 0, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4224LL) = NVMeGetTemperatureThresholdCompletion;
    ProcessCommand(a1, a1 + 848);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
