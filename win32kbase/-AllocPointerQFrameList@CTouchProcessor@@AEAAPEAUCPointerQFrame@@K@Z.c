/*
 * XREFs of ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C00F2002
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01ED628 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01EE280 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::AllocPointerQFrameList(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v2; // r15
  unsigned int v3; // eax
  __int64 v4; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // eax
  __int64 Pool2; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r10
  char v11; // r14
  _BYTE *v12; // rdi
  _QWORD v14[2]; // [rsp+20h] [rbp-99h] BYREF
  PVOID BackTrace[28]; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v16; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v17; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 v19; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( this[5] != KeGetCurrentThread() )
  {
    v17 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7824);
  }
  if ( (_DWORD)v2 )
  {
    v3 = 160 * v2;
    v4 = v2;
    if ( (unsigned __int64)(160 * v2) <= 0xFFFFFFFF )
    {
      if ( v3 )
      {
        v5 = gpLeakTrackingAllocator;
        v6 = v3;
        v17 = 1366324053;
        v18 = 260LL;
        v7 = *(_DWORD *)gpLeakTrackingAllocator;
        v19 = v6;
        switch ( v7 )
        {
          case 0:
            Pool2 = ExAllocatePool2(260LL, (unsigned int)v6, 1366324053LL);
            if ( Pool2 )
              _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
            goto LABEL_26;
          case 1:
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x51707355u)
              && v6 + 16 >= v6 )
            {
              v9 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, v6 + 16, v17);
              Pool2 = (__int64)v9;
              if ( !v9
                || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
                    *v9 = 1366324053LL,
                    Pool2 = (__int64)(v9 + 2),
                    v9 == (_QWORD *)-16LL) )
              {
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v5 + 1),
                  (const void *)0x51707355);
              }
LABEL_26:
              if ( Pool2 )
              {
LABEL_29:
                v12 = (_BYTE *)(Pool2 + 16);
                do
                {
                  *((_DWORD *)v12 - 4) = -1;
                  memset(v12, 0, 0x70uLL);
                  v12[112] = 0;
                  v12 += 160;
                  --v4;
                }
                while ( v4 );
              }
              return (struct CPointerQFrame *)Pool2;
            }
            break;
          case 2:
            v16 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x51707355u, &v16) )
            {
              v14[0] = &v18;
              v14[1] = &v17;
              Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                        (__int64)v5,
                        (__int64)v14,
                        &v19);
              goto LABEL_26;
            }
            v11 = 0;
            if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
            {
              v6 += 16LL;
              v11 = 1;
              v19 = v6;
            }
            Pool2 = ExAllocatePool2(v10, v6, 1366324053LL);
            if ( Pool2 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
              NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
              if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
              {
                if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                        v5,
                                        Pool2,
                                        v16,
                                        BackTrace) )
                {
                  Pool2 += 16LL;
                  goto LABEL_26;
                }
              }
              else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                           v5,
                                           Pool2,
                                           v16,
                                           BackTrace) )
              {
                goto LABEL_29;
              }
              _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
            }
            break;
        }
        return 0LL;
      }
    }
  }
  return 0LL;
}
