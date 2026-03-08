/*
 * XREFs of ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x1C00C3380
 * Callers:
 *     <none>
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

__int64 __fastcall LegacyInputDispatcher::Initialize(
        LegacyInputDispatcher *this,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        struct LegacyDispatcherObject *a6)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v9; // rsi
  __int64 v10; // r13
  size_t v11; // rdi
  int v12; // eax
  __int64 Pool2; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // rdi
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v18; // rsi
  size_t v19; // r13
  int v20; // eax
  __int64 v21; // rdi
  void *v22; // rcx
  unsigned int v23; // r9d
  struct LegacyDispatcherObject *v24; // r8
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 result; // rax
  _QWORD *v29; // rax
  unsigned int v30; // edx
  size_t v31; // r10
  __int64 v32; // r11
  char v33; // r15
  _QWORD *v34; // rax
  unsigned int v35; // edx
  __int64 v36; // r10
  char v37; // r15
  _QWORD *v38; // rax
  unsigned int v39; // edx
  size_t v40; // r10
  __int64 v41; // r11
  char v42; // r15
  unsigned int v43; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v45; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v46; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B8h] BYREF
  size_t v49; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+70h] [rbp-98h] BYREF
  size_t v53[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v54; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *v55; // [rsp+90h] [rbp-78h]
  size_t Size; // [rsp+98h] [rbp-70h]
  _QWORD v57[2]; // [rsp+A8h] [rbp-60h] BYREF
  PVOID BackTrace[20]; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v59[20]; // [rsp+158h] [rbp+50h] BYREF
  PVOID v60[26]; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned int v61; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v62; // [rsp+2E0h] [rbp+1D8h]
  char v63; // [rsp+2E8h] [rbp+1E0h]
  unsigned int v64; // [rsp+2F0h] [rbp+1E8h]

  v64 = a4;
  v63 = a3;
  v62 = a2;
  v6 = 0LL;
  v7 = a4;
  if ( *((_DWORD *)this + 11) )
    return 3221225473LL;
  if ( *((_QWORD *)this + 1) )
  {
    v61 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2965LL);
  }
  if ( *((_QWORD *)this + 3) )
  {
    v61 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2966LL);
  }
  if ( *((_QWORD *)this + 4) )
  {
    v61 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2967LL);
  }
  v9 = gpLeakTrackingAllocator;
  v10 = v7;
  v11 = 8 * v7;
  v61 = 2037609301;
  v48 = 68LL;
  v12 = *(_DWORD *)gpLeakTrackingAllocator;
  Size = v11;
  v49 = v11;
  if ( !v12 )
  {
    Pool2 = ExAllocatePool2(68LL, v11, 2037609301LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v9 + 14);
    goto LABEL_11;
  }
  if ( v12 != 1 )
  {
    if ( v12 == 2 )
    {
      v45 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x79737355u, &v45) )
      {
        v54 = &v48;
        v55 = &v61;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v9,
                  (__int64)&v54,
                  &v49);
        goto LABEL_11;
      }
      v33 = 0;
      if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
      {
        v31 += 16LL;
        v33 = 1;
        v49 = v31;
      }
      Pool2 = ExAllocatePool2(v32, v31, v30);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v33 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v9,
                                  Pool2,
                                  v45,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_11;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v9,
                                     Pool2,
                                     v45,
                                     BackTrace) )
        {
          goto LABEL_11;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_44;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x79737355u)
    || v11 + 16 < v11 )
  {
LABEL_44:
    Pool2 = 0LL;
    goto LABEL_11;
  }
  v29 = (_QWORD *)ExAllocatePool2(v48 & 0xFFFFFFFFFFFFFFFDuLL, v11 + 16, v61);
  Pool2 = (__int64)v29;
  if ( !v29
    || (_InterlockedIncrement64((volatile signed __int64 *)v9 + 14),
        *v29 = 2037609301LL,
        Pool2 = (__int64)(v29 + 2),
        v29 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v9 + 1),
      (const void *)0x79737355);
  }
LABEL_11:
  v14 = gpLeakTrackingAllocator;
  *((_QWORD *)this + 1) = Pool2;
  v43 = 2001433429;
  v50 = 68LL;
  v15 = *(_DWORD *)v14;
  v16 = 48 * v10;
  v51 = 48 * v10;
  if ( !v15 )
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       68LL,
                                                                                       48 * v10,
                                                                                       2001433429LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v14 + 14);
    goto LABEL_14;
  }
  if ( v15 != 1 )
  {
    if ( v15 == 2 )
    {
      v46 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v14, 0x774B7355u, &v46) )
      {
        v57[0] = &v50;
        v57[1] = &v43;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v14,
                                                                                           (__int64)v57,
                                                                                           &v51);
        goto LABEL_14;
      }
      v37 = 0;
      if ( v16 < 0x1000 || (v16 & 0xFFF) != 0 )
      {
        v16 += 16LL;
        v37 = 1;
        v51 = v16;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v36, v16, v35);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v14 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v59);
        if ( v37
          && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v14,
                                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                  v46,
                                  v59) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_14;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v14,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v46,
                                     v59) )
        {
          goto LABEL_14;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v14 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
    }
    goto LABEL_64;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v14, 0x774B7355u) || v16 + 16 < v16 )
  {
LABEL_64:
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_14;
  }
  v34 = (_QWORD *)ExAllocatePool2(v50 & 0xFFFFFFFFFFFFFFFDuLL, v16 + 16, v43);
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v34;
  if ( !v34
    || (_InterlockedIncrement64((volatile signed __int64 *)v14 + 14),
        *v34 = 2001433429LL,
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v34 + 2),
        v34 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v14 + 1),
      (const void *)0x774B7355);
  }
LABEL_14:
  v18 = gpLeakTrackingAllocator;
  v19 = 16 * v10;
  *((_QWORD *)this + 3) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  LODWORD(v44) = 1885947971;
  v20 = *(_DWORD *)v18;
  v52 = 260LL;
  v53[0] = v19;
  if ( !v20 )
  {
    v21 = ExAllocatePool2(260LL, v19, 1885947971LL);
    if ( v21 )
      _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
    goto LABEL_17;
  }
  if ( v20 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v18, 0x70694843u) && v19 + 16 >= v19 )
    {
      v38 = (_QWORD *)ExAllocatePool2(v52 & 0xFFFFFFFFFFFFFFFDuLL, v19 + 16, (unsigned int)v44);
      v21 = (__int64)v38;
      if ( !v38
        || (_InterlockedIncrement64((volatile signed __int64 *)v18 + 14),
            *v38 = 1885947971LL,
            v21 = (__int64)(v38 + 2),
            v38 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v18 + 1),
          (const void *)0x70694843);
      }
      goto LABEL_17;
    }
    goto LABEL_84;
  }
  if ( v20 != 2 )
    goto LABEL_84;
  v47 = 0LL;
  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v18, 0x70694843u, &v47) )
  {
    v42 = 0;
    if ( v19 < 0x1000 || (v19 & 0xFFF) != 0 )
    {
      v40 += 16LL;
      v42 = 1;
      v53[0] = v40;
    }
    v21 = ExAllocatePool2(v41, v40, v39);
    if ( v21 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v18 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(v60);
      if ( v42 && (unsigned __int64)(v21 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v18,
                                v21,
                                v47,
                                v60) )
        {
          v21 += 16LL;
          goto LABEL_17;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v18,
                                   v21,
                                   v47,
                                   v60) )
      {
        goto LABEL_17;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v18 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v21);
    }
LABEL_84:
    v21 = 0LL;
    goto LABEL_17;
  }
  v54 = &v52;
  v55 = (unsigned int *)&v44;
  v21 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
          (__int64)v18,
          (__int64)&v54,
          v53);
LABEL_17:
  *((_QWORD *)this + 4) = v21;
  *((_DWORD *)this + 12) = 1;
  if ( !*((_QWORD *)this + 3) )
    return 3221225495LL;
  v22 = (void *)*((_QWORD *)this + 1);
  if ( !v22 || !v21 )
    return 3221225495LL;
  memset(v22, 0, Size);
  memset(*((void **)this + 4), 0, v19);
  v23 = a5;
  if ( a5 )
  {
    v24 = a6;
    v25 = a5;
    do
    {
      v26 = v24 - a6;
      *(_QWORD *)(v6 + *((_QWORD *)this + 1)) = *(_QWORD *)v24;
      v6 += 8LL;
      v27 = *((_QWORD *)v24 + 1);
      v24 = (struct LegacyDispatcherObject *)((char *)v24 + 16);
      *(_QWORD *)(v26 + *((_QWORD *)this + 4)) = v27;
      --v25;
    }
    while ( v25 );
  }
  *((_DWORD *)this + 11) = v64;
  *((_BYTE *)this + 56) = v62;
  *((_BYTE *)this + 57) = v63;
  result = 0LL;
  *((_DWORD *)this + 13) = v23;
  return result;
}
