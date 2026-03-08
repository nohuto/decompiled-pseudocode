/*
 * XREFs of rimStoreRawDataBlock @ 0x1C01CF7A0
 * Callers:
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C01CDF34 (RIMStoreRawDataInPointerDeviceFrame.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall rimStoreRawDataBlock(__int64 a1, __int64 a2, void *a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  size_t v6; // r12
  _DWORD *v8; // rcx
  __int64 v9; // r15
  int v10; // eax
  NSInstrumentation::CLeakTrackingAllocator *v11; // rdi
  int v12; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v15; // r10
  __int64 v16; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v17; // r14
  size_t v18; // r10
  size_t v19; // r13
  char v20; // r12
  int v21; // eax
  __int64 v22; // rdi
  _QWORD *v23; // rax
  unsigned int v24; // edx
  size_t v25; // r10
  __int64 v26; // r11
  _DWORD *v27; // rbx
  void *v28; // rdx
  void *v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  size_t v35; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v36; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v37; // [rsp+60h] [rbp-A8h]
  __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  PVOID BackTrace[20]; // [rsp+78h] [rbp-90h] BYREF
  PVOID v40[28]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v41; // [rsp+208h] [rbp+100h] BYREF
  __int64 v42; // [rsp+210h] [rbp+108h] BYREF
  void *Src; // [rsp+218h] [rbp+110h]
  int v44; // [rsp+220h] [rbp+118h]

  v44 = a4;
  Src = a3;
  v42 = a2;
  v41 = a1;
  v6 = a4;
  if ( !a4 )
  {
    LODWORD(v42) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 347);
  }
  v8 = a6;
  *a6 = 0;
  if ( a3 )
  {
    v9 = a5;
    v10 = *(_DWORD *)(a5 + 48);
    *v8 = v10 + 1;
    if ( v10 != -1 )
    {
      v11 = gpLeakTrackingAllocator;
      LODWORD(v42) = 1685222226;
      v33 = 260LL;
      v38 = 24LL;
      v12 = *(_DWORD *)gpLeakTrackingAllocator;
      if ( *(_DWORD *)gpLeakTrackingAllocator )
      {
        if ( v12 != 1 )
        {
          if ( v12 != 2 )
            return;
          v31 = 0LL;
          if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1685222226, &v31) )
          {
            v36 = &v33;
            v37 = &v42;
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                               (__int64)v11,
                                                                                               (__int64)&v36,
                                                                                               &v38);
            goto LABEL_20;
          }
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                             v15,
                                                                                             40LL,
                                                                                             1685222226LL);
          if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
            return;
          _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
             + 16 >= 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                   (__int64)v11,
                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                   v31,
                   (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              v16 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              goto LABEL_24;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                      (__int64)v11,
                      (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                      v31,
                      (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_20;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
          return;
        }
        if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x64727352u) )
          return;
        Pool2 = (_QWORD *)ExAllocatePool2(v33 & 0xFFFFFFFFFFFFFFFDuLL, 40LL, (unsigned int)v42);
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
              *Pool2 = 1685222226LL,
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
              Pool2 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v11 + 1),
            0x64727352uLL);
        }
      }
      else
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           260LL,
                                                                                           24LL,
                                                                                           1685222226LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
      }
LABEL_20:
      v16 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return;
LABEL_24:
      v17 = gpLeakTrackingAllocator;
      v18 = v6;
      LODWORD(v41) = 1685222226;
      v19 = v6;
      v35 = v6;
      v20 = 0;
      v34 = 260LL;
      v21 = *(_DWORD *)gpLeakTrackingAllocator;
      if ( !*(_DWORD *)gpLeakTrackingAllocator )
      {
        v22 = ExAllocatePool2(260LL, v18, 1685222226LL);
        if ( v22 )
          _InterlockedIncrement64((volatile signed __int64 *)v17 + 14);
        goto LABEL_47;
      }
      if ( v21 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x64727352u)
          && v19 + 16 >= v19 )
        {
          v23 = (_QWORD *)ExAllocatePool2(v34 & 0xFFFFFFFFFFFFFFFDuLL, v19 + 16, (unsigned int)v41);
          v22 = (__int64)v23;
          if ( !v23
            || (_InterlockedIncrement64((volatile signed __int64 *)v17 + 14),
                *v23 = 1685222226LL,
                v22 = (__int64)(v23 + 2),
                v23 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v17 + 1),
              0x64727352uLL);
          }
          goto LABEL_47;
        }
      }
      else if ( v21 == 2 )
      {
        v32 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1685222226, &v32) )
        {
          v36 = &v34;
          v37 = &v41;
          v22 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v17,
                  (__int64)&v36,
                  &v35);
          goto LABEL_47;
        }
        if ( v19 < 0x1000 || (v19 & 0xFFF) != 0 )
        {
          v25 += 16LL;
          v20 = 1;
          v35 = v25;
        }
        v22 = ExAllocatePool2(v26, v25, v24);
        if ( v22 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v17 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(v40);
          if ( v20 && (unsigned __int64)(v22 & 0xFFF) + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v17,
                   (const void *)v22,
                   v32,
                   (struct NSInstrumentation::CBackTrace *)v40) )
            {
              v22 += 16LL;
              goto LABEL_47;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v17,
                      v22,
                      v32,
                      (struct NSInstrumentation::CBackTrace *)v40) )
          {
            goto LABEL_47;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v17 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v22);
        }
      }
      v22 = 0LL;
LABEL_47:
      *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = v22;
      if ( v22 )
      {
        v27 = a6;
        v28 = Src;
        v29 = *(void **)(v16 + 8);
        *(_DWORD *)v16 = *a6;
        *(_DWORD *)(v16 + 4) = v44;
        memmove(v29, v28, v19);
        *(_QWORD *)(v16 + 16) = 0LL;
        v30 = *(_QWORD *)(v9 + 64);
        if ( v30 )
        {
          *(_QWORD *)(v30 + 16) = v16;
        }
        else
        {
          if ( *(_DWORD *)(v9 + 48) )
          {
            v44 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 390);
          }
          if ( *(_QWORD *)(v9 + 56) )
          {
            v44 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 391);
          }
          *(_QWORD *)(v9 + 56) = v16;
        }
        *(_QWORD *)(v9 + 64) = v16;
        *(_DWORD *)(v9 + 48) = *v27;
      }
      else
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(
          gpLeakTrackingAllocator,
          (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
    }
  }
}
