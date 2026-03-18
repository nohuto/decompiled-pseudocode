/*
 * XREFs of CiSchedulerUpdateTimer @ 0x1C0002050
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001250 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerSleep @ 0x1C00014A0 (CiSchedulerSleep.c)
 *     CiSchedulerWait @ 0x1C0001680 (CiSchedulerWait.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002B60 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerPostSuspend @ 0x1C0004D88 (CiSchedulerPostSuspend.c)
 * Callees:
 *     <none>
 */

void __fastcall CiSchedulerUpdateTimer(unsigned __int64 a1)
{
  __int64 DeviceObjectExtension; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx

  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_13;
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
  }
  else
  {
    DeviceObjectExtension = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( DeviceObjectExtension )
  {
    if ( DeviceObjectExtension != CiSchedulerTimerNode )
    {
      v2 = *(_QWORD *)(DeviceObjectExtension + 24);
      if ( a1 > v2 )
      {
        v3 = 0LL;
      }
      else
      {
        v3 = a1 - v2;
        if ( v3 < -2000 )
          v3 += 2000LL;
      }
      CiSchedulerTimerNode = DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v3, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
    return;
  }
LABEL_13:
  if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
}
