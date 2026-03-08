/*
 * XREFs of ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01EE7B4
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01EE280 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C01F2DA4 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 */

struct CPointerRawData *__fastcall CTouchProcessor::CopyRawDataList(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  const void **v2; // r13
  char v3; // r15
  struct CPointerRawData *v4; // r12
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  __int64 Pool2; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r10
  __int128 v10; // xmm0
  __int64 *v11; // r14
  NSInstrumentation::CLeakTrackingAllocator *v12; // rsi
  unsigned __int64 v13; // rdi
  int v14; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *v16; // rax
  unsigned int v17; // edx
  __int64 v18; // r10
  unsigned __int64 v19; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[20]; // [rsp+70h] [rbp-90h] BYREF
  PVOID v28[28]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v30; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v31; // [rsp+210h] [rbp+110h] BYREF
  unsigned __int64 v32; // [rsp+218h] [rbp+118h] BYREF

  v2 = (const void **)*((_QWORD *)a2 + 29);
  v3 = 0;
  v23 = 0LL;
  v4 = 0LL;
  if ( !v2 )
    return v4;
  v24 = 32LL;
  while ( 1 )
  {
    v5 = gpLeakTrackingAllocator;
    v20 = 260LL;
    v30 = 1685222229;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, 32LL, 1685222229LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
LABEL_26:
      if ( !Pool2 )
        goto LABEL_19;
      goto LABEL_27;
    }
    if ( *(_DWORD *)gpLeakTrackingAllocator == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x64727355u) )
        goto LABEL_18;
      v7 = (_QWORD *)ExAllocatePool2(v20 & 0xFFFFFFFFFFFFFFFDuLL, 48LL, v30);
      Pool2 = (__int64)v7;
      if ( !v7
        || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
            *v7 = 1685222229LL,
            Pool2 = (__int64)(v7 + 2),
            v7 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v5 + 1),
          0x64727355uLL);
      }
      goto LABEL_26;
    }
    if ( *(_DWORD *)gpLeakTrackingAllocator != 2 )
      goto LABEL_18;
    v32 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1685222229, &v32) )
    {
      v25[0] = &v20;
      v25[1] = &v30;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v5,
                (__int64)v25,
                &v24);
      goto LABEL_26;
    }
    Pool2 = ExAllocatePool2(v8, 48LL, 1685222229LL);
    if ( !Pool2 )
      goto LABEL_18;
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v5,
              (const void *)Pool2,
              v32,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_17:
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
LABEL_18:
        Pool2 = 0LL;
        goto LABEL_19;
      }
      Pool2 += 16LL;
      goto LABEL_26;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
            (__int64)v5,
            Pool2,
            v32,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_17;
LABEL_27:
    v10 = *(_OWORD *)v2;
    v31 = 1685222229;
    v11 = (__int64 *)(Pool2 + 16);
    v12 = gpLeakTrackingAllocator;
    *(_OWORD *)Pool2 = v10;
    v21 = 260LL;
    *(_OWORD *)(Pool2 + 16) = *((_OWORD *)v2 + 1);
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    v13 = *((unsigned int *)v2 + 2);
    v14 = *(_DWORD *)v12;
    v22 = v13;
    if ( v14 )
      break;
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       (unsigned int)v13,
                                                                                       1685222229LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v12 + 14);
LABEL_47:
    *v11 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_19;
LABEL_51:
    memmove(
      (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
      v2[2],
      *((unsigned int *)v2 + 2));
    if ( v23 )
      *(_QWORD *)(v23 + 24) = Pool2;
    else
      v4 = (struct CPointerRawData *)Pool2;
    v2 = (const void **)v2[3];
    v23 = Pool2;
    if ( !v2 )
      return v4;
  }
  if ( v14 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v12, 0x64727355u) || v13 + 16 < v13 )
      goto LABEL_56;
    v16 = (_QWORD *)ExAllocatePool2(v21 & 0xFFFFFFFFFFFFFFFDuLL, v13 + 16, v31);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v16;
    if ( !v16
      || (_InterlockedIncrement64((volatile signed __int64 *)v12 + 14),
          *v16 = 1685222229LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v16 + 2),
          v16 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v12 + 1),
        0x64727355uLL);
    }
    goto LABEL_47;
  }
  if ( *(_DWORD *)v12 != 2 )
    goto LABEL_56;
  v19 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v12, 1685222229, &v19) )
  {
    v26[0] = &v21;
    v26[1] = &v31;
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                       (__int64)v12,
                                                                                       (__int64)v26,
                                                                                       &v22);
    goto LABEL_47;
  }
  if ( v13 < 0x1000 || (v13 & 0xFFF) != 0 )
  {
    v13 += 16LL;
    v3 = 1;
    v22 = v13;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v18, v13, v17);
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    goto LABEL_56;
  _InterlockedIncrement64((volatile signed __int64 *)v12 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(v28);
  if ( v3
    && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF) + 16 < 0x1000 )
  {
    v3 = 0;
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v12,
            (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            v19,
            (struct NSInstrumentation::CBackTrace *)v28) )
      goto LABEL_57;
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
    goto LABEL_47;
  }
  v3 = 0;
  if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
         (__int64)v12,
         UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
         v19,
         (struct NSInstrumentation::CBackTrace *)v28) )
  {
    *v11 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    goto LABEL_51;
  }
LABEL_57:
  _InterlockedIncrement64((volatile signed __int64 *)v12 + 17);
  _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
LABEL_56:
  *v11 = 0LL;
LABEL_19:
  if ( v4 )
    CTouchProcessor::FreePointerRawDataList(this, v4);
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  return 0LL;
}
