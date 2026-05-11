/*
 * XREFs of USBCaptureProcessPin @ 0x1C0006E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001258 (WPP_RECORDER_SF_q.c)
 *     USBCaptureCopyRequestToBuffer @ 0x1C00336B4 (USBCaptureCopyRequestToBuffer.c)
 */

__int64 __fastcall USBCaptureProcessPin(PKSPIN Pin)
{
  _QWORD *Context; // rax
  __int64 v3; // rbx
  KSPIN_LOCK *v4; // r15
  KIRQL v5; // al
  KIRQL v6; // r12
  struct _KSSTREAM_POINTER *LeadingEdgeStreamPointer; // rsi
  __int64 v8; // rdi
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  struct _IO_WORKITEM *v13; // rcx
  PKSGATE i; // rax
  __int64 v15; // rdx
  char v17; // [rsp+60h] [rbp+8h] BYREF

  Context = Pin->Context;
  v3 = Context[19];
  v4 = Context + 14;
  v5 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  *(_BYTE *)(v3 + 98) = 1;
  v6 = v5;
  LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
  if ( LeadingEdgeStreamPointer )
  {
    v8 = v3 + 136;
    do
    {
      v9 = *(_QWORD **)v8;
      if ( *(_QWORD *)v8 == v8 )
        break;
      if ( !*(_BYTE *)(v3 + 96) )
        goto LABEL_26;
      v17 = 0;
      KeReleaseSpinLock(v4, v6);
      USBCaptureCopyRequestToBuffer(v9, LeadingEdgeStreamPointer, &v17);
      if ( v17 )
        LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
      v6 = KeAcquireSpinLockRaiseToDpc(v4);
      if ( *((_DWORD *)v9 + 8) == *(_DWORD *)(v3 + 108) && *(_BYTE *)(v3 + 96) )
      {
        *((_DWORD *)v9 + 8) = 0;
        v10 = *(_QWORD **)v8;
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8
          || (v11 = *v10, *(_QWORD **)(*v10 + 8LL) != v10)
          || (*(_QWORD *)v8 = v11, *(_QWORD *)(v11 + 8) = v8, v12 = *(_QWORD **)(v3 + 128), *v12 != v3 + 120) )
        {
          __fastfail(3u);
        }
        *v10 = v3 + 120;
        v10[1] = v12;
        *v12 = v10;
        *(_QWORD *)(v3 + 128) = v10;
        if ( !*(_BYTE *)(v3 + 248) )
        {
          v13 = *(struct _IO_WORKITEM **)(v3 + 280);
          *(_BYTE *)(v3 + 248) = 1;
          IoQueueWorkItem(v13, (PIO_WORKITEM_ROUTINE)USBCaptureRequeueWorker, CriticalWorkQueue, Pin);
        }
      }
    }
    while ( LeadingEdgeStreamPointer );
  }
  if ( *(_BYTE *)(v3 + 96) && *(_QWORD *)(v3 + 136) == v3 + 136 )
  {
    for ( i = KsPinGetAndGate(Pin); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
      ;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        3u,
        0x15u,
        (__int64)&WPP_26ea32ae020134248ddb7b587958131d_Traceguids,
        Pin);
    *(_BYTE *)(v3 + 97) = 0;
  }
LABEL_26:
  if ( LeadingEdgeStreamPointer )
    KsStreamPointerUnlock(LeadingEdgeStreamPointer, 0);
  *(_BYTE *)(v3 + 98) = 0;
  KeReleaseSpinLock(v4, v6);
  return 0LL;
}
