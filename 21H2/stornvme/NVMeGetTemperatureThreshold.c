/*
 * XREFs of NVMeGetTemperatureThreshold @ 0x1C0009084
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeGetTemperatureThreshold(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 20) )
  {
    *(_WORD *)(a1 + 220) = -1;
    *(_BYTE *)(a1 + 867) = 0;
    memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
    v2 = *(_QWORD *)(a1 + 952);
    *(_QWORD *)(a1 + 920) = v2;
    *(_DWORD *)(a1 + 856) = 1;
    *(_BYTE *)(v2 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
    v3 = *(_QWORD *)(a1 + 952);
    *(_DWORD *)(v3 + 4140) &= 0xFFC0FFFF;
    *(_BYTE *)(v3 + 4096) = 10;
    *(_BYTE *)(v3 + 4136) = 4;
    *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4224LL) = NVMeGetTemperatureThresholdCompletion;
    ProcessCommand(a1, a1 + 864);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
