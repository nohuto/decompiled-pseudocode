/*
 * XREFs of RIMCmAllocPointerDeviceContacts @ 0x1C01DE2F0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01BA8B0 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C01C4DCC (RIMIDEResetPointerDeviceMaxCount.c)
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
 *     RIMCmFreePointerDeviceContacts @ 0x1C01DEA60 (RIMCmFreePointerDeviceContacts.c)
 */

__int64 __fastcall RIMCmAllocPointerDeviceContacts(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // r15
  int v5; // ecx
  unsigned int v6; // ebx
  unsigned __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // eax
  NSInstrumentation::CLeakTrackingAllocator *v11; // r14
  unsigned __int64 v12; // rdi
  int v13; // eax
  __int64 Pool2; // rdi
  unsigned __int64 *v15; // rax
  __int64 v16; // r10
  char v17; // r12
  NSInstrumentation::CLeakTrackingAllocator *v18; // rdi
  unsigned __int64 v19; // r14
  int v20; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // r14
  unsigned __int64 *v22; // rax
  __int64 v23; // r10
  char v24; // r12
  __int64 v25; // r14
  unsigned int i; // ecx
  __int64 v27; // rax
  _QWORD *v28; // rax
  unsigned int v29; // r14d
  _QWORD *v30; // rdx
  unsigned int v31; // r9d
  __int64 v32; // r11
  __int64 v33; // r10
  _QWORD *v34; // r8
  __int64 v36; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v40; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v41; // [rsp+48h] [rbp-B8h]
  PVOID BackTrace[20]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v43[26]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v44; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v45; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int64 v46; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 v47; // [rsp+1E8h] [rbp+E8h] BYREF

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 768);
  v6 = 0;
  if ( *(_DWORD *)(a1 + 24) == 7 && !v5 )
  {
    v45 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 80);
  }
  v7 = *(unsigned int *)(a1 + 768);
  v8 = v7 - 1;
  if ( *(_DWORD *)(a1 + 24) != 7 )
    v8 = *(_DWORD *)(a1 + 768);
  if ( (unsigned int)v7 > v8 + 1 )
  {
    v45 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 81);
  }
  if ( !*(_DWORD *)(a1 + 768) )
  {
    v45 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 82);
  }
  v9 = *(unsigned int *)(a1 + 768);
  v10 = 10;
  if ( (unsigned int)v9 <= 0xA )
    v10 = *(_DWORD *)(a1 + 768);
  *(_DWORD *)(a1 + 1000) = v10;
  v11 = gpLeakTrackingAllocator;
  v12 = 2864 * v9;
  *(_QWORD *)(a1 + 992) = 0LL;
  v13 = *(_DWORD *)v11;
  v37 = 2864 * v9;
  v45 = v4;
  v36 = 260LL;
  if ( !v13 )
  {
    Pool2 = ExAllocatePool2(260LL, 2864 * v9, (unsigned int)v4);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
    goto LABEL_37;
  }
  if ( v13 != 1 )
  {
    if ( v13 == 2 )
    {
      v46 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v11, v4, &v46) )
      {
        v40 = &v36;
        v41 = &v45;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v11,
                  (__int64)&v40,
                  &v37);
        goto LABEL_37;
      }
      v17 = 0;
      if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
      {
        v12 += 16LL;
        v17 = 1;
        v37 = v12;
      }
      Pool2 = ExAllocatePool2(v16, v12, (unsigned int)v4);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v11,
                 (const void *)Pool2,
                 v46,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_37;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v11,
                    Pool2,
                    v46,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_37;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_36;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v11, v4) || v12 + 16 < v12 )
  {
LABEL_36:
    Pool2 = 0LL;
    goto LABEL_37;
  }
  v15 = (unsigned __int64 *)ExAllocatePool2(v36 & 0xFFFFFFFFFFFFFFFDuLL, v12 + 16, v45);
  Pool2 = (__int64)v15;
  if ( v15 )
    _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
  v7 = v4;
  if ( !v15 || (*v15 = v4, Pool2 = (__int64)(v15 + 2), v15 == (unsigned __int64 *)-16LL) )
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v11 + 1),
      v4);
LABEL_37:
  *(_QWORD *)(a1 + 968) = Pool2;
  if ( !Pool2 )
  {
LABEL_74:
    v6 = -1073741670;
    RIMCmFreePointerDeviceContacts(a1, v7, a3);
    return v6;
  }
  v18 = gpLeakTrackingAllocator;
  v19 = 16LL * *(unsigned int *)(a1 + 1000);
  v44 = v4;
  v20 = *(_DWORD *)gpLeakTrackingAllocator;
  v38 = 260LL;
  v39 = v19;
  if ( !v20 )
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       v19,
                                                                                       (unsigned int)v4);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
    goto LABEL_60;
  }
  if ( v20 != 1 )
  {
    if ( v20 == 2 )
    {
      v47 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, v4, &v47) )
      {
        v40 = &v38;
        v41 = &v44;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v18,
                                                                                           (__int64)&v40,
                                                                                           &v39);
        goto LABEL_60;
      }
      v24 = 0;
      if ( v19 < 0x1000 || (v19 & 0xFFF) != 0 )
      {
        v19 += 16LL;
        v24 = 1;
        v39 = v19;
      }
      v25 = ExAllocatePool2(v23, v19, (unsigned int)v4);
      if ( v25 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v43);
        if ( v24 && (unsigned __int64)(v25 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v18,
                 (const void *)v25,
                 v47,
                 (struct NSInstrumentation::CBackTrace *)v43) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v25 + 16;
            goto LABEL_60;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v18,
                    v25,
                    v47,
                    (struct NSInstrumentation::CBackTrace *)v43) )
        {
          *(_QWORD *)(a1 + 992) = v25;
          goto LABEL_64;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v25);
      }
    }
    goto LABEL_73;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, v4) || v19 + 16 < v19 )
  {
LABEL_73:
    *(_QWORD *)(a1 + 992) = 0LL;
    goto LABEL_74;
  }
  v22 = (unsigned __int64 *)ExAllocatePool2(v38 & 0xFFFFFFFFFFFFFFFDuLL, v19 + 16, v44);
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v22;
  if ( v22 )
    _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
  v7 = v4;
  if ( !v22
    || (*v22 = v4,
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v22 + 2),
        v22 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v18 + 1),
      v4);
  }
LABEL_60:
  *(_QWORD *)(a1 + 992) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    goto LABEL_74;
LABEL_64:
  for ( i = 0; i < *(_DWORD *)(a1 + 1000); *v28 = v28 )
  {
    v27 = i++;
    v28 = (_QWORD *)(*(_QWORD *)(a1 + 992) + 16 * v27);
    v28[1] = v28;
  }
  v29 = *(_DWORD *)(a1 + 768);
  v30 = (_QWORD *)(a1 + 976);
  *(_QWORD *)(a1 + 976) = a1 + 976;
  *(_QWORD *)(a1 + 984) = a1 + 976;
  v31 = *(_DWORD *)(a1 + 24) == 7;
  if ( v31 < v29 )
  {
    v32 = a1 + 976;
    v33 = a1 + 976;
    while ( 1 )
    {
      v34 = (_QWORD *)(2864LL * v31 + *(_QWORD *)(a1 + 968) + 16LL);
      if ( v33 != v32 )
        __fastfail(3u);
      *v34 = v32;
      ++v31;
      v34[1] = v30;
      *v30 = v34;
      *(_QWORD *)(a1 + 984) = v34;
      if ( v31 >= v29 )
        break;
      v33 = *v34;
      v30 = v34;
    }
  }
  return v6;
}
