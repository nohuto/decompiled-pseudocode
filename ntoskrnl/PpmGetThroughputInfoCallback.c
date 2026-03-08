/*
 * XREFs of PpmGetThroughputInfoCallback @ 0x14045ABA0
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x1402F74A8 (PoGetPerfStateAndParkingInfo.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x140234F00 (PpmSnapPerformanceAccumulation.c)
 *     PpmConvertTime @ 0x140235D70 (PpmConvertTime.c)
 */

__int64 __fastcall PpmGetThroughputInfoCallback(struct _KPRCB *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  char v7; // r11
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  char v10; // r11
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h]
  __int128 v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v6 = 0;
  if ( PpmSnapPerformanceAccumulation((__int64)a1, 0, a1 != KeGetCurrentPrcb(), 0, (__int64)&v12, 0LL) )
  {
    v7 = PpmPerformanceCounterShift;
    if ( a1->PowerState.Hypervisor == ProcHypervisorHvCounters )
      v7 = PpmHvPerformanceCounterShift;
    v8 = *((_QWORD *)&v13 + 1);
    *(_QWORD *)(a2 + 8) = (unsigned __int64)v14 >> v7;
    v9 = PpmConvertTime(v8, 0x64uLL, a3);
    *(_QWORD *)(a2 + 16) = *((_QWORD *)&v14 + 1) >> v10;
    *(_DWORD *)a2 = (unsigned __int64)v12 >> v10;
    *(_DWORD *)(a2 + 4) = *((_QWORD *)&v12 + 1) >> v10;
    *(_QWORD *)(a2 + 24) = v9 >> v10;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
