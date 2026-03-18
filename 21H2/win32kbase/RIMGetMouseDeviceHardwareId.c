/*
 * XREFs of RIMGetMouseDeviceHardwareId @ 0x1C00A0FE0
 * Callers:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMGetPointerDevicePDO @ 0x1C00A1C34 (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A1D50 (RIMGetDeviceObjectPointer.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall RIMGetMouseDeviceHardwareId(__int64 a1)
{
  PVOID v1; // rsi
  char v2; // r14
  int v4; // edx
  __int64 Pool2; // rbx
  int v6; // r8d
  NTSTATUS DevicePropertyData; // ebx
  struct _DEVICE_OBJECT *v8; // r12
  char *v9; // rdx
  PVOID v10; // rsi
  ULONG v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int16 v14; // ax
  __int64 v16; // rax
  __int64 v17; // rax
  ULONG Size; // [rsp+20h] [rbp-E0h]
  PVOID Data; // [rsp+28h] [rbp-D8h]
  PVOID v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[28]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+150h] [rbp+50h] BYREF
  ULONG Type; // [rsp+158h] [rbp+58h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+160h] [rbp+60h]
  HANDLE Handle; // [rsp+168h] [rbp+68h] BYREF

  v1 = gpLeakTrackingAllocator;
  v2 = 0;
  Object = 0LL;
  v20[0] = 0LL;
  Handle = 0LL;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64696D55) == 0x64696D55
    && (v16 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v16) != 1684630869 )
    {
      if ( ++v16 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_2;
    }
    Pool2 = ExAllocatePool2(260LL, 216LL);
    if ( !Pool2 )
      goto LABEL_33;
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v1,
                              Pool2,
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_3;
      }
      goto LABEL_32;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v1,
                             Pool2,
                             BackTrace) )
    {
LABEL_32:
      ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_33:
      Pool2 = 0LL;
    }
  }
  else
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 200LL);
  }
LABEL_3:
  *(_QWORD *)(a1 + 896) = Pool2;
  if ( !Pool2 )
  {
    DevicePropertyData = -1073741801;
    goto LABEL_18;
  }
  *(_DWORD *)(a1 + 888) = 13107200;
  DevicePropertyData = RIMGetDeviceObjectPointer(
                         (int)a1 + 208,
                         v4,
                         v6,
                         (unsigned int)&Handle,
                         (__int64)v20,
                         (__int64)&Object);
  if ( DevicePropertyData < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v4) = 0;
    }
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v6,
        (_DWORD)gRimLog,
        3,
        1,
        11,
        (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids,
        DevicePropertyData);
    }
    goto LABEL_18;
  }
  v8 = (struct _DEVICE_OBJECT *)Object;
  ObfReferenceObject(Object);
  Pdo = 0LL;
  DevicePropertyData = RIMGetPointerDevicePDO(v8);
  if ( DevicePropertyData < 0 )
    goto LABEL_17;
  LODWORD(Object) = 200;
  Data = *(PVOID *)(a1 + 896);
  Size = 200;
  while ( 1 )
  {
    Type = 0;
    DevicePropertyData = IoGetDevicePropertyData(
                           Pdo,
                           &DEVPKEY_Device_HardwareIds,
                           0,
                           0,
                           Size,
                           Data,
                           (PULONG)&Object,
                           &Type);
    if ( DevicePropertyData != -1073741789 )
      break;
    v9 = *(char **)(a1 + 896);
    if ( v9 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v9);
    v10 = gpLeakTrackingAllocator;
    v11 = (unsigned __int16)Object;
    v12 = (unsigned __int16)Object;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64696D55) != 0x64696D55
      || (v17 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_11:
      v13 = ExAllocatePool2(260LL, (unsigned __int16)Object);
LABEL_12:
      *(_QWORD *)(a1 + 896) = v13;
      if ( !v13 )
        goto LABEL_60;
      goto LABEL_13;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v17) != 1684630869 )
    {
      if ( ++v17 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_11;
    }
    if ( (unsigned __int16)Object < 0x1000uLL || ((unsigned __int16)Object & 0xFFF) != 0 )
    {
      v2 = 1;
      v12 = (unsigned __int16)Object + 16LL;
    }
    v13 = ExAllocatePool2(260LL, v12);
    if ( !v13 )
      goto LABEL_59;
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v2 && (unsigned __int64)(v13 & 0xFFF) + 16 < 0x1000 )
    {
      v2 = 0;
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v10,
                               v13,
                               BackTrace) )
        goto LABEL_58;
      v13 += 16LL;
      goto LABEL_12;
    }
    v2 = 0;
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v10,
                             v13,
                             BackTrace) )
    {
LABEL_58:
      ExFreePoolWithTag((PVOID)v13, 0);
LABEL_59:
      *(_QWORD *)(a1 + 896) = 0LL;
LABEL_60:
      DevicePropertyData = -1073741801;
      goto LABEL_16;
    }
    *(_QWORD *)(a1 + 896) = v13;
LABEL_13:
    *(_WORD *)(a1 + 890) = v11;
    *(_WORD *)(a1 + 888) = 0;
    Data = (PVOID)v13;
    Size = v11;
    LODWORD(Object) = v11;
  }
  if ( DevicePropertyData >= 0 )
  {
    v14 = (__int16)Object;
    *(_WORD *)(a1 + 888) = (_WORD)Object;
    *(_WORD *)(a1 + 890) = v14;
  }
LABEL_16:
  ObfDereferenceObject(Pdo);
LABEL_17:
  ZwClose(Handle);
  ObfDereferenceObject(v20[0]);
  ObfDereferenceObject(v8);
LABEL_18:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v4) = 0;
  }
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v6,
      (_DWORD)gRimLog,
      4,
      1,
      12,
      (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids,
      DevicePropertyData);
  }
  return (unsigned int)DevicePropertyData;
}
