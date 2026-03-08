/*
 * XREFs of ?Update@RollingStats@@QEAAXXZ @ 0x1C0088654
 * Callers:
 *     ?ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@PEBUTrackedWorkloadStateInfo@@I@Z @ 0x1C0088068 (-ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@PEBUTrackedW.c)
 *     ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1C0088188 (-GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z.c)
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C0088258 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C00884E0 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C00885AC (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RollingStats::Update(RollingStats *this)
{
  unsigned int v2; // r10d
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // r9
  double v6; // xmm3_8
  __int64 v7; // rbx
  double v8; // xmm4_8
  double v9; // xmm2_8
  __int64 v10; // r11
  double v11; // xmm1_8
  double v12; // xmm0_8
  double v13; // xmm0_8
  double v14; // xmm0_8
  __int64 v15; // r11
  __int64 v16; // r9
  double v17; // xmm0_8

  if ( *((_BYTE *)this + 64) )
  {
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    v2 = *((_DWORD *)this + 4);
    v3 = v2;
    *((_QWORD *)this + 6) = 0x7FEFFFFFFFFFFFFFLL;
    *((_QWORD *)this + 7) = 0xFFEFFFFFFFFFFFFFuLL;
    v4 = *((unsigned int *)this + 6);
    if ( (_DWORD)v4 )
    {
      v5 = *(_QWORD *)this;
      v6 = 0.0;
      v7 = *((_QWORD *)this + 1);
      v8 = 0.0;
      v9 = DOUBLE_1_797693134862316e308;
      v10 = (unsigned int)v4;
      v11 = DOUBLE_N1_797693134862316e308;
      do
      {
        v12 = *(double *)(v5 + 8LL * v3);
        if ( v9 > v12 )
        {
          *((double *)this + 6) = v12;
          v9 = v12;
        }
        v13 = *(double *)(v5 + 8LL * v3);
        if ( v13 > v11 )
        {
          *((double *)this + 7) = v13;
          v11 = v13;
        }
        v14 = *(double *)(v7 + 8LL * v3) * *(double *)(v5 + 8LL * v3);
        v3 = (v3 + 1) % (unsigned int)v4;
        v8 = v8 + v14;
        *((double *)this + 4) = v8;
        --v10;
      }
      while ( v10 );
      v15 = v5;
      v16 = v4;
      do
      {
        v17 = (*(double *)(v15 + 8LL * v2) - v8) * (*(double *)(v15 + 8LL * v2) - v8) * *(double *)(v7 + 8LL * v2) + v6;
        v2 = (v2 + 1) % (unsigned int)v4;
        *((double *)this + 5) = v17;
        v6 = v17;
        --v16;
      }
      while ( v16 );
    }
    else
    {
      v17 = 0.0;
    }
    *((_BYTE *)this + 64) = 0;
    *((double *)this + 5) = (double)(int)v4 * v17 / (double)((int)v4 - 1);
  }
}
