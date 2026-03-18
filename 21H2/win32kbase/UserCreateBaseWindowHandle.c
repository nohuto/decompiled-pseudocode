/*
 * XREFs of UserCreateBaseWindowHandle @ 0x1C0166410
 * Callers:
 *     NtUserCreateBaseWindow @ 0x1C0156F90 (NtUserCreateBaseWindow.c)
 * Callees:
 *     HMAllocObjectEx @ 0x1C002D20C (HMAllocObjectEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C004AB80 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     HMFreeObject @ 0x1C004E3F0 (HMFreeObject.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

char *__fastcall UserCreateBaseWindowHandle(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  unsigned __int64 v4; // r12
  char v6; // si
  __int64 v7; // r9
  char v8; // bp
  struct tagTHREADINFO *v9; // r14
  char *v10; // rbx
  __int64 Pool2; // rdi
  __int64 v12; // rcx
  int v13; // edx
  int v14; // r8d
  PVOID v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  PVOID v19; // r14
  __int64 v20; // rax
  __int64 v21; // rbx
  PVOID BackTrace[20]; // [rsp+60h] [rbp-168h] BYREF
  PVOID v24[20]; // [rsp+100h] [rbp-C8h] BYREF

  v3 = a3;
  v4 = (unsigned int)a2;
  v6 = 0;
  v7 = 1024LL;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
  {
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      10,
      (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids);
    v7 = 1024LL;
  }
  v9 = gptiCurrent;
  v10 = 0LL;
  Pool2 = 0LL;
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(a3) = 0;
    }
    if ( (_BYTE)a2 || (_BYTE)a3 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        5,
        11,
        11,
        (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids);
    v12 = 87LL;
LABEL_23:
    UserSetLastError(v12, a2, a3, v7);
    goto LABEL_79;
  }
  if ( (*((_DWORD *)gptiCurrent + 314) & 0x1000000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(a3) = 0;
    }
    if ( (_BYTE)a2 || (_BYTE)a3 )
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        5,
        11,
        14,
        (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
        (char)gptiCurrent);
    v12 = 4317LL;
    goto LABEL_23;
  }
  if ( !(_DWORD)v4 )
    goto LABEL_50;
  v15 = gpLeakTrackingAllocator;
  v16 = v4;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64776255) != 0x64776255
    || (v17 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_30:
    Pool2 = ExAllocatePool2(260LL, v4);
    goto LABEL_31;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v17) != 1685545557 )
  {
    if ( ++v17 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_30;
  }
  if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
  {
    v6 = 1;
    v16 = v4 + 16;
  }
  Pool2 = ExAllocatePool2(260LL, v16);
  if ( !Pool2 )
    goto LABEL_43;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v6 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            v15,
                            Pool2,
                            BackTrace) )
      goto LABEL_50;
LABEL_49:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_43:
    Pool2 = 0LL;
LABEL_32:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        11,
        12,
        (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
        (char)v9,
        a1,
        v4);
    }
LABEL_76:
    if ( Pool2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Pool2);
    v10 = 0LL;
    goto LABEL_79;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v15,
                           Pool2,
                           BackTrace) )
    goto LABEL_49;
  Pool2 += 16LL;
LABEL_31:
  if ( !Pool2 )
    goto LABEL_32;
LABEL_50:
  v18 = HMAllocObjectEx((__int64)v9, 0LL, 0x17u, 0x90u, v3);
  if ( !v18 )
  {
    LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        11,
        13,
        (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
        (char)v9,
        a1);
    }
    goto LABEL_76;
  }
  v19 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x68707355) != 0x68707355
    || (v20 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_55:
    v21 = ExAllocatePool2(260LL, 32LL);
    goto LABEL_56;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v20) != 1752200021 )
  {
    if ( ++v20 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_55;
  }
  v21 = ExAllocatePool2(260LL, 48LL);
  if ( !v21 )
    goto LABEL_61;
  memset(v24, 0, sizeof(v24));
  RtlCaptureStackBackTrace(0, 0x14u, v24, 0LL);
  if ( (unsigned __int64)(v21 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(v19, v21, v24) )
      goto LABEL_64;
    v21 += 16LL;
  }
  else if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v19,
                                v21,
                                v24) )
  {
LABEL_64:
    ExFreePoolWithTag((PVOID)v21, 0);
LABEL_61:
    v21 = 0LL;
  }
LABEL_56:
  *(_QWORD *)(v18 + 80) = v21;
  if ( v21 )
  {
    *(_QWORD *)v21 = 0LL;
    *(_QWORD *)(v21 + 8) = 0LL;
    *(_DWORD *)(v21 + 16) = 0;
    *(_DWORD *)(v18 + 132) &= ~2u;
    v10 = *(char **)v18;
    *(_DWORD *)(v18 + 128) = v4;
    *(_QWORD *)(v18 + 56) = a1;
    *(_QWORD *)(v18 + 120) = Pool2;
    *(_QWORD *)(v18 + 104) = v18 + 96;
    *(_QWORD *)(v18 + 96) = v18 + 96;
LABEL_79:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( (_BYTE)v13 || v8 )
    {
      LOBYTE(v14) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        11,
        15,
        (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids);
    }
    return v10;
  }
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  HMFreeObject((char **)v18);
  return 0LL;
}
