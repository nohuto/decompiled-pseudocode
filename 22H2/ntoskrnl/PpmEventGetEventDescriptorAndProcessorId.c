/*
 * XREFs of PpmEventGetEventDescriptorAndProcessorId @ 0x1402575B0
 * Callers:
 *     PpmEventPerfSelectProcessorState @ 0x140255868 (PpmEventPerfSelectProcessorState.c)
 *     PpmEventTraceDeliveredPerfChange @ 0x140255950 (PpmEventTraceDeliveredPerfChange.c)
 *     PpmEventTraceRecordedUtility @ 0x140257510 (PpmEventTraceRecordedUtility.c)
 *     PpmEventProcessorPerfStateChange @ 0x14034EDD0 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x14034EE70 (PpmEventTraceExpectedUtility.c)
 *     PpmEventAutonomousModeChange @ 0x140599C30 (PpmEventAutonomousModeChange.c)
 *     PpmEventBiosCapChange @ 0x140599CEC (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x14059B720 (PpmEventThermalCapChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEventGetEventDescriptorAndProcessorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 68) )
  {
    a3 = a2;
    *(_WORD *)a4 = *(unsigned __int8 *)(a1 - 33760);
    *(_BYTE *)(a4 + 2) = *(_BYTE *)(a1 - 33759);
    v6 = 3;
  }
  else
  {
    v6 = 4;
    *(_DWORD *)a4 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
  }
  *(_QWORD *)a5 = a4;
  *(_DWORD *)(a5 + 8) = v6;
  result = a3;
  *(_DWORD *)(a5 + 12) = 0;
  return result;
}
