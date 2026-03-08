/*
 * XREFs of ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C0024F5C
 * Callers:
 *     ldevLoadDriver @ 0x1C0024CA0 (ldevLoadDriver.c)
 * Callees:
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00272A0 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
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

struct _LDEV *__fastcall ldevBindDisplayStub(__int64 a1)
{
  __int64 v1; // rsi
  __int64 i; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v3; // rdi
  int v4; // eax
  __int64 Pool2; // rbx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v10; // rax
  __int64 v11; // r10
  __int64 v12; // [rsp+20h] [rbp-79h] BYREF
  unsigned int *v13; // [rsp+28h] [rbp-71h]
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v15; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v16; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+110h] [rbp+77h] BYREF
  __int64 v18; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  for ( i = *(_QWORD *)(v1 + 1888); i; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 32) & 8) != 0 )
    {
      ++*(_DWORD *)(i + 28);
      return (struct _LDEV *)i;
    }
  }
  v3 = gpLeakTrackingAllocator;
  v15 = 1986292807;
  v17 = 260LL;
  v18 = 904LL;
  v4 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 904LL, 1986292807LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
    goto LABEL_8;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      v16 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76646C47u, &v16) )
      {
        v12 = (__int64)&v17;
        v13 = &v15;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v3,
                  &v12,
                  &v18);
        goto LABEL_8;
      }
      Pool2 = ExAllocatePool2(v11, 920LL, 1986292807LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v3,
                                  Pool2,
                                  v16,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_8;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v3,
                                     Pool2,
                                     v16,
                                     BackTrace) )
        {
          i = Pool2;
          goto LABEL_9;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76646C47u) )
    return 0LL;
  v10 = (_QWORD *)ExAllocatePool2(v17 & 0xFFFFFFFFFFFFFFFDuLL, 920LL, v15);
  Pool2 = (__int64)v10;
  if ( !v10
    || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
        *v10 = 1986292807LL,
        Pool2 = (__int64)(v10 + 2),
        v10 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v3 + 1),
      (const void *)0x76646C47);
  }
LABEL_8:
  i = Pool2;
  if ( !Pool2 )
    return (struct _LDEV *)i;
LABEL_9:
  v6 = *(_DWORD *)(Pool2 + 32);
  *(_DWORD *)(Pool2 + 60) = 0;
  *(_DWORD *)(Pool2 + 24) = 1;
  *(_DWORD *)(Pool2 + 32) = v6 | 0xA;
  *(_DWORD *)(Pool2 + 28) = 1;
  *(_QWORD *)(Pool2 + 896) = Pool2 + 64;
  v13 = (unsigned int *)&unk_1C02819C0;
  v12 = 0x1000030100LL;
  if ( !(unsigned int)ldevFillTable(Pool2, &v12) )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
    return 0LL;
  }
  v7 = *(_QWORD *)(v1 + 1888);
  if ( v7 )
    *(_QWORD *)(v7 + 8) = Pool2;
  v8 = *(_QWORD *)(v1 + 1888);
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)Pool2 = v8;
  *(_QWORD *)(v1 + 1888) = Pool2;
  return (struct _LDEV *)i;
}
