/*
 * XREFs of PpmGetThroughputInfoCallback @ 0x14045E870
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x1402485E0 (PoGetPerfStateAndParkingInfo.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 *     PpmSnapPerformanceAccumulation @ 0x1403051E0 (PpmSnapPerformanceAccumulation.c)
 */

__int64 __fastcall PpmGetThroughputInfoCallback(struct _KPRCB *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  char v7; // bl
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  __int128 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v6 = 0;
  if ( PpmSnapPerformanceAccumulation((__int64)a1, 0, a1 != KeGetCurrentPrcb(), 0, (__int64)&v11, 0LL) )
  {
    v7 = PpmPerformanceCounterShift;
    if ( a1->PowerState.Hypervisor == ProcHypervisorHvCounters )
      v7 = PpmHvPerformanceCounterShift;
    v8 = *((_QWORD *)&v12 + 1);
    *(_QWORD *)(a2 + 8) = (unsigned __int64)v13 >> v7;
    v9 = PpmConvertTime(v8, 0x64uLL, a3);
    *(_QWORD *)(a2 + 16) = *((_QWORD *)&v13 + 1) >> v7;
    *(_DWORD *)a2 = (unsigned __int64)v11 >> v7;
    *(_DWORD *)(a2 + 4) = *((_QWORD *)&v11 + 1) >> v7;
    *(_QWORD *)(a2 + 24) = v9 >> v7;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
