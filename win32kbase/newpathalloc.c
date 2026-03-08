/*
 * XREFs of newpathalloc @ 0x1C0181B40
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C01811A8 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C018A940 (-newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall newpathalloc(__int64 a1)
{
  __int64 v1; // rsi
  __int64 Pool2; // rbx
  __int64 v3; // rax
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  int v5; // eax
  _QWORD *v6; // rax
  __int64 v7; // r10
  HSEMAPHORE v9; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v12; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v13; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+120h] [rbp+77h] BYREF
  __int64 v15; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v9 = *(HSEMAPHORE *)(v1 + 6040);
  EngAcquireSemaphore(v9);
  Pool2 = *(_QWORD *)(v1 + 6048);
  if ( !Pool2 )
  {
    v4 = gpLeakTrackingAllocator;
    v12 = 1952542791;
    v14 = 260LL;
    v15 = 4032LL;
    v5 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, 4032LL, 1952542791LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
      goto LABEL_18;
    }
    if ( v5 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x74617047u) )
      {
        v6 = (_QWORD *)ExAllocatePool2(v14 & 0xFFFFFFFFFFFFFFFDuLL, 4048LL, v12);
        Pool2 = (__int64)v6;
        if ( !v6
          || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
              *v6 = 1952542791LL,
              Pool2 = (__int64)(v6 + 2),
              v6 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v4 + 1),
            (const void *)0x74617047);
        }
LABEL_18:
        if ( !Pool2 )
          goto LABEL_24;
LABEL_21:
        ++*(_DWORD *)(v1 + 6060);
        goto LABEL_22;
      }
    }
    else if ( v5 == 2 )
    {
      v13 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x74617047u, &v13) )
      {
        v10[0] = &v14;
        v10[1] = &v12;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v4,
                  (__int64)v10,
                  &v15);
        goto LABEL_18;
      }
      Pool2 = ExAllocatePool2(v7, 4048LL, 1952542791LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v4,
                                  Pool2,
                                  v13,
                                  BackTrace) )
            goto LABEL_21;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v4,
                                     Pool2,
                                     v13,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_18;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_24:
    Pool2 = 0LL;
    goto LABEL_25;
  }
  v3 = *(_QWORD *)Pool2;
  --*(_DWORD *)(v1 + 6056);
  *(_QWORD *)(v1 + 6048) = v3;
LABEL_22:
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 24;
  *(_DWORD *)(Pool2 + 16) = 4032;
LABEL_25:
  SEMOBJ::vUnlock((PERESOURCE *)&v9);
  return Pool2;
}
