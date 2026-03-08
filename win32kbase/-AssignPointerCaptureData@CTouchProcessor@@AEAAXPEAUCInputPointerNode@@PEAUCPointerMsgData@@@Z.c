/*
 * XREFs of ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C01E96D8
 * Callers:
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C01EEC60 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall CTouchProcessor::AssignPointerCaptureData(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        struct CPointerMsgData *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v9; // rdi
  int v10; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v13; // r10
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v17; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v20; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v21; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 v22; // [rsp+138h] [rbp+7Fh] BYREF

  v5 = 0LL;
  if ( this[5] != KeGetCurrentThread() )
  {
    LODWORD(v20) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10107);
  }
  if ( *((_QWORD *)a3 + 5) )
  {
    LODWORD(v20) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10108);
  }
  v6 = *((_DWORD *)a3 + 9);
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 8) == 0 )
    {
      v7 = *((_QWORD *)a2 + 32);
      if ( (struct CInputPointerNode *)v7 != (struct CInputPointerNode *)((char *)a2 + 256) )
      {
        v5 = *((_QWORD *)a2 + 32);
        if ( (*(_DWORD *)(v7 + 36) & 0x80u) != 0 )
        {
          LODWORD(v20) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10124);
        }
      }
      if ( (*((_DWORD *)a3 + 9) & 2) == 0 && v5 && (*(_DWORD *)(v5 + 36) & 1) == 0 )
      {
        if ( !*(_QWORD *)(v5 + 40) )
        {
          LODWORD(v20) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10134);
        }
        v8 = *(_QWORD *)(v5 + 40);
        if ( v8 )
          goto LABEL_38;
      }
    }
    v9 = gpLeakTrackingAllocator;
    v17 = 260LL;
    v21 = 1131443029;
    v10 = *(_DWORD *)gpLeakTrackingAllocator;
    v20 = 312LL;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        if ( v10 != 2 )
          return;
        v22 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1131443029, &v22) )
        {
          v18[0] = &v17;
          v18[1] = &v21;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v9,
                                                                                             (__int64)v18,
                                                                                             &v20);
          goto LABEL_31;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v13,
                                                                                           328LL,
                                                                                           1131443029LL);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          return;
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v9,
                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v22,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            v8 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
LABEL_35:
            *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20) = *((_WORD *)a3 + 8);
            *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 24) = *((_DWORD *)a3 + 7);
            v14 = (__int64 *)((char *)a2 + 240);
            v15 = *((_QWORD *)a2 + 30);
            if ( *(struct CInputPointerNode **)(v15 + 8) != (struct CInputPointerNode *)((char *)a2 + 240) )
              __fastfail(3u);
            *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v15;
            *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = v14;
            *(_QWORD *)(v15 + 8) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            *v14 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
LABEL_38:
            *((_QWORD *)a3 + 5) = v8;
            if ( (*(_DWORD *)(v8 + 16))++ == -1 )
            {
              LODWORD(v20) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10157);
            }
            return;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v9,
                    (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v22,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_31;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        return;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x43707355u) )
        return;
      Pool2 = (_QWORD *)ExAllocatePool2(v17 & 0xFFFFFFFFFFFFFFFDuLL, 328LL, v21);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v9 + 14),
            *Pool2 = 1131443029LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v9 + 1),
          0x43707355uLL);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         312LL,
                                                                                         1131443029LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 14);
    }
LABEL_31:
    v8 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      return;
    goto LABEL_35;
  }
}
