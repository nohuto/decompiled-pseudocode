/*
 * XREFs of ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54
 * Callers:
 *     ?TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z @ 0x1C005D104 (-TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z.c)
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C005D1C0 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     NtDCompositionCommitChannel @ 0x1C005FC90 (NtDCompositionCommitChannel.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0069650 (-SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0069720 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0069F28 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00B8760 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 *     ?AllocateTableEntry@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C00BF6C0 (-AllocateTableEntry@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectCompositi.c)
 *     DirectComposition::Memory::Allocate @ 0x1C00F63CA (DirectComposition--Memory--Allocate.c)
 *     DirectComposition::Memory::Allocate_0 @ 0x1C00F63FE (DirectComposition--Memory--Allocate_0.c)
 *     Win32AllocPoolWithQuota @ 0x1C017D0B0 (Win32AllocPoolWithQuota.c)
 *     Win32UAFMAllocPoolWithQuota @ 0x1C017D220 (Win32UAFMAllocPoolWithQuota.c)
 *     Win32UAFMAllocPoolWithQuotaZInit @ 0x1C017D280 (Win32UAFMAllocPoolWithQuotaZInit.c)
 *     ?EnsureSpace@CGenericPropertyList@DirectComposition@@AEAAJXZ @ 0x1C024AE44 (-EnsureSpace@CGenericPropertyList@DirectComposition@@AEAAJXZ.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C024B24C (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z.c)
 *     ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x1C024D7CC (-Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z.c)
 *     ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C024F560 (-SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x1C0252730 (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 *     ?SetBufferProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02542E0 (-SetBufferProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0267EB0 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C026E8D0 (-SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplication.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64_&_ @ 0x1C019ADF0 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
        NSInstrumentation::CLeakTrackingAllocator *this,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  unsigned __int64 v5; // rbx
  const void *v6; // rsi
  int v7; // eax
  __int64 Pool2; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r10
  char v12; // r14
  _QWORD v13[2]; // [rsp+28h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int64 v15; // [rsp+108h] [rbp+67h] BYREF
  __int64 v16; // [rsp+110h] [rbp+6Fh] BYREF
  unsigned __int64 v17; // [rsp+118h] [rbp+77h] BYREF
  unsigned int v18; // [rsp+120h] [rbp+7Fh] BYREF

  v18 = a4;
  v16 = a2;
  v15 = (unsigned __int64)this;
  v4 = gpLeakTrackingAllocator;
  v5 = a3;
  v6 = (const void *)a4;
  v17 = a3;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(a2 | 3, a3, a4);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
    return Pool2;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v15 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, a4, &v15) )
      {
        v13[0] = &v16;
        v13[1] = &v18;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64___(
                 v4,
                 v13,
                 &v17);
      }
      v12 = 0;
      if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
      {
        v5 += 16LL;
        v12 = 1;
        v17 = v5;
      }
      Pool2 = ExAllocatePool2(v11 | 3, v5, (unsigned int)v6);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v12 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v4,
                                  Pool2,
                                  v15,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v4,
                                     Pool2,
                                     v15,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, a4) || v5 + 16 < v5 )
    return 0LL;
  v10 = (_QWORD *)ExAllocatePool2(v16 | 3, v5 + 16, v18);
  Pool2 = (__int64)v10;
  if ( !v10
    || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
        *v10 = v6,
        Pool2 = (__int64)(v10 + 2),
        v10 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v4 + 1),
      v6);
  }
  return Pool2;
}
