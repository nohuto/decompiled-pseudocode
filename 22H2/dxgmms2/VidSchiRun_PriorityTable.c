/*
 * XREFs of VidSchiRun_PriorityTable @ 0x1C00B7870
 * Callers:
 *     VidSchiWorkerThread @ 0x1C00B7750 (VidSchiWorkerThread.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0001F40 (VidSchiDecrementContextReference.c)
 *     VidSchiIncrementContextReference @ 0x1C0004A20 (VidSchiIncrementContextReference.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A430 (VidSchiScheduleCommandToRun.c)
 *     VidSchIsTDRPending @ 0x1C000B500 (VidSchIsTDRPending.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00126D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x1C00141D4 (VidSchiSubmitWaitCommand.c)
 *     VidSchiRewindPacket @ 0x1C0014310 (VidSchiRewindPacket.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C0014770 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiAdjustWorkerThreadPriority @ 0x1C0016190 (VidSchiAdjustWorkerThreadPriority.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0016500 (VidSchiSubmitSignalCommand.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0016620 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C0017074 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C00182EC (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00AD180 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C01064F4 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C01069AC (VidSchiSubmitRenderCommand.c)
 *     VidSchiRecoverFromTDR @ 0x1C010A104 (VidSchiRecoverFromTDR.c)
 */

__int64 __fastcall VidSchiRun_PriorityTable(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _VIDSCH_CONTEXT *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // r14
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  char v17; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    v17 = 0;
    v2 = VidSchiScheduleCommandToRun(a1, &v17);
    v3 = v2;
    if ( v2 )
    {
      v4 = *(struct _VIDSCH_CONTEXT **)(v2 + 88);
      if ( v17 && (unsigned int)(*((_DWORD *)a1 + 753) - 2) > 1 )
      {
        VidSchiSetTransferContextRunningTime((__int64)v4, 0LL, 0);
        VidSchiRewindPacket(v3, 0, 1, 0);
        VidschiUnselectContext(v4);
      }
      else
      {
        VidSchiIncrementContextReference((__int64)v4);
        v7 = *(_QWORD *)(v3 + 88);
        v8 = *(_QWORD *)(v7 + 104);
        v9 = *(_QWORD *)(v7 + 96);
        v10 = *(_DWORD *)(v3 + 48);
        v11 = *(_QWORD *)(v8 + 32);
        if ( v10 )
        {
          switch ( v10 )
          {
            case 8:
              VidSchiSubmitPagingCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
              break;
            case 3:
              VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)v3, v5, v6);
              break;
            case 4:
              VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
              break;
            case 5:
              VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
              break;
            case 6:
              v12 = (_QWORD *)(v3 + 320);
              if ( *(_DWORD *)(v3 + 312) != 5 )
                v12 = (_QWORD *)*v12;
              (*(void (__fastcall **)(_QWORD *))(v3 + 296))(v12);
              VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)v3, v13, v14);
              break;
            case 7:
              VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
              break;
          }
        }
        else
        {
          if ( (*(_BYTE *)(v11 + 3036) & 1) != 0
            || VidSchIsTDRPending(*(_QWORD *)(v8 + 32))
            || *(_BYTE *)(v8 + 204)
            || _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 200), 0, 0) )
          {
            *(_DWORD *)(v3 + 64) &= ~4u;
          }
          if ( (*(_DWORD *)(v3 + 64) & 4) != 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 2872));
            RtlSetBitEx(v11 + 488, *(unsigned __int16 *)(v9 + 4));
          }
          if ( (*(_DWORD *)(v3 + 272) & 0x8000000) != 0 )
            VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)v3);
          else
            VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
        }
        VidSchiAdjustWorkerThreadPriority((__int64)v4);
        VidSchiSetTransferContextRunningTime((__int64)v4, 0LL, 0);
        VidschiUnselectContext(v4);
        VidSchiDecrementContextReference(v4, 0);
      }
    }
    if ( VidSchIsTDRPending((__int64)a1) )
    {
      v15 = *((_DWORD *)a1 + 753);
      if ( v15 != 2 && v15 != 3 )
        break;
    }
  }
  return VidSchiRecoverFromTDR(a1);
}
