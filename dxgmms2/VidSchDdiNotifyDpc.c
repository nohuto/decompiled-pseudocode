__int64 __fastcall VidSchDdiNotifyDpc(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 DxgAdapter; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  union _SLIST_HEADER *v7; // rdi
  PSLIST_ENTRY v8; // rax
  _QWORD *p_Next; // rcx
  int v10; // r15d
  unsigned int v11; // ecx
  struct _SLIST_ENTRY *v12; // r14
  struct _VIDSCH_VSYNC_COOKIE *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  struct _SLIST_ENTRY *Next; // rbp
  int v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]
  char v19; // [rsp+30h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-30h] BYREF

  v1 = 0LL;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v19 = 1;
    v17 = 5043;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DxgCoreInterface[79]((ADAPTER_DISPLAY *)&v17, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)5043);
  if ( (DpiGetSchedulerCallbackState(a1) & 1) != 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    DxgAdapter = DpiGetDxgAdapter(a1);
    v4 = DxgAdapter;
    if ( DxgAdapter )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2928) + 744LL);
      if ( v5 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1752), &LockHandle);
        v6 = *(_QWORD *)(v4 + 2928);
        v7 = *(union _SLIST_HEADER **)(v6 + 744);
        v8 = ExpInterlockedFlushSList(v7 + 111);
        if ( v8 )
        {
          do
          {
            p_Next = &v8->Next;
            v8 = v8->Next;
            *p_Next = v1;
            v1 = p_Next;
          }
          while ( v8 );
          v10 = 263304;
          do
          {
            v11 = *((_DWORD *)v1 - 4);
            v12 = (struct _SLIST_ENTRY *)(v1 - 2);
            v1 = (_QWORD *)*v1;
            if ( ((v11 - 1) & 0xFFFFFFF6) != 0 || v11 == 10 )
            {
              switch ( v11 )
              {
                case 0xBu:
                  VidSchiProcessMonitoredFenceSignaledDpc(v12);
                  break;
                case 0xFu:
                  Next = v12[2].Next;
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[378], v12);
                  if ( (byte_1C00769C3 & 2) != 0 )
                    VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)Next);
                  break;
                case 0x10u:
                  VidSchiProcessGpuEngineTimeoutDpc(v12);
                  break;
                case 0xCu:
                  VidSchiProcessHwQueuePageFaultedDpc(v12);
                  break;
                case 0x11u:
                  VidSchiProcessSuspendContextCompletedDpc(v12);
                  break;
                default:
                  if ( v11 <= 0x12 && _bittest(&v10, v11) )
                  {
                    v13 = (struct _VIDSCH_VSYNC_COOKIE *)&v12[-1];
                    if ( *((_BYTE *)&v12[2].Next[3].Next + 11) )
                      VidSchiProcessDpcVSyncHwFlipQueue(v13);
                    else
                      VidSchiProcessDpcVSyncCookie(v13);
                    ExpInterlockedPushEntrySList(
                      (PSLIST_HEADER)(*(&v7[200].Alignment + *((unsigned int *)&v12[5].Next + 3)) + 44688),
                      v12);
                  }
                  else if ( v11 == 14 )
                  {
                    VidSchiProcessPeriodicNotificationCookie((struct _VIDSCH_GLOBAL *)v7);
                  }
                  break;
              }
            }
            else
            {
              _InterlockedExchange((volatile __int32 *)&v12[2].Next[6].Next[30].Next + 2, 1);
              if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
                VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(v6 + 768), 1u);
              VidSchiProcessDpcDmaPacket((struct _VIDSCH_DMA_PACKET *)&v12[-1]);
            }
          }
          while ( v1 );
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
  result = ((__int64 (__fastcall *)(int *))DxgCoreInterface[80])(&v17);
  if ( v19 )
  {
    result = (unsigned __int8)byte_1C00769C1;
    if ( byte_1C00769C1 < 0 )
      return McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit);
  }
  return result;
}
