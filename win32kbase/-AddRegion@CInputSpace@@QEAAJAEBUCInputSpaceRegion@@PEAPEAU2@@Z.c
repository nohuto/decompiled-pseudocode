/*
 * XREFs of ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C0013700
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00130D0 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     NtConfigureInputSpace @ 0x1C0169520 (NtConfigureInputSpace.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall CInputSpace::AddRegion(
        CInputSpace *this,
        const struct CInputSpaceRegion *a2,
        struct CInputSpaceRegion **a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v6; // rdi
  int v7; // eax
  __int64 Pool2; // rbx
  __int64 v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  CInputSpace **v12; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // [rsp+20h] [rbp-89h] BYREF
  __int64 v17; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v20; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 v21; // [rsp+128h] [rbp+7Fh] BYREF

  if ( a3 )
    *a3 = 0LL;
  v6 = gpLeakTrackingAllocator;
  v20 = 1866690121;
  v16 = 260LL;
  v17 = 728LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 728LL, 1866690121LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
    goto LABEL_6;
  }
  if ( v7 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6F436E49u) )
      return 3221225495LL;
    v14 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFDuLL, 744LL, v20);
    Pool2 = (__int64)v14;
    if ( !v14
      || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
          *v14 = 1866690121LL,
          Pool2 = (__int64)(v14 + 2),
          v14 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v6 + 1),
        (const void *)0x6F436E49);
    }
LABEL_6:
    if ( Pool2 )
      goto LABEL_7;
    return 3221225495LL;
  }
  if ( v7 != 2 )
    return 3221225495LL;
  v21 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6F436E49u, &v21) )
  {
    v18[0] = &v16;
    v18[1] = &v20;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              v6,
              v18,
              &v17);
    goto LABEL_6;
  }
  Pool2 = ExAllocatePool2(v15, 744LL, 1866690121LL);
  if ( !Pool2 )
    return 3221225495LL;
  _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v6,
                            Pool2,
                            v21,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_6;
    }
LABEL_26:
    _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return 3221225495LL;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v6,
                           Pool2,
                           v21,
                           BackTrace) )
    goto LABEL_26;
LABEL_7:
  v9 = 5LL;
  v10 = (_OWORD *)(Pool2 + 16);
  do
  {
    *v10 = *(_OWORD *)a2;
    v10[1] = *((_OWORD *)a2 + 1);
    v10[2] = *((_OWORD *)a2 + 2);
    v10[3] = *((_OWORD *)a2 + 3);
    v10[4] = *((_OWORD *)a2 + 4);
    v10[5] = *((_OWORD *)a2 + 5);
    v10[6] = *((_OWORD *)a2 + 6);
    v10 += 8;
    v11 = *((_OWORD *)a2 + 7);
    a2 = (const struct CInputSpaceRegion *)((char *)a2 + 128);
    *(v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  *v10 = *(_OWORD *)a2;
  v10[1] = *((_OWORD *)a2 + 1);
  v10[2] = *((_OWORD *)a2 + 2);
  v10[3] = *((_OWORD *)a2 + 3);
  *((_QWORD *)v10 + 8) = *((_QWORD *)a2 + 8);
  v12 = (CInputSpace **)*((_QWORD *)this + 183);
  if ( *v12 != (CInputSpace *)((char *)this + 1456) )
    __fastfail(3u);
  *(_QWORD *)Pool2 = (char *)this + 1456;
  *(_QWORD *)(Pool2 + 8) = v12;
  *v12 = (CInputSpace *)Pool2;
  *((_QWORD *)this + 183) = Pool2;
  ++*((_DWORD *)this + 363);
  if ( a3 )
    *a3 = (struct CInputSpaceRegion *)(Pool2 + 16);
  return 0LL;
}
