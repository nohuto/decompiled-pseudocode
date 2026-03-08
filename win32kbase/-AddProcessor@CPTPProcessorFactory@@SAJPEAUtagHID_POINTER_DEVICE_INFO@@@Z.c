/*
 * XREFs of ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020CD14
 * Callers:
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01BA8B0 (RIMVirtCreatePointerDeviceInfo.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1C01BC3D8 (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C020CBAC (--0CPTPProcessor@@AEAA@XZ.c)
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020DF74 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall CPTPProcessorFactory::AddProcessor(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rdi
  int v3; // eax
  __int64 Pool2; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r10
  CPTPProcessor *v7; // rax
  CPTPProcessor *v8; // rbx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v13; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned __int64 v14; // [rsp+120h] [rbp+77h] BYREF
  __int64 v15; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = gpLeakTrackingAllocator;
  v13 = 1919964227;
  v15 = 260LL;
  v10 = 2488LL;
  v3 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 2488LL, 1919964227LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
    goto LABEL_16;
  }
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
    {
      v14 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1919964227, &v14) )
      {
        v11[0] = &v15;
        v11[1] = &v13;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v1,
                  (__int64)v11,
                  &v10);
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(v6, 2504LL, 1919964227LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v1,
                 Pool2,
                 v14,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_19;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v1,
                    (const void *)Pool2,
                    v14,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_16;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 3221225495LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x72705443u) )
    return 3221225495LL;
  v5 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, 2504LL, v13);
  Pool2 = (__int64)v5;
  if ( !v5
    || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
        *v5 = 1919964227LL,
        Pool2 = (__int64)(v5 + 2),
        v5 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v1 + 1),
      0x72705443uLL);
  }
LABEL_16:
  if ( !Pool2 )
    return 3221225495LL;
LABEL_19:
  v7 = CPTPProcessor::CPTPProcessor((CPTPProcessor *)Pool2);
  v8 = v7;
  if ( !v7 )
    return 3221225495LL;
  result = CPTPProcessor::InitState(v7, a1);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)a1 + 132) = v8;
    return 0LL;
  }
  return result;
}
