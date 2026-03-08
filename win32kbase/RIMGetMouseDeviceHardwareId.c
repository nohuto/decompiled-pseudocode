/*
 * XREFs of RIMGetMouseDeviceHardwareId @ 0x1C002FBE8
 * Callers:
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 * Callees:
 *     RIMGetDeviceObjectPointer @ 0x1C0031148 (RIMGetDeviceObjectPointer.c)
 *     RIMGetPointerDevicePDO @ 0x1C0031414 (RIMGetPointerDevicePDO.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall RIMGetMouseDeviceHardwareId(__int64 a1, char a2, char a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rdi
  int v5; // eax
  __int64 Pool2; // rbx
  NTSTATUS DevicePropertyData; // ebx
  struct _DEVICE_OBJECT *v8; // rdi
  void *v9; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rdi
  __int64 Size; // r15
  unsigned __int64 v12; // rbx
  int v13; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int16 v15; // ax
  char v16; // dl
  _QWORD *v18; // rax
  __int64 v19; // r10
  char v20; // dl
  _QWORD *v21; // rax
  __int64 v22; // r10
  char v23; // r14
  PVOID Data; // [rsp+28h] [rbp-D8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  PVOID v33; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v35[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v36[2]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID BackTrace[20]; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v38[28]; // [rsp+160h] [rbp+60h] BYREF
  ULONG RequiredSize; // [rsp+250h] [rbp+150h] BYREF
  ULONG Type; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v41; // [rsp+260h] [rbp+160h] BYREF
  unsigned int v42; // [rsp+268h] [rbp+168h] BYREF

  v3 = gpLeakTrackingAllocator;
  Object = 0LL;
  v33 = 0LL;
  Handle = 0LL;
  v5 = *(_DWORD *)gpLeakTrackingAllocator;
  v41 = 1684630869;
  v34 = 200LL;
  v29 = 260LL;
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(260LL, 200LL, 1684630869LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
    goto LABEL_4;
  }
  if ( v5 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x64696D55u) )
    {
      v18 = (_QWORD *)ExAllocatePool2(v29 & 0xFFFFFFFFFFFFFFFDuLL, 216LL, v41);
      Pool2 = (__int64)v18;
      if ( !v18
        || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
            *v18 = 1684630869LL,
            Pool2 = (__int64)(v18 + 2),
            v18 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v3 + 1),
          (const void *)0x64696D55);
      }
      goto LABEL_4;
    }
    goto LABEL_39;
  }
  if ( v5 != 2 )
    goto LABEL_39;
  v27 = 0LL;
  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x64696D55u, &v27) )
  {
    Pool2 = ExAllocatePool2(v19, 216LL, 1684630869LL);
    if ( Pool2 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v3,
                                Pool2,
                                v27,
                                BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_4;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v3,
                                   Pool2,
                                   v27,
                                   BackTrace) )
      {
        goto LABEL_4;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    }
LABEL_39:
    Pool2 = 0LL;
    goto LABEL_4;
  }
  v35[0] = &v29;
  v35[1] = &v41;
  Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
            v3,
            v35,
            &v34);
LABEL_4:
  *(_QWORD *)(a1 + 896) = Pool2;
  if ( !Pool2 )
  {
    DevicePropertyData = -1073741801;
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 888) = 13107200;
  DevicePropertyData = RIMGetDeviceObjectPointer(
                         (int)a1 + 208,
                         a2,
                         a3,
                         (unsigned int)&Handle,
                         (__int64)&v33,
                         (__int64)&Object);
  if ( DevicePropertyData < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v20 = 0;
    }
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v20,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        3,
        1,
        11,
        (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids,
        DevicePropertyData);
    goto LABEL_20;
  }
  v8 = (struct _DEVICE_OBJECT *)Object;
  ObfReferenceObject(Object);
  Pdo = 0LL;
  DevicePropertyData = RIMGetPointerDevicePDO(v8);
  if ( DevicePropertyData < 0 )
    goto LABEL_19;
  Type = 0;
  Data = *(PVOID *)(a1 + 896);
  RequiredSize = 200;
  DevicePropertyData = IoGetDevicePropertyData(
                         Pdo,
                         &DEVPKEY_Device_HardwareIds,
                         0,
                         0,
                         0xC8u,
                         Data,
                         &RequiredSize,
                         &Type);
  if ( DevicePropertyData != -1073741789 )
  {
LABEL_16:
    if ( DevicePropertyData >= 0 )
    {
      v15 = RequiredSize;
      *(_WORD *)(a1 + 888) = RequiredSize;
      *(_WORD *)(a1 + 890) = v15;
    }
    goto LABEL_18;
  }
  while ( 1 )
  {
    v9 = *(void **)(a1 + 896);
    if ( v9 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
    v10 = gpLeakTrackingAllocator;
    Size = (unsigned __int16)RequiredSize;
    v12 = (unsigned __int16)RequiredSize;
    v42 = 1684630869;
    v30 = 260LL;
    v13 = *(_DWORD *)gpLeakTrackingAllocator;
    v31 = (unsigned __int16)RequiredSize;
    if ( v13 )
      break;
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       (unsigned __int16)RequiredSize,
                                                                                       1684630869LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v10 + 14);
LABEL_13:
    *(_QWORD *)(a1 + 896) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_71;
LABEL_14:
    *(_WORD *)(a1 + 890) = Size;
    *(_WORD *)(a1 + 888) = 0;
    Type = 0;
    RequiredSize = Size;
    DevicePropertyData = IoGetDevicePropertyData(
                           Pdo,
                           &DEVPKEY_Device_HardwareIds,
                           0,
                           0,
                           Size,
                           (PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                           &RequiredSize,
                           &Type);
    if ( DevicePropertyData != -1073741789 )
    {
      v8 = (struct _DEVICE_OBJECT *)Object;
      goto LABEL_16;
    }
  }
  if ( v13 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x64696D55u)
      || Size + 16 <= v12 )
    {
      goto LABEL_70;
    }
    v21 = (_QWORD *)ExAllocatePool2(v30 & 0xFFFFFFFFFFFFFFFDuLL, Size + 16, v42);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v21;
    if ( !v21
      || (_InterlockedIncrement64((volatile signed __int64 *)v10 + 14),
          *v21 = 1684630869LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v21 + 2),
          v21 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v10 + 1),
        (const void *)0x64696D55);
    }
    goto LABEL_13;
  }
  if ( v13 != 2 )
    goto LABEL_70;
  v28 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x64696D55u, &v28) )
  {
    v36[0] = &v30;
    v36[1] = &v42;
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                       v10,
                                                                                       v36,
                                                                                       &v31);
    goto LABEL_13;
  }
  v23 = 0;
  if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
  {
    v12 += 16LL;
    v23 = 1;
    v31 = v12;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                     v22,
                                                                                     v12,
                                                                                     1684630869LL);
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    goto LABEL_70;
  _InterlockedIncrement64((volatile signed __int64 *)v10 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(v38);
  if ( v23
    && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v10,
                             UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                             v28,
                             v38) )
      goto LABEL_69;
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
    goto LABEL_13;
  }
  if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                          v10,
                          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                          v28,
                          v38) )
  {
    *(_QWORD *)(a1 + 896) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    goto LABEL_14;
  }
LABEL_69:
  _InterlockedIncrement64((volatile signed __int64 *)v10 + 17);
  _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
LABEL_70:
  *(_QWORD *)(a1 + 896) = 0LL;
LABEL_71:
  v8 = (struct _DEVICE_OBJECT *)Object;
  DevicePropertyData = -1073741801;
LABEL_18:
  ObfDereferenceObject(Pdo);
LABEL_19:
  ZwClose(Handle);
  ObfDereferenceObject(v33);
  ObfDereferenceObject(v8);
LABEL_20:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v16 = 0;
  }
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      12,
      (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids,
      DevicePropertyData);
  return (unsigned int)DevicePropertyData;
}
