/*
 * XREFs of ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994
 * Callers:
 *     NtDCompositionGetStatistics @ 0x1C00026E0 (NtDCompositionGetStatistics.c)
 *     NtGdiPolyPolyDraw @ 0x1C000C360 (NtGdiPolyPolyDraw.c)
 *     GreMultiUserInitSession @ 0x1C000FCA0 (GreMultiUserInitSession.c)
 *     DrvInitConsole @ 0x1C0010EB8 (DrvInitConsole.c)
 *     HmgAllocateObjectAttr @ 0x1C001CC34 (HmgAllocateObjectAttr.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C001E10C (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C001F108 (DrvUpdateDisplayDriverParameters.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0020740 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C00227EC (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvGetDisplayDriverNames @ 0x1C0024700 (DrvGetDisplayDriverNames.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0028890 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     DrvBuildDevmodeList @ 0x1C0028AF8 (DrvBuildDevmodeList.c)
 *     GreCreateSemaphoreInternal @ 0x1C002B04C (GreCreateSemaphoreInternal.c)
 *     Win32AllocPoolNonPaged @ 0x1C002B1A0 (Win32AllocPoolNonPaged.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C002B828 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     HmgCreate @ 0x1C002CDD0 (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C002D2A8 (GreCreateFastMutex.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C002D2F0 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     HmgAllocateDcAttr @ 0x1C00500EC (HmgAllocateDcAttr.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0051F60 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     AllocateObject @ 0x1C0052FA0 (AllocateObject.c)
 *     HmgFreeDcAttr @ 0x1C0053788 (HmgFreeDcAttr.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0057B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C005D030 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0069F28 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C006BBE0 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C006BC68 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     bDynamicModeChange @ 0x1C006DF9C (bDynamicModeChange.c)
 *     DrvEnumDisplayDevices @ 0x1C0071810 (DrvEnumDisplayDevices.c)
 *     ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C0095618 (-Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C0095720 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C009582C (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0095A48 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1C0095B4C (-Initialize@CChannelGroup@DirectComposition@@QEAAJXZ.c)
 *     EngAllocMem @ 0x1C009EBD0 (EngAllocMem.c)
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00A2BA0 (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     EtwTraceLifetimeAccum @ 0x1C00AAD00 (EtwTraceLifetimeAccum.c)
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x1C00AB9EC (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4Compositi.c)
 *     ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z @ 0x1C00AC9F4 (-Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C00AFB64 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00B1D40 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     MakeSystemRelativePath @ 0x1C00B1F80 (MakeSystemRelativePath.c)
 *     ?AllocateTableEntry@?$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C00B9420 (-AllocateTableEntry@-$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectCompositi.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00BF308 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C00BF9BC (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C00C6824 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C00C9094 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?AllocateTableEntry@?$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C00C9520 (-AllocateTableEntry@-$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@Dir.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C00CAF90 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C00CB510 (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C00CB5B0 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x1C00CB658 (-Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C00CCDA0 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C00CE140 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     EtwTraceDWMGetDirtyRegion @ 0x1C00D3540 (EtwTraceDWMGetDirtyRegion.c)
 *     HmgFreeObjectAttr @ 0x1C00D43C0 (HmgFreeObjectAttr.c)
 *     DirectComposition::Memory::Allocate @ 0x1C00F63CA (DirectComposition--Memory--Allocate.c)
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1C017D47C (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C017E290 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0181D80 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0184190 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     DrvSetVideoParameters @ 0x1C0194B28 (DrvSetVideoParameters.c)
 *     ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C01967A0 (-GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z.c)
 *     EtwTraceMoveRegion @ 0x1C01983F0 (EtwTraceMoveRegion.c)
 *     MakeSystemDriversRelativePath @ 0x1C0199F54 (MakeSystemDriversRelativePath.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0251C64 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C02640F0 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1C00BAA3C (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::Allocate(
        NSInstrumentation::CLeakTrackingAllocator *this,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned __int64 v5; // rbx
  const void *v6; // rsi
  __int64 Pool2; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r10
  char v12; // r14
  _QWORD v13[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v15; // [rsp+100h] [rbp+67h] BYREF
  __int64 v16; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned __int64 v17; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v18; // [rsp+118h] [rbp+7Fh] BYREF

  v18 = a4;
  v16 = a2;
  v4 = *(_DWORD *)this;
  v5 = a3;
  v17 = a3;
  v6 = (const void *)a4;
  if ( !v4 )
  {
    Pool2 = ExAllocatePool2(a2 | 2, a3, a4);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)this + 14);
    return Pool2;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      v15 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(this, a4, &v15) )
      {
        v13[0] = &v16;
        v13[1] = &v18;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                 this,
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
      Pool2 = ExAllocatePool2(v11 | 2, v5, (unsigned int)v6);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)this + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v12 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  this,
                                  Pool2,
                                  v15,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     this,
                                     Pool2,
                                     v15,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)this + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(this, a4) || v5 + 16 < v5 )
    return 0LL;
  v10 = (_QWORD *)ExAllocatePool2(v16 | 2, v5 + 16, v18);
  Pool2 = (__int64)v10;
  if ( !v10
    || (_InterlockedIncrement64((volatile signed __int64 *)this + 14),
        *v10 = v6,
        Pool2 = (__int64)(v10 + 2),
        v10 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)this + 1),
      v6);
  }
  return Pool2;
}
