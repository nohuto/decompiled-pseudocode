/*
 * XREFs of PpmGetThroughputInfoCallback @ 0x1405772F0
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x140241CF4 (PoGetPerfStateAndParkingInfo.c)
 * Callees:
 *     PpmConvertTime @ 0x14026A1CC (PpmConvertTime.c)
 *     PpmSnapPerformanceAccumulation @ 0x1402C5A90 (PpmSnapPerformanceAccumulation.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall PpmGetThroughputInfoCallback(struct _KPRCB *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  char v7; // bl
  ULONGLONG v8; // rcx
  ULONGLONG v9; // rax
  unsigned __int64 v11[12]; // [rsp+30h] [rbp-98h] BYREF

  memset(v11, 0, sizeof(v11));
  v6 = 0;
  if ( PpmSnapPerformanceAccumulation((__int64)a1, 0, a1 != KeGetCurrentPrcb(), 0, v11) )
  {
    v7 = PpmPerformanceCounterShift;
    if ( a1->PowerState.Hypervisor == ProcHypervisorHvCounters )
      v7 = PpmHvPerformanceCounterShift;
    v8 = v11[3];
    *(_QWORD *)(a2 + 8) = v11[4] >> v7;
    v9 = PpmConvertTime(v8, 100LL, a3);
    *(_QWORD *)(a2 + 16) = v11[5] >> v7;
    *(_DWORD *)a2 = v11[0] >> v7;
    *(_DWORD *)(a2 + 4) = v11[1] >> v7;
    *(_QWORD *)(a2 + 24) = v9 >> v7;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
