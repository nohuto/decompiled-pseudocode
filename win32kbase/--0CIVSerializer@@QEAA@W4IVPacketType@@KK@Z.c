/*
 * XREFs of ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1C0233064
 * Callers:
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C0218FEC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C0226B08 (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C0227610 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C0227C1C (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
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

__int64 __fastcall CIVSerializer::CIVSerializer(__int64 a1, int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rdi
  __int64 v4; // r15
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r10
  char v11; // r14
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-89h] BYREF
  unsigned __int64 v15; // [rsp+30h] [rbp-81h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-79h] BYREF
  PVOID BackTrace[20]; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v18; // [rsp+118h] [rbp+67h] BYREF
  unsigned int v19; // [rsp+130h] [rbp+7Fh] BYREF

  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  v3 = gpLeakTrackingAllocator;
  *(_QWORD *)a1 = &CIVSerializer::`vftable';
  v4 = a2;
  v19 = 1702057545;
  v14 = 260LL;
  v5 = (unsigned int)(dword_1C02A5E38[a2] + 16);
  *(_DWORD *)(a1 + 32) = v5;
  v6 = *(_DWORD *)v3;
  v15 = v5;
  if ( !v6 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v5, 1702057545LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
    goto LABEL_21;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      v18 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v3, 1702057545, &v18) )
      {
        v16[0] = &v14;
        v16[1] = &v19;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v3,
                  (__int64)v16,
                  &v15);
        goto LABEL_21;
      }
      v11 = 0;
      if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
      {
        v5 += 16LL;
        v11 = 1;
        v15 = v5;
      }
      Pool2 = ExAllocatePool2(v10, v5, v9);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v3,
                 (const void *)Pool2,
                 v18,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_21;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v3,
                    Pool2,
                    v18,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          *(_QWORD *)(a1 + 24) = Pool2;
LABEL_25:
          *(_QWORD *)(a1 + 16) = Pool2 + 16;
          v12 = dword_1C02A5E38[v4];
          *(_DWORD *)(a1 + 12) = v12;
          *(_DWORD *)(a1 + 36) = v12;
          *(_DWORD *)(Pool2 + 12) = 0;
          *(_DWORD *)(Pool2 + 4) = 1;
          *(_DWORD *)(Pool2 + 8) = v4;
          **(_DWORD **)(a1 + 24) = *(_DWORD *)(a1 + 32) - 16;
          return a1;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_27:
    *(_QWORD *)(a1 + 24) = 0LL;
    return a1;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v3, 0x65735649u) || v5 + 16 < v5 )
    goto LABEL_27;
  v8 = (_QWORD *)ExAllocatePool2(v14 & 0xFFFFFFFFFFFFFFFDuLL, v5 + 16, v19);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
        *v8 = 1702057545LL,
        Pool2 = (__int64)(v8 + 2),
        v8 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v3 + 1),
      0x65735649uLL);
  }
LABEL_21:
  *(_QWORD *)(a1 + 24) = Pool2;
  if ( Pool2 )
    goto LABEL_25;
  return a1;
}
