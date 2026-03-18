/*
 * XREFs of RIMGetDeviceParent @ 0x1C00A13E0
 * Callers:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C017C948 (RIMVirtCreateDev.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0189BB4 (RIMAllocateHidConfigDesc.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMGetPointerDevicePDO @ 0x1C00A1C34 (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A1D50 (RIMGetDeviceObjectPointer.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceParent(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  struct _DEVICE_OBJECT *v4; // rdi
  void *v5; // r15
  HANDLE v6; // r12
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  ULONG v16; // eax
  PVOID v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 Data; // rbx
  NTSTATUS DevicePropertyData; // eax
  int v21; // r8d
  char v22; // bl
  __int64 v24; // rax
  char v25; // r13
  char *v26; // rdx
  ULONG v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  PVOID BackTrace[26]; // [rsp+70h] [rbp-90h] BYREF
  ULONG RequiredSize; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+160h] [rbp+60h]
  ULONG Type; // [rsp+168h] [rbp+68h] BYREF

  v3 = 0;
  v4 = 0LL;
  Type = 0;
  v5 = 0LL;
  v6 = 0LL;
  RequiredSize = 0;
  Object = 0LL;
  *(_QWORD *)v27 = 0LL;
  Handle = 0LL;
  v32 = 0;
  if ( a1 )
  {
    v12 = RIMGetPointerDevicePDO(a1);
    goto LABEL_8;
  }
  v8 = RIMGetDeviceObjectPointer((int)a2 + 208, a2, a3, (unsigned int)&Handle, (__int64)v27, (__int64)&Object);
  if ( v8 >= 0 )
  {
    v5 = *(void **)v27;
    if ( !*(_QWORD *)v27 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    v4 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    ObfReferenceObject(v4);
    v12 = RIMGetPointerDevicePDO(v4);
    v6 = Handle;
LABEL_8:
    if ( v12 < 0
      || IoGetDevicePropertyData(0LL, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) != -1073741789 )
    {
LABEL_17:
      if ( v6 )
      {
        ZwClose(v6);
        ObfDereferenceObject(v5);
        ObfDereferenceObject(v4);
      }
      return v3;
    }
    v16 = RequiredSize;
    if ( !RequiredSize )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
      v16 = RequiredSize;
    }
    v17 = gpLeakTrackingAllocator;
    v18 = v16;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707352) != 0x70707352
      || (v24 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_13:
      Data = ExAllocatePool2(260LL, v18);
      goto LABEL_14;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v24) != 1886417746 )
    {
      if ( ++v24 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_13;
    }
    v25 = 0;
    if ( v18 < 0x1000 || (v18 & 0xFFF) != 0 )
    {
      v25 = 1;
      v18 += 16LL;
    }
    Data = ExAllocatePool2(260LL, v18);
    if ( Data )
    {
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v25 && (unsigned __int64)(Data & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v17,
                                Data,
                                BackTrace) )
        {
          Data += 16LL;
          goto LABEL_14;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v17,
                                   Data,
                                   BackTrace) )
      {
LABEL_14:
        *(_QWORD *)(a2 + 320) = Data;
        if ( Data )
        {
          DevicePropertyData = IoGetDevicePropertyData(
                                 0LL,
                                 &DEVPKEY_Device_Parent,
                                 0,
                                 0,
                                 RequiredSize,
                                 (PVOID)Data,
                                 &RequiredSize,
                                 &Type);
          v22 = DevicePropertyData;
          if ( DevicePropertyData >= 0 )
          {
            v3 = 1;
            *(_DWORD *)(a2 + 328) = RequiredSize;
            goto LABEL_17;
          }
          v26 = *(char **)(a2 + 320);
          if ( v26 )
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              v26);
          *(_QWORD *)(a2 + 320) = 0LL;
          LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v26,
              v21,
              (_DWORD)gRimLog,
              3,
              1,
              62,
              (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
              v22);
          }
        }
        v3 = v32;
        goto LABEL_17;
      }
      ExFreePoolWithTag((PVOID)Data, 0);
    }
    Data = 0LL;
    goto LABEL_14;
  }
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v11,
      (_DWORD)gRimLog,
      3,
      1,
      61,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      v8);
  }
  return 0LL;
}
