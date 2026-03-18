/*
 * XREFs of RIMGetProductString @ 0x1C0193764
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00AAF8C (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     wcscmp_0 @ 0x1C00DD7E3 (wcscmp_0.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall RIMGetProductString(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3)
{
  PVOID v3; // rbx
  int v7; // eax
  unsigned int Status; // r15d
  __int64 v9; // rax
  __int64 OutputBuffer; // rsi
  PIRP v11; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // edx
  int v15; // r8d
  PVOID v16; // r14
  ULONG_PTR v17; // rdx
  __int64 v18; // rax
  __int64 Pool2; // rbx
  size_t Information; // r8
  void *v21; // rcx
  unsigned __int64 v22; // rdx
  const unsigned __int16 *v23; // rcx
  char v24; // r12
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-B0h] BYREF
  struct _KEVENT Event_8; // [rsp+68h] [rbp-A0h] BYREF
  PVOID BackTrace[20]; // [rsp+88h] [rbp-80h] BYREF
  PVOID v29[20]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v30; // [rsp+210h] [rbp+108h] BYREF

  v3 = gpLeakTrackingAllocator;
  v7 = *((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6B707352;
  Status = -1073741811;
  memset(&Event_8, 0, sizeof(Event_8));
  IoStatusBlock = 0LL;
  if ( v7 == 1802531666 && (v9 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1802531666 )
    {
      if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    OutputBuffer = ExAllocatePool2(68LL, 528LL);
    if ( !OutputBuffer )
      return Status;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(OutputBuffer & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
              (__int64)v3,
              OutputBuffer,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_18:
        ExFreePoolWithTag((PVOID)OutputBuffer, 0);
        return Status;
      }
LABEL_7:
      KeInitializeEvent(&Event_8, NotificationEvent, 0);
      v11 = IoBuildDeviceIoControlRequest(
              0xB01BEu,
              a2,
              0LL,
              0,
              (PVOID)OutputBuffer,
              0x200u,
              0,
              &Event_8,
              &IoStatusBlock);
      v13 = (int)v11;
      if ( !v11 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v13) = 0;
        }
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v12,
            (_DWORD)gRimLog,
            3,
            1,
            20,
            (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
        }
        goto LABEL_54;
      }
      v11->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
      Status = IofCallDriver(a2, v11);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event_8, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v14) = 0;
        }
        if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v14,
            v15,
            (_DWORD)gRimLog,
            3,
            1,
            21,
            (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids,
            Status);
        }
        goto LABEL_54;
      }
      if ( IoStatusBlock.Information > 0x200 )
      {
        Status = -1073741811;
LABEL_54:
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (char *)OutputBuffer);
        return Status;
      }
      v16 = gpLeakTrackingAllocator;
      v17 = IoStatusBlock.Information + 2;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x77647352) != 0x77647352
        || (v18 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
LABEL_36:
        Pool2 = ExAllocatePool2(260LL, v17);
        goto LABEL_37;
      }
      while ( *((_DWORD *)gpLeakTrackingAllocator + v18) != 2003071826 )
      {
        if ( ++v18 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_36;
      }
      v24 = 0;
      if ( v17 < 0x1000 || (v17 & 0xFFF) != 0 )
      {
        v24 = 1;
        v17 = IoStatusBlock.Information + 18;
      }
      Pool2 = ExAllocatePool2(260LL, v17);
      if ( !Pool2 )
        goto LABEL_46;
      memset(v29, 0, sizeof(v29));
      RtlCaptureStackBackTrace(0, 0x14u, v29, 0LL);
      if ( v24 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v16,
               (const void *)Pool2,
               (struct NSInstrumentation::CBackTrace *)v29) )
        {
          Pool2 += 16LL;
          goto LABEL_37;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v16,
                  Pool2,
                  (struct NSInstrumentation::CBackTrace *)v29) )
      {
LABEL_37:
        *(_QWORD *)(a1 + 376) = Pool2;
        if ( Pool2 )
        {
          *(_WORD *)(Pool2 + 2 * (IoStatusBlock.Information >> 1)) = 0;
          Information = IoStatusBlock.Information;
          v21 = *(void **)(a1 + 376);
          *(_WORD *)(a1 + 368) = IoStatusBlock.Information;
          *(_WORD *)(a1 + 370) = Information + 2;
          memmove(v21, (const void *)OutputBuffer, Information);
          v22 = *(unsigned __int16 *)(a1 + 370);
          v23 = *(const unsigned __int16 **)(a1 + 376);
          v30 = 0LL;
          if ( (int)RtlStringCbLengthW(v23, v22, &v30) >= 0 )
            *(_WORD *)(a1 + 368) = v30;
          if ( !wcscmp_0(*(const wchar_t **)(a1 + 376), L"VHidPen") )
            *(_DWORD *)(a1 + 360) |= 0x4000u;
        }
        goto LABEL_54;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_46:
      Pool2 = 0LL;
      goto LABEL_37;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v3,
            (const void *)OutputBuffer,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_18;
    OutputBuffer += 16LL;
  }
  else
  {
LABEL_5:
    OutputBuffer = ExAllocatePool2(68LL, 512LL);
  }
  if ( OutputBuffer )
    goto LABEL_7;
  return Status;
}
