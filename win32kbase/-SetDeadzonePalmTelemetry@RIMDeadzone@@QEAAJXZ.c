/*
 * XREFs of ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1C01C9948
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C01C8D64 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall RIMDeadzone::SetDeadzonePalmTelemetry(RIMDeadzone *this)
{
  unsigned int v1; // esi
  NSInstrumentation::CLeakTrackingAllocator *v3; // rbx
  int v4; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  __int64 v7; // r10
  _QWORD v9[2]; // [rsp+20h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v11; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v12; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v13; // [rsp+120h] [rbp+77h] BYREF
  __int64 v14; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 7) )
  {
    v3 = gpLeakTrackingAllocator;
    v11 = 2053394514;
    v13 = 260LL;
    v14 = 12300LL;
    v4 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( v4 != 1 )
      {
        if ( v4 != 2 )
          return (unsigned int)-1073741801;
        v12 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2053394514, &v12) )
        {
          v9[0] = &v13;
          v9[1] = &v11;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v3,
                                                                                             (__int64)v9,
                                                                                             &v14);
          goto LABEL_17;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v7,
                                                                                           12316LL,
                                                                                           2053394514LL);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          return (unsigned int)-1073741801;
        _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v3,
                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v12,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
LABEL_20:
            *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 4) = 0LL;
            *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0;
            memset(
              (void *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 2060),
              0,
              0x2800uLL);
            memset(
              (void *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 12),
              0,
              0x800uLL);
            *(_BYTE *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 12) = 0;
            *((_QWORD *)this + 7) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            return v1;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v3,
                    (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v12,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_17;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        return (unsigned int)-1073741801;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x7A645052u) )
        return (unsigned int)-1073741801;
      Pool2 = (_QWORD *)ExAllocatePool2(v13 & 0xFFFFFFFFFFFFFFFDuLL, 12316LL, v11);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
            *Pool2 = 2053394514LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v3 + 1),
          0x7A645052uLL);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         12300LL,
                                                                                         2053394514LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
    }
LABEL_17:
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_20;
    return (unsigned int)-1073741801;
  }
  return v1;
}
