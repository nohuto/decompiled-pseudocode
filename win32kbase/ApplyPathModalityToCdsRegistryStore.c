/*
 * XREFs of ApplyPathModalityToCdsRegistryStore @ 0x1C00C8B74
 * Callers:
 *     ApplyPathsModality @ 0x1C00C89C8 (ApplyPathsModality.c)
 * Callees:
 *     DrvUpdateDisplayDriverParameters @ 0x1C001F108 (DrvUpdateDisplayDriverParameters.c)
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

__int64 __fastcall ApplyPathModalityToCdsRegistryStore(__int64 a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rdi
  int v3; // eax
  __int64 v4; // rcx
  __int64 Pool2; // rbx
  unsigned int v6; // r12d
  __int64 v7; // rcx
  __int64 i; // rdi
  int updated; // esi
  unsigned int v10; // edx
  struct _devicemodeW *v11; // r14
  __int64 j; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v19; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned __int64 v20; // [rsp+140h] [rbp+77h] BYREF
  __int64 v21; // [rsp+148h] [rbp+7Fh] BYREF

  v1 = gpLeakTrackingAllocator;
  v21 = 260LL;
  v19 = 1936876615;
  v3 = *(_DWORD *)gpLeakTrackingAllocator;
  v16 = 220LL;
  if ( !v3 )
  {
    Pool2 = ExAllocatePool2(260LL, 220LL, 1936876615LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
    goto LABEL_4;
  }
  if ( v3 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x73726447u) )
      goto LABEL_35;
    v14 = (_QWORD *)ExAllocatePool2(v21 & 0xFFFFFFFFFFFFFFFDuLL, 236LL, v19);
    Pool2 = (__int64)v14;
    if ( !v14
      || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
          *v14 = 1936876615LL,
          Pool2 = (__int64)(v14 + 2),
          v14 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v1 + 1),
        (const void *)0x73726447);
    }
LABEL_4:
    if ( Pool2 )
      goto LABEL_5;
LABEL_35:
    WdLogSingleEntry2(6LL, 220LL);
    return 3221225626LL;
  }
  if ( v3 != 2 )
    goto LABEL_35;
  v20 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x73726447u, &v20) )
  {
    v17[0] = &v21;
    v17[1] = &v19;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v1,
              (__int64)v17,
              &v16);
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(v15, 236LL, 1936876615LL);
  if ( !Pool2 )
    goto LABEL_35;
  _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v1,
                            Pool2,
                            v20,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_4;
    }
LABEL_34:
    _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_35;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v1,
                           Pool2,
                           v20,
                           BackTrace) )
    goto LABEL_34;
LABEL_5:
  v6 = 0;
  v7 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
  for ( i = *(_QWORD *)(v7 + 1264); i; i = *(_QWORD *)(i + 128) )
  {
    if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
    {
      v10 = 0;
      v11 = (struct _devicemodeW *)Pool2;
      if ( *(_WORD *)(a1 + 20) )
      {
        while ( 1 )
        {
          v7 = 296LL * v10;
          if ( *(_QWORD *)(v7 + a1 + 304) )
          {
            if ( !_bittest64((const signed __int64 *)(v7 + a1 + 56), 0x24u)
              && *(_DWORD *)(i + 240) == *(_DWORD *)(v7 + a1 + 72)
              && *(_DWORD *)(i + 244) == *(_DWORD *)(v7 + a1 + 76)
              && *(_DWORD *)(i + 248) == *(_DWORD *)(v7 + a1 + 80) )
            {
              break;
            }
          }
          if ( ++v10 >= *(unsigned __int16 *)(a1 + 20) )
            goto LABEL_17;
        }
        v11 = *(struct _devicemodeW **)(v7 + a1 + 304);
      }
LABEL_17:
      for ( j = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 1264LL); ; j = *(_QWORD *)(j + 128) )
      {
        if ( !j )
        {
          updated = -1073741811;
          goto LABEL_39;
        }
        if ( j == i )
          break;
      }
      updated = DrvUpdateDisplayDriverParameters(
                  (struct tagGRAPHICS_DEVICE *)j,
                  v11,
                  v11 == (struct _devicemodeW *)Pool2,
                  0);
      if ( updated >= 0 )
        continue;
LABEL_39:
      WdLogSingleEntry4(2LL, i, a1, v11);
      v6 = updated;
    }
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  return v6;
}
