/*
 * XREFs of rimFindOtherQueuedFrames @ 0x1C01D25F8
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C01D2AB4 (rimProcessAnyQueuedCompleteFrames.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C00F0A58 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMFixUpCompleteFrame @ 0x1C01CD8B0 (RIMFixUpCompleteFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x1C01D2494 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 */

__int64 __fastcall rimFindOtherQueuedFrames(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int **a4,
        __int64 *a5,
        unsigned int *a6)
{
  unsigned int v6; // r10d
  _QWORD **v7; // r15
  char v8; // r14
  unsigned int *v9; // r12
  _QWORD *v10; // r8
  unsigned int v11; // esi
  _QWORD *v12; // r13
  __int64 v13; // rdx
  unsigned int v14; // ecx
  NSInstrumentation::CLeakTrackingAllocator *v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  unsigned int v20; // r10d
  __int64 v21; // r11
  int v22; // edx
  int v23; // r8d
  _QWORD *v24; // r15
  char *v25; // r14
  _QWORD *v26; // r13
  _QWORD *v27; // rdi
  __int64 v28; // r10
  __int64 v29; // r9
  __int64 v30; // rax
  _QWORD *v31; // rcx
  int v33; // [rsp+28h] [rbp-E0h]
  int v34; // [rsp+30h] [rbp-D8h]
  int v35; // [rsp+40h] [rbp-C8h]
  __int64 v36; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v37[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v38; // [rsp+78h] [rbp-90h]
  __int64 v39; // [rsp+80h] [rbp-88h] BYREF
  PVOID BackTrace[28]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v43; // [rsp+188h] [rbp+80h] BYREF
  unsigned int **v44; // [rsp+190h] [rbp+88h]

  v44 = a4;
  v6 = *a3;
  v7 = (_QWORD **)(a1 + 744);
  v8 = 0;
  v38 = (_QWORD *)(a1 + 744);
  *a4 = 0LL;
  v9 = a3;
  v10 = *(_QWORD **)(a1 + 744);
  v11 = v6;
  v12 = (_QWORD *)(a1 + 744);
  *a5 = 0LL;
  *a6 = 0;
  if ( v10 == (_QWORD *)(a1 + 744) )
    return 0LL;
  v13 = *(_QWORD *)(a2 + 32);
  while ( v10[4] == v13 )
  {
    v14 = v11 + *((_DWORD *)v10 - 2);
    if ( v14 > 0x2710 )
      break;
    v10 = (_QWORD *)*v10;
    v11 = v14;
    if ( v10 == v7 )
      goto LABEL_8;
  }
  v12 = v10;
  v38 = v10;
LABEL_8:
  if ( v11 == v6 )
    return 0LL;
  v15 = gpLeakTrackingAllocator;
  v16 = v11;
  v43 = 1717793618;
  v39 = 260LL;
  v17 = *(_DWORD *)gpLeakTrackingAllocator;
  v36 = v11;
  if ( v17 )
  {
    if ( v17 != 1 )
    {
      if ( v17 == 2 )
      {
        v37[0] = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1717793618, v37) )
        {
          v37[0] = (unsigned __int64)&v39;
          v37[1] = (unsigned __int64)&v43;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v15,
                                                                                             (__int64)v37,
                                                                                             &v36);
          goto LABEL_29;
        }
        if ( v11 < 0x1000uLL || (v11 & 0xFFF) != 0 )
        {
          v16 = v11 + 16LL;
          v8 = 1;
          v36 = v16;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v21, v16, v20);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          return 0LL;
        _InterlockedIncrement64((volatile signed __int64 *)v15 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v8
          && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v15,
                 (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v37[0],
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            v38 = v12;
            goto LABEL_29;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v15,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v37[0],
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          v38 = v12;
          goto LABEL_33;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v15 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
      return 0LL;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x66637352u)
      || (unsigned __int64)v11 + 16 < v11 )
    {
      return 0LL;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(v39 & 0xFFFFFFFFFFFFFFFDuLL, v11 + 16LL, v43);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v15 + 14),
          *Pool2 = 1717793618LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v15 + 1),
        0x66637352uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       v11,
                                                                                       1717793618LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v15 + 14);
  }
LABEL_29:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return 0LL;
LABEL_33:
  memmove((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, v9, *v9);
  RIMFixUpCompleteFrame(a1, a2, UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, v9, 1);
  v24 = *v7;
  v25 = (char *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + *v9);
  if ( v24 != v12 )
  {
    do
    {
      v26 = v24 - 1;
      v27 = v24;
      v24 = (_QWORD *)*v24;
      if ( !gbIgnoreStressedOutStuff && v26[4] != *((_QWORD *)v9 + 4) )
      {
        LODWORD(v36) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 806);
      }
      v28 = a2;
      if ( !*(_QWORD *)(a2 + 192) )
      {
        LODWORD(v37[0]) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 807);
        v28 = a2;
      }
      v29 = *(_QWORD *)(v28 + 192) - 1LL;
      *(_QWORD *)(v28 + 192) = v29;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v22) = 0;
      }
      if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qi(WPP_GLOBAL_Control->AttachedDevice, v22, v23, v29, v33, v34, 18, v35, v28, v29);
      }
      v30 = *v27;
      if ( *(_QWORD **)(*v27 + 8LL) != v27 || (v31 = (_QWORD *)v27[1], (_QWORD *)*v31 != v27) )
        __fastfail(3u);
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
      v27[1] = v27;
      *v27 = v27;
      v26[5] = 0LL;
      if ( v9 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v9);
      memmove(v25, v26, *(unsigned int *)v26);
      RIMFixUpCompleteFrame(a1, a2, (__int64)v25, v26, 1);
      v25 += *(unsigned int *)v26;
      v9 = (unsigned int *)v26;
      InputTraceLogging::RIM::DispatchFrame(a2);
      ObfDereferenceObject(*(PVOID *)(a2 + 32));
    }
    while ( v24 != v38 );
  }
  if ( (char *)(int)v11 != &v25[-UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 835);
  *v44 = v9;
  *a5 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  *a6 = v11;
  return 1LL;
}
