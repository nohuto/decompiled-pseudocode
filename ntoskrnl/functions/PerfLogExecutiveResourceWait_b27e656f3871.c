void __fastcall PerfLogExecutiveResourceWait(int a1, __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v7; // rbx
  __int16 Group; // r15
  unsigned __int8 GroupIndex; // r12
  signed __int64 TrackingLockSlotForThread; // r8
  unsigned __int64 v11; // rbx
  int v12; // [rsp+30h] [rbp-50h]
  _QWORD v13[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-30h]
  unsigned int CurrentRunTime; // [rsp+54h] [rbp-2Ch]
  __int64 v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+64h] [rbp-1Ch]
  _QWORD v19[2]; // [rsp+68h] [rbp-18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = __rdtsc();
  Group = CurrentPrcb->Group;
  GroupIndex = CurrentPrcb->GroupIndex;
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  LOWORD(v12) = Group;
  HIWORD(v12) = GroupIndex;
  TrackingLockSlotForThread = EtwpGetTrackingLockSlotForThread(a2, a1 & 0xFFFF0000);
  if ( TrackingLockSlotForThread )
  {
    ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
    if ( ((a1 - 65572) & 0xFFFFFFDF) != 0 )
    {
      if ( ((a1 - 66084) & 0xFFFFFFDF) == 0 )
      {
        if ( *(_DWORD *)(TrackingLockSlotForThread + 32) == 4
          && *(_WORD *)(TrackingLockSlotForThread + 24) == Group
          && *(_BYTE *)(TrackingLockSlotForThread + 26) == GroupIndex )
        {
          v11 = v7 - *(_QWORD *)TrackingLockSlotForThread;
        }
        else
        {
          v11 = 0LL;
        }
        if ( !(a3 % EtwpExecutiveResourceTimeout) )
        {
          v13[0] = 0LL;
          v17 = a1;
          v16 = a2;
          v14 = a3;
          v13[1] = v11;
          v13[2] = *(_QWORD *)TrackingLockSlotForThread;
          v18 = 0;
          v19[1] = 48LL;
          CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
          v19[0] = v13;
          EtwTraceKernelEvent((__int64)v19, 1u, 0x20020000u, 0x52Bu, 0x1501802u);
        }
      }
    }
    else
    {
      *(_DWORD *)(TrackingLockSlotForThread + 24) = v12;
      *(_DWORD *)(TrackingLockSlotForThread + 32) = 4;
      *(_QWORD *)TrackingLockSlotForThread = v7;
    }
  }
}
