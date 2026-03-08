/*
 * XREFs of KeIntSteerSnapPerf @ 0x1402A94D0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402341D0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIntSteerAddLoadToProcessorAndCheckThreshold @ 0x140577990 (KiIntSteerAddLoadToProcessorAndCheckThreshold.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(__int64 a1, int **a2, _DWORD *a3, __int64 *a4)
{
  int v4; // esi
  ULONG v5; // edi
  int **v6; // r15
  ULONG v7; // r13d
  ULONG ActiveProcessorCount; // eax
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  void *v11; // rsp
  __int64 InterruptTimePrecise; // rax
  __int64 v13; // r12
  __int64 v14; // r14
  int *v16; // rbx
  __int64 v17; // rbx
  KIRQL v18; // al
  __int64 v19; // rsi
  __int64 *v20; // rcx
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // r11
  unsigned int v25; // r9d
  KIRQL *v26; // r15
  __int64 v27; // r10
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  KIRQL v33; // si
  KIRQL *v34; // rbx
  __int64 v35; // r11
  __int64 v36; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  bool v41; // zf
  KIRQL v42[8]; // [rsp+20h] [rbp+0h] BYREF
  KIRQL *v43; // [rsp+28h] [rbp+8h]
  __int64 v44; // [rsp+30h] [rbp+10h]
  LARGE_INTEGER v45; // [rsp+38h] [rbp+18h] BYREF
  __int64 v46; // [rsp+40h] [rbp+20h]
  int **v47; // [rsp+48h] [rbp+28h]
  _DWORD *v48; // [rsp+50h] [rbp+30h]
  __int64 *v49; // [rsp+58h] [rbp+38h]

  v4 = PpmIntSteerLoadMax;
  v5 = 0;
  v6 = a2;
  v49 = a4;
  v7 = 0;
  v48 = a3;
  v47 = a2;
  v45.QuadPart = 0LL;
  v43 = 0LL;
  if ( KiIntSteerEnabled )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
    v9 = 8LL * ActiveProcessorCount;
    v7 = ActiveProcessorCount;
    v10 = v9 + 15;
    if ( v9 + 15 < v9 )
      v10 = 0xFFFFFFFFFFFFFF0LL;
    v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
    v43 = v42;
    if ( v7 )
      memset(v42, 0, v9 & 0xFFFFFFFFFFFFFFF8uLL);
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v45);
  v46 = InterruptTimePrecise;
  v13 = InterruptTimePrecise - KiIntSteerPreviousPerfSnap;
  v14 = InterruptTimePrecise;
  if ( (unsigned __int64)(InterruptTimePrecise - KiIntSteerPreviousPerfSnap) >= 0x16E360 )
  {
    v16 = (int *)KiIntSteerDistributionContext;
    KiIntSteerPreviousPerfSnap = InterruptTimePrecise;
    KiIntSteerPreviousPerfSnapDelta = v13;
    memset(KiIntSteerDistributionContext, 0, 0x204uLL);
    *v16 = v4;
    *v6 = v16;
    v17 = 0LL;
    v44 = 0LL;
    v18 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    v19 = KiIntTrackRootList;
    v42[0] = v18;
    if ( (__int64 *)KiIntTrackRootList != &KiIntTrackRootList )
    {
      do
      {
        v20 = *(__int64 **)(v19 + 16);
        v21 = v19 + 16;
        v22 = 0LL;
        if ( v20 != (__int64 *)(v19 + 16) )
        {
          do
          {
            if ( *(__int64 **)(*v20 + 8) != v20 || *(__int64 **)v20[1] != v20 )
              __fastfail(3u);
            v23 = 0LL;
            v24 = 0LL;
            v25 = 0;
            if ( *((_DWORD *)v20 + 6) )
            {
              v26 = v43;
              do
              {
                v27 = *(_QWORD *)(v20[4] + 8LL * v25);
                v28 = *(_QWORD *)(v27 + 176);
                v29 = *(_QWORD *)(v27 + 200);
                v24 += v28;
                v23 += v29;
                if ( KiIntSteerEnabled && !*(_BYTE *)(v19 + 132) )
                  *(_QWORD *)&v26[8 * *(unsigned int *)(v27 + 96)] += v28 + v29;
                ++v25;
              }
              while ( v25 < *((_DWORD *)v20 + 6) );
              v21 = v19 + 16;
            }
            v30 = v24 - v20[5];
            v20[5] = v24;
            if ( v30 > 0 )
              v22 += v30;
            v31 = v22;
            v32 = v23 - v20[6];
            v22 += v32;
            v20[6] = v23;
            v20 = (__int64 *)*v20;
            if ( v32 <= 0 )
              v22 = v31;
          }
          while ( v20 != (__int64 *)v21 );
          v17 = v44;
        }
        v17 += v22;
        *(_QWORD *)(v19 + 192) = v22;
        v19 = *(_QWORD *)v19;
        v44 = v17;
      }
      while ( (__int64 *)v19 != &KiIntTrackRootList );
      v14 = v46;
      v6 = v47;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&KiIntTrackSpinlock);
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v33 = v42[0];
      if ( v42[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v40 = ~(unsigned __int16)(-1LL << (v42[0] + 1));
        v41 = (v40 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v40;
        if ( v41 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v33 = v42[0];
    }
    __writecr8(v33);
    if ( KiIntSteerEnabled && v7 )
    {
      v34 = v43;
      v35 = 0LL;
      do
      {
        v36 = *(_QWORD *)&v34[v35] - *(_QWORD *)(KiIntSteerPerProcIsrDpcTimeAffinitized + v35);
        *(_QWORD *)(KiIntSteerPerProcIsrDpcTimeAffinitized + v35) = *(_QWORD *)&v34[v35];
        if ( v36 > 0 )
          KiIntSteerAddLoadToProcessorAndCheckThreshold(v36, 0LL, v5, *v6);
        ++v5;
        v35 += 8LL;
      }
      while ( v5 < v7 );
      v17 = v44;
    }
    KiIntSteerLoadPercent = 10000 * v17 / (unsigned __int64)(KiIntSteerSlowestCyclesPerSec * v13);
  }
  else
  {
    *v6 = 0LL;
  }
  *v48 = KiIntSteerLoadPercent;
  *v49 = v14;
  return 0LL;
}
