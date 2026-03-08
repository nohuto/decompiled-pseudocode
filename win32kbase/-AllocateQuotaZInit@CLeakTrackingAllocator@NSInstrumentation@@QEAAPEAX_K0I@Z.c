/*
 * XREFs of ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00031D0 (NtUserInjectKeyboardInput.c)
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0007920 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C0007B30 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0007BE4 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x1C000831C (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 *     ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x1C0013B64 (-RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ.c)
 *     NtUserSetSysColors @ 0x1C0017020 (NtUserSetSysColors.c)
 *     CreateProfileUserName @ 0x1C00173D0 (CreateProfileUserName.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0017E70 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileValue @ 0x1C0018890 (FastGetProfileValue.c)
 *     NtUserQueryDisplayConfig @ 0x1C0021A60 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0021D40 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1C005B2F4 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@P.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C005CAC0 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C005CDB0 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C005CF5C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C005E2BC (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C005EE98 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0065460 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     AllocAce @ 0x1C0065880 (AllocAce.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1C006A574 (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C006BB5C (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C006BC68 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     FastGetProfileStringW @ 0x1C0074270 (FastGetProfileStringW.c)
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     ?OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C00A1700 (-OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@.c)
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C00A1820 (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C00A1B7C (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00A2630 (-SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     SetHandleFlag @ 0x1C00A4E60 (SetHandleFlag.c)
 *     ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C00B88A0 (-EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ.c)
 *     InitSystemThread @ 0x1C00C2CB0 (InitSystemThread.c)
 *     UserReAllocPoolWithQuota @ 0x1C00C4890 (UserReAllocPoolWithQuota.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00CA030 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C0157044 (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
 *     FastGetProfileKeysW @ 0x1C015D0F0 (FastGetProfileKeysW.c)
 *     xxxUserChangeDisplaySettings @ 0x1C015FD70 (xxxUserChangeDisplaySettings.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C0168D48 (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C0168E78 (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     NtConfigureInputSpace @ 0x1C0169520 (NtConfigureInputSpace.c)
 *     NtSetShellCursorState @ 0x1C016D020 (NtSetShellCursorState.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C016E700 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C016F1A0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C0171100 (NtUserGetRawPointerDeviceData.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C01718B0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0172020 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C0172A60 (NtUserInjectDeviceInput.c)
 *     NtUserInjectMouseInput @ 0x1C0173C50 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01746E0 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C01752C0 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserSetDisplayConfig @ 0x1C0176190 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0176950 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0177090 (NtUserSetManipulationInputTarget.c)
 *     ?CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z @ 0x1C020AB04 (-CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z.c)
 *     SynthesizeMitTouchInput @ 0x1C0223400 (SynthesizeMitTouchInput.c)
 *     ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIIPEA_N@Z @ 0x1C0249BF8 (--$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectCompositio.c)
 *     ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIMPEA_N@Z @ 0x1C0249CC0 (--$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IE.c)
 *     ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIPEAXPEA_N@Z @ 0x1C0249D94 (--$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@I.c)
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x1C0249E6C (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z @ 0x1C024AC18 (-Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z.c)
 *     ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x1C024D7CC (-Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0267EB0 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetBufferProperty@CCompositionCubeMapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C026BC20 (-SetBufferProperty@CCompositionCubeMapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetBufferProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C026E330 (-SetBufferProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C026F4F0 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPE.c)
 *     ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C026F620 (-SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVC.c)
 *     InitCreateUserSubsystem @ 0x1C032009C (InitCreateUserSubsystem.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64_&_ @ 0x1C0068700 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
        NSInstrumentation::CLeakTrackingAllocator *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  unsigned __int64 v5; // rbx
  const void *v6; // rsi
  int v7; // eax
  __int64 Pool2; // rbx
  _QWORD *v10; // rax
  char v11; // r14
  __int64 v12; // [rsp+28h] [rbp-89h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v15; // [rsp+118h] [rbp+67h] BYREF
  unsigned __int64 v16; // [rsp+120h] [rbp+6Fh] BYREF
  unsigned int v17; // [rsp+130h] [rbp+7Fh] BYREF

  v17 = a4;
  v16 = a2;
  v4 = gpLeakTrackingAllocator;
  v5 = a3;
  v6 = (const void *)a4;
  v12 = 260LL;
  v15 = a3;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v7 != 1 )
    {
      if ( v7 == 2 )
      {
        v16 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, a4, &v16) )
        {
          v13[0] = &v12;
          v13[1] = &v17;
          return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
                   v4,
                   v13,
                   &v15);
        }
        v11 = 0;
        if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
        {
          v5 += 16LL;
          v11 = 1;
          v15 = v5;
        }
        Pool2 = ExAllocatePool2(261LL, v5, (unsigned int)v6);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v4,
                                    Pool2,
                                    v16,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              return Pool2;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v4,
                                       Pool2,
                                       v16,
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
    v10 = (_QWORD *)ExAllocatePool2(v12 & 0xFFFFFFFFFFFFFFFCuLL | 1, v5 + 16, v17);
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
  }
  else
  {
    Pool2 = ExAllocatePool2(261LL, a3, a4);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
  }
  return Pool2;
}
