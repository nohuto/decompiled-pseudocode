/*
 * XREFs of PpmEventGetEventDescriptorAndProcessorId @ 0x14039911C
 * Callers:
 *     PpmEventBiosCapChange @ 0x140392E20 (PpmEventBiosCapChange.c)
 *     PpmEventProcessorPerfStateChange @ 0x140398FD8 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x140399078 (PpmEventTraceExpectedUtility.c)
 *     PpmEventAutonomousModeChange @ 0x1405794E0 (PpmEventAutonomousModeChange.c)
 *     PpmEventThermalCapChange @ 0x14057A878 (PpmEventThermalCapChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEventGetEventDescriptorAndProcessorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 60) )
  {
    a3 = a2;
    *(_WORD *)a4 = *(unsigned __int8 *)(a1 - 32920);
    *(_BYTE *)(a4 + 2) = *(_BYTE *)(a1 - 32919);
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
