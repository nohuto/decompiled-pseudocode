/*
 * XREFs of VidSchiSuspendFlipQueues @ 0x1C00B4208
 * Callers:
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x1C00B4190 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E1FB0 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0014E64 (VidSchWaitForEvents.c)
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C0017D1C (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C0017DD8 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x1C00ADFC8 (VidSchSubmitGlobalCommand.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSuspendFlipQueues(struct _VIDSCH_GLOBAL *a1, int a2)
{
  __int64 result; // rax
  __int64 i; // rdi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v11[14]; // [rsp+50h] [rbp-19h] BYREF
  bool v12; // [rsp+D0h] [rbp+67h] BYREF
  struct _KEVENT *p_Event; // [rsp+E0h] [rbp+77h] BYREF

  result = *((unsigned int *)a1 + 10);
  for ( i = 0LL; (unsigned int)i < (unsigned int)result; i = (unsigned int)(i + 1) )
  {
    if ( _bittest(&a2, i) )
    {
      v7 = *((_QWORD *)a1 + i + 400);
      if ( v7 )
      {
        v12 = 0;
        VidSchiMarkFlipQueuesRunningStateOnPresentInfo((__int64)a1, v7, 0, &v12);
        if ( v12 && *(int *)(*((_QWORD *)a1 + 2) + 2820LL) >= 3100 )
        {
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          memset(v11, 0, 0x50uLL);
          LODWORD(v11[0]) = 0;
          v11[3] = VIDSCH_VSYNC_SMOOTHER::OnReset;
          LODWORD(v11[5]) = 9;
          v11[4] = &Event;
          v11[6] = a1;
          VidSchSubmitGlobalCommand((__int64)a1, (__int64)v11);
          p_Event = &Event;
          VidSchWaitForEvents((__int64)a1, 1u, (PVOID *)&p_Event, 0LL, 0);
          v9 = *(unsigned int *)(v7 + 3092);
          if ( (_DWORD)v9 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 281LL, 57344LL, a1, (unsigned int)i, v9);
            __debugbreak();
            JUMPOUT(0x1C00DC230LL);
          }
        }
      }
    }
    result = *((unsigned int *)a1 + 10);
  }
  v6 = 0LL;
  if ( (_DWORD)result )
  {
    do
    {
      if ( _bittest(&a2, v6) )
      {
        v8 = *((_QWORD *)a1 + v6 + 400);
        if ( v8 )
          result = VidSchiFlushPendingHWSubmittedFlips(a1, v8, v6);
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *((_DWORD *)a1 + 10) );
  }
  return result;
}
