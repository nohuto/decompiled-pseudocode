/*
 * XREFs of ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1C009C870
 * Callers:
 *     CMouseAcceleration_CreateInstance @ 0x1C009C820 (CMouseAcceleration_CreateInstance.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C009C920 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall CMouseAcceleration::CreateInstance(struct CDeviceAcceleration **a1, unsigned int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  int v4; // eax
  __int64 Pool2; // rbx
  struct CDeviceAcceleration *v7; // rax
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v14; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v15; // [rsp+120h] [rbp+77h] BYREF
  __int64 v16; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  *a1 = 0LL;
  v14 = 1682006883;
  v16 = 260LL;
  v4 = *(_DWORD *)v2;
  v11 = 120LL;
  if ( !v4 )
  {
    Pool2 = ExAllocatePool2(260LL, 120LL, 1682006883LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    goto LABEL_4;
  }
  if ( v4 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v2, 0x64416363u) )
      return 3221225495LL;
    v9 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFDuLL, 136LL, v14);
    Pool2 = (__int64)v9;
    if ( !v9
      || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
          *v9 = 1682006883LL,
          Pool2 = (__int64)(v9 + 2),
          v9 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v2 + 1),
        (const void *)0x64416363);
    }
LABEL_4:
    if ( !Pool2 )
      return 3221225495LL;
    goto LABEL_5;
  }
  if ( v4 != 2 )
    return 3221225495LL;
  v15 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v2, 0x64416363u, &v15) )
  {
    v12[0] = &v16;
    v12[1] = &v14;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v2,
              (__int64)v12,
              &v11);
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(v10, 136LL, 1682006883LL);
  if ( !Pool2 )
    return 3221225495LL;
  _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v2,
                            Pool2,
                            v15,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_4;
    }
LABEL_21:
    _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return 3221225495LL;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v2,
                           Pool2,
                           v15,
                           BackTrace) )
    goto LABEL_21;
LABEL_5:
  v7 = CMouseAcceleration::CMouseAcceleration((CMouseAcceleration *)Pool2, a2);
  if ( v7 )
  {
    *a1 = v7;
    return 0LL;
  }
  return 3221225495LL;
}
