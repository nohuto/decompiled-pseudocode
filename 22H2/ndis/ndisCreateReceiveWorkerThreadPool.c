/*
 * XREFs of ndisCreateReceiveWorkerThreadPool @ 0x1C0028EA8
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C00210D4 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     ndisCreateThread @ 0x1C0028F8C (ndisCreateThread.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00A37F4 (ndisKillReceiveWorkerThreadPool.c)
 */

__int64 ndisCreateReceiveWorkerThreadPool()
{
  int Thread; // ebx
  __int64 v1; // rdi
  __int64 v2; // rcx
  ULONG ActiveProcessorCount; // esi

  Thread = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0xDu,
      (struct _GUID *)&WPP_e896fbf1b9df31be12d1917bc0fe0b78_Traceguids);
  v1 = 0LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    while ( 1 )
    {
      Thread = ndisCreateThread(v2, (unsigned int)v1, (unsigned int)dword_1C00E50C8, (char *)qword_1C00E5108 + 8 * v1);
      if ( Thread < 0 )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= ActiveProcessorCount )
        goto LABEL_6;
    }
    ndisKillReceiveWorkerThreadPool();
  }
  else
  {
LABEL_6:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xCu,
        0xEu,
        (struct _GUID *)&WPP_e896fbf1b9df31be12d1917bc0fe0b78_Traceguids);
  }
  return (unsigned int)Thread;
}
