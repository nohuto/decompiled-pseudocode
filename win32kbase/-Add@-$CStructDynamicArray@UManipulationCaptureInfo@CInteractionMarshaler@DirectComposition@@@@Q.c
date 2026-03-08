/*
 * XREFs of ?Add@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAJAEBUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@Z @ 0x1C0263EEC
 * Callers:
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C024AB04 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0251C64 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Add(
        __int64 a1,
        _OWORD *a2)
{
  int v2; // ebx
  NSInstrumentation::CLeakTrackingAllocator *v5; // rsi
  int v6; // eax
  __int64 Pool2; // rdi
  _QWORD *v8; // rax
  __int64 v9; // r10
  __int64 v11; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v14; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v15; // [rsp+130h] [rbp+77h] BYREF
  __int64 v16; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = 0;
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a1 + 12)
    || (v2 = CDynamicArray<InjectManipulationArgs *,2003858261>::Grow(a1), v2 >= 0) )
  {
    if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
      return (unsigned int)-1073741823;
    v5 = gpLeakTrackingAllocator;
    v14 = 845431620;
    v16 = 260LL;
    v11 = 16LL;
    v6 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, 16LL, 845431620LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
      goto LABEL_20;
    }
    if ( v6 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x32644344u) )
      {
        v8 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFDuLL, 32LL, v14);
        Pool2 = (__int64)v8;
        if ( !v8
          || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
              *v8 = 845431620LL,
              Pool2 = (__int64)(v8 + 2),
              v8 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v5 + 1),
            0x32644344uLL);
        }
LABEL_20:
        if ( !Pool2 )
          return (unsigned int)-1073741801;
LABEL_23:
        *(_OWORD *)Pool2 = *a2;
        *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = Pool2;
        return (unsigned int)v2;
      }
    }
    else if ( v6 == 2 )
    {
      v15 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 845431620, &v15) )
      {
        v12[0] = &v16;
        v12[1] = &v14;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v5,
                  (__int64)v12,
                  &v11);
        goto LABEL_20;
      }
      Pool2 = ExAllocatePool2(v9, 32LL, 845431620LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v5,
                 Pool2,
                 v15,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_23;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v5,
                    (const void *)Pool2,
                    v15,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_20;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v2;
}
