/*
 * XREFs of KeIntSteerSnapPerf @ 0x140229C10
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140228E20 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x14022A120 (RtlGetInterruptTimePrecise.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(_DWORD *a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER InterruptTimePrecise; // rax
  LONGLONG v5; // rbx
  LARGE_INTEGER v6; // rsi
  __int64 MHz; // rdi
  __int64 result; // rax
  __int64 v9; // r13
  KIRQL v10; // al
  __int64 *v11; // r11
  KIRQL v12; // bp
  __int64 *v13; // r10
  __int64 v14; // rdi
  __int64 *v15; // rbp
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  __int64 v30; // [rsp+20h] [rbp-48h]
  KIRQL v31; // [rsp+80h] [rbp+18h]
  LARGE_INTEGER v32; // [rsp+88h] [rbp+20h] BYREF

  v32.QuadPart = 0LL;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v32);
  v5 = InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap;
  v6 = InterruptTimePrecise;
  MHz = KeGetCurrentPrcb()->MHz;
  v30 = MHz;
  if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap) >= 0x16E360 )
  {
    KiIntSteerPreviousPerfSnap = InterruptTimePrecise.QuadPart;
    v9 = 0LL;
    v10 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    v11 = (__int64 *)KiIntTrackRootList;
    v31 = v10;
    v12 = v10;
    if ( (__int64 *)KiIntTrackRootList != &KiIntTrackRootList )
    {
      do
      {
        v13 = (__int64 *)v11[2];
        v14 = 0LL;
        if ( v13 != v11 + 2 )
        {
          do
          {
            v15 = (__int64 *)*v13;
            if ( *(__int64 **)(*v13 + 8) != v13 || *(__int64 **)v13[1] != v13 )
              __fastfail(3u);
            v16 = *((_DWORD *)v13 + 6);
            v17 = 0LL;
            v18 = 0LL;
            if ( v16 )
            {
              v19 = (__int64 *)v13[4];
              v20 = v16;
              do
              {
                v21 = *v19++;
                v18 += *(_QWORD *)(v21 + 176);
                v17 += *(_QWORD *)(v21 + 200);
                --v20;
              }
              while ( v20 );
            }
            v22 = v18 - v13[5];
            v23 = v18 == v13[5];
            v13[5] = v18;
            v24 = v22 + v14;
            if ( v22 < 0 || v23 )
              v24 = v14;
            v25 = v17 - v13[6];
            v13[6] = v17;
            v13 = v15;
            v14 = v24 + v25;
            if ( v25 <= 0 )
              v14 = v24;
          }
          while ( v15 != v11 + 2 );
        }
        v11[24] = v14;
        v9 += v14;
        v11 = (__int64 *)*v11;
      }
      while ( v11 != &KiIntTrackRootList );
      MHz = v30;
      v12 = v31;
    }
    KxReleaseSpinLock(&KiIntTrackSpinlock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v23 = (v29 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v29;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
    KiIntSteerLoadPercent = 10000 * v9 / (unsigned __int64)(v5 * MHz);
  }
  *a1 = KiIntSteerLoadPercent;
  result = 0LL;
  *a2 = v6;
  return result;
}
