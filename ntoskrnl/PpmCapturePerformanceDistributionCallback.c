/*
 * XREFs of PpmCapturePerformanceDistributionCallback @ 0x1405957C0
 * Callers:
 *     PpmCapturePerformanceDistribution @ 0x14059558C (PpmCapturePerformanceDistribution.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x140234F00 (PpmSnapPerformanceAccumulation.c)
 */

__int64 __fastcall PpmCapturePerformanceDistributionCallback(struct _KPRCB *a1, __int64 a2)
{
  unsigned int v2; // r8d
  _PROC_PERF_CONSTRAINT *Constraint; // rcx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rbx
  char v11; // cl
  unsigned __int64 v12; // rdx
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+40h] [rbp-48h]
  __int128 v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+60h] [rbp-28h]

  v2 = *(_DWORD *)(a2 + 12);
  Constraint = a1->PowerState.CheckContext.Constraint;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v6 = (v2 + 7) & 0xFFFFFFF8;
  if ( v2 + 7 < v2 )
    v6 = v2;
  v7 = 0;
  v8 = Constraint != 0LL ? 2 : 0;
  v9 = 16 * v8 + v6 + 8;
  if ( v9 > *(_DWORD *)(a2 + 8) )
    goto LABEL_11;
  v10 = *(_QWORD *)a2 + v6;
  if ( !Constraint )
  {
LABEL_10:
    *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 16))++ + 4) = v6;
    *(_DWORD *)v10 = KeGetPcr()->Prcb.Number;
    *(_DWORD *)(v10 + 4) = v8;
LABEL_11:
    *(_DWORD *)(a2 + 12) = v9;
    return v7;
  }
  if ( PpmSnapPerformanceAccumulation((__int64)a1, 0, a1 != KeGetCurrentPrcb(), 0, (__int64)&v14, 0LL) )
  {
    v11 = PpmPerformanceDistributionShift;
    if ( a1->PowerState.Hypervisor == ProcHypervisorHvCounters )
      v11 = PpmHvPerformanceDistributionShift;
    v12 = (unsigned __int64)(255LL * *((_QWORD *)&v14 + 1) - *((_QWORD *)&v15 + 1)) >> v11;
    *(_QWORD *)(v10 + 24) = *((_QWORD *)&v15 + 1) >> v11;
    *(_QWORD *)(v10 + 8) = v12;
    *(_BYTE *)(v10 + 16) = 0;
    *(_BYTE *)(v10 + 32) = -1;
    goto LABEL_10;
  }
  return (unsigned int)-1073741823;
}
