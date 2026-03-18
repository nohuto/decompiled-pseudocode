/*
 * XREFs of RIMRemoveFromActiveDevices @ 0x1C0194D44
 * Callers:
 *     RIMFreePointerDevice @ 0x1C0191E14 (RIMFreePointerDevice.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01ADFB4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00438D8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0043DEC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Remove@?$CDynamicArray@PEAUtagHPD_ACTIVE_DEVICE@@$0HHHAHDFF@@@QEAA_NAEBQEAUtagHPD_ACTIVE_DEVICE@@@Z @ 0x1C018EE14 (-Remove@-$CDynamicArray@PEAUtagHPD_ACTIVE_DEVICE@@$0HHHAHDFF@@@QEAA_NAEBQEAUtagHPD_ACTIVE_DEVICE.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0195A10 (RIMUpdatePrimaryDevice.c)
 *     rimFindLastDeviceFrame @ 0x1C01A921C (rimFindLastDeviceFrame.c)
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C020ECC8 (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveFromActiveDevices(__int64 a1, __int64 a2, int a3, int *a4)
{
  int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rsi
  int v11; // r12d
  __int64 LastDeviceFrame; // rax
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  _QWORD *v25; // [rsp+90h] [rbp+8h] BYREF
  char v26; // [rsp+98h] [rbp+10h] BYREF
  int v27; // [rsp+A0h] [rbp+18h]

  v27 = a3;
  v7 = a3;
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v26, (struct _KTHREAD **)(a1 + 792));
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD **)(a1 + 448);
  v11 = 0;
  if ( v9 )
  {
    LastDeviceFrame = rimFindLastDeviceFrame(a1);
    v13 = LastDeviceFrame;
    if ( LastDeviceFrame )
    {
      v14 = 0LL;
      if ( *(_DWORD *)(LastDeviceFrame + 24) )
      {
        do
        {
          v15 = *(unsigned int *)(192 * v14 + *(_QWORD *)(v13 + 232) + 28);
          if ( (v15 & 0x2000006) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v9, v8);
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (_DWORD)v14 != *(_DWORD *)(v13 + 24) );
      }
    }
    v7 = v27;
  }
  if ( *(_QWORD *)(a1 + 504) == a2 )
    RIMUpdatePrimaryDevice(a1, 0LL);
  while ( v10 != (_QWORD *)(a1 + 448) )
  {
    v16 = v10 - 1;
    v10 = (_QWORD *)*v10;
    v25 = v16;
    if ( *v16 == a2 )
    {
      v18 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v18 + 188) &= ~8u;
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v8,
          (_DWORD)gRimLog,
          4,
          1,
          37,
          (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids,
          v18);
      if ( (v16[3] & 1) == 0 )
        ApiSetPostPointerDeviceOutOfRangeMessage(a2, v9, v8);
      if ( (*(_DWORD *)(a1 + 476) & 1) != 0 )
      {
        *((_DWORD *)v16 + 6) |= 1u;
        *(_DWORD *)(a1 + 476) |= 2u;
        if ( v7 )
        {
          *((_DWORD *)v16 + 6) |= 2u;
          *(_DWORD *)(a1 + 476) |= 4u;
        }
        v11 = 1;
      }
      else
      {
        v19 = v16[1];
        if ( *(_QWORD **)(v19 + 8) != v16 + 1 || (v20 = (_QWORD *)v16[2], (_QWORD *)*v20 != v16 + 1) )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (char *)v16);
        CDynamicArray<tagHPD_ACTIVE_DEVICE *,2003858261>::Remove(a1 + 480, &v25);
        v24 = *(_DWORD *)(a1 + 464);
        if ( !v24 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
          v24 = *(_DWORD *)(a1 + 464);
        }
        *(_DWORD *)(a1 + 464) = v24 - 1;
      }
      break;
    }
  }
  if ( a4 )
    *a4 = v11;
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v26);
  return 1LL;
}
