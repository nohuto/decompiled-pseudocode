/*
 * XREFs of RIMGetKbdExId @ 0x1C008C900
 * Callers:
 *     RIMQueryDev @ 0x1C0089258 (RIMQueryDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0037E30 (WPP_RECORDER_AND_TRACE_SF_S.c)
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

__int64 __fastcall RIMGetKbdExId(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS v4; // esi
  int v5; // edx
  int v6; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v7; // rdi
  unsigned __int64 v8; // rbx
  int v9; // eax
  __int64 Pool2; // rbx
  _QWORD *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r10
  char v15; // r14
  PVOID DataBlockObject; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v17[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING InstanceName; // [rsp+80h] [rbp-80h] BYREF
  PVOID BackTrace[24]; // [rsp+90h] [rbp-70h] BYREF
  ULONG InOutBufferSize; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v23; // [rsp+178h] [rbp+78h] BYREF

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
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_S(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        (_DWORD)gRimLog,
        4,
        1,
        20,
        (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids,
        (__int64)InstanceName.Buffer);
    }
    IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
    v7 = gpLeakTrackingAllocator;
    InOutBufferSize += 8;
    v8 = InOutBufferSize;
    v23 = 1701540690;
    v9 = *(_DWORD *)gpLeakTrackingAllocator;
    v18 = 68LL;
    v19 = InOutBufferSize;
    if ( !v9 )
    {
      Pool2 = ExAllocatePool2(68LL, InOutBufferSize, 1701540690LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
LABEL_12:
      if ( Pool2 )
      {
LABEL_13:
        v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, (PVOID)Pool2);
        if ( v4 >= 0 )
          *a2 = *(_QWORD *)(*(unsigned int *)(Pool2 + 56) + Pool2);
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
      }
LABEL_16:
      RtlFreeUnicodeString(&InstanceName);
      goto LABEL_17;
    }
    if ( v9 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x656B7352u)
        || v8 + 16 < v8 )
      {
        goto LABEL_16;
      }
      v12 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, v8 + 16, v23);
      Pool2 = (__int64)v12;
      if ( !v12
        || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
            *v12 = 1701540690LL,
            Pool2 = (__int64)(v12 + 2),
            v12 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v7 + 1),
          (const void *)0x656B7352);
      }
      goto LABEL_12;
    }
    if ( v9 != 2 )
      goto LABEL_16;
    v17[0] = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x656B7352u, v17) )
    {
      v17[0] = (unsigned __int64)&v18;
      v17[1] = (unsigned __int64)&v23;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v7,
                (__int64)v17,
                &v19);
      goto LABEL_12;
    }
    v15 = 0;
    if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
    {
      v8 += 16LL;
      v15 = 1;
      v19 = v8;
    }
    Pool2 = ExAllocatePool2(v14, v8, v13);
    if ( !Pool2 )
      goto LABEL_16;
    _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v7,
                              Pool2,
                              v17[0],
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_12;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v7,
                                 Pool2,
                                 v17[0],
                                 BackTrace) )
    {
      goto LABEL_13;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_16;
  }
  return (unsigned int)v4;
}
