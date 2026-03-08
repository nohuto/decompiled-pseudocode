/*
 * XREFs of rimUserMemAllocNodeAlloc @ 0x1C01AB810
 * Callers:
 *     <none>
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

__int64 __fastcall rimUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  unsigned __int64 v3; // rbx
  int v4; // eax
  __int64 Pool2; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r10
  char v8; // si
  unsigned __int64 v10; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v13; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned __int64 v14; // [rsp+120h] [rbp+77h] BYREF
  __int64 v15; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  v3 = ByteSize;
  v13 = 1701672274;
  v15 = 260LL;
  v4 = *(_DWORD *)gpLeakTrackingAllocator;
  v10 = ByteSize;
  if ( !v4 )
  {
    Pool2 = ExAllocatePool2(260LL, ByteSize, 1701672274LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    return Pool2;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      v14 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1701672274, &v14) )
      {
        v11[0] = &v15;
        v11[1] = &v13;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                 (__int64)v2,
                 (__int64)v11,
                 &v10);
      }
      v8 = 0;
      if ( v3 < 0x1000 || (v3 & 0xFFF) != 0 )
      {
        v3 += 16LL;
        v8 = 1;
        v10 = v3;
      }
      Pool2 = ExAllocatePool2(v7, v3, 1701672274LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v8 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v2,
                 (const void *)Pool2,
                 v14,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v2,
                    Pool2,
                    v14,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x656D7552u)
    || v3 + 16 < v3 )
  {
    return 0LL;
  }
  v6 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, v3 + 16, v13);
  Pool2 = (__int64)v6;
  if ( !v6
    || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
        *v6 = 1701672274LL,
        Pool2 = (__int64)(v6 + 2),
        v6 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v2 + 1),
      0x656D7552uLL);
  }
  return Pool2;
}
