/*
 * XREFs of RIMGetKbdExId @ 0x1C00B9AE0
 * Callers:
 *     RIMQueryDev @ 0x1C00B9950 (RIMQueryDev.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C007327C (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall RIMGetKbdExId(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS v4; // esi
  char v5; // dl
  NSInstrumentation::CLeakTrackingAllocator *v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // eax
  __int64 Pool2; // rbx
  _QWORD *v11; // rax
  unsigned int v12; // edx
  __int64 v13; // r10
  char v14; // r14
  PVOID DataBlockObject; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v16[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING InstanceName; // [rsp+80h] [rbp-80h] BYREF
  PVOID BackTrace[24]; // [rsp+90h] [rbp-70h] BYREF
  ULONG InOutBufferSize; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v22; // [rsp+178h] [rbp+78h] BYREF

  InOutBufferSize = 0;
  DataBlockObject = 0LL;
  InstanceName = 0LL;
  v4 = IoWMIOpenBlock(&MSKeyboard_ExtendedID_GUID, 1u, &DataBlockObject);
  if ( v4 >= 0 )
  {
    v4 = IoWMIHandleToInstanceName(DataBlockObject, FileHandle, &InstanceName);
    if ( v4 < 0 )
    {
LABEL_17:
      ObfDereferenceObject(DataBlockObject);
      return (unsigned int)v4;
    }
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_S(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0x14u,
        (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids,
        InstanceName.Buffer);
    IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
    v6 = gpLeakTrackingAllocator;
    InOutBufferSize += 8;
    v7 = InOutBufferSize;
    v22 = 1701540690;
    v8 = *(_DWORD *)gpLeakTrackingAllocator;
    v17 = 68LL;
    v18 = InOutBufferSize;
    if ( !v8 )
    {
      Pool2 = ExAllocatePool2(68LL, InOutBufferSize, 1701540690LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
LABEL_12:
      if ( Pool2 )
      {
LABEL_13:
        v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, (PVOID)Pool2);
        if ( v4 >= 0 )
          *a2 = *(_QWORD *)(*(unsigned int *)(Pool2 + 56) + Pool2);
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
      }
LABEL_16:
      RtlFreeUnicodeString(&InstanceName);
      goto LABEL_17;
    }
    if ( v8 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x656B7352u)
        || v7 + 16 < v7 )
      {
        goto LABEL_16;
      }
      v11 = (_QWORD *)ExAllocatePool2(v17 & 0xFFFFFFFFFFFFFFFDuLL, v7 + 16, v22);
      Pool2 = (__int64)v11;
      if ( !v11
        || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
            *v11 = 1701540690LL,
            Pool2 = (__int64)(v11 + 2),
            v11 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v6 + 1),
          (const void *)0x656B7352);
      }
      goto LABEL_12;
    }
    if ( v8 != 2 )
      goto LABEL_16;
    v16[0] = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x656B7352u, v16) )
    {
      v16[0] = (unsigned __int64)&v17;
      v16[1] = (unsigned __int64)&v22;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v6,
                (__int64)v16,
                &v18);
      goto LABEL_12;
    }
    v14 = 0;
    if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
    {
      v7 += 16LL;
      v14 = 1;
      v18 = v7;
    }
    Pool2 = ExAllocatePool2(v13, v7, v12);
    if ( !Pool2 )
      goto LABEL_16;
    _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v14 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v6,
                              Pool2,
                              v16[0],
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_12;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v6,
                                 Pool2,
                                 v16[0],
                                 BackTrace) )
    {
      goto LABEL_13;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_16;
  }
  return (unsigned int)v4;
}
