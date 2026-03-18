/*
 * XREFs of Win32FreePool @ 0x1C0038570
 * Callers:
 *     QueuePowerRequest @ 0x1C00108E0 (QueuePowerRequest.c)
 *     HMAllocObjectEx @ 0x1C0012A1C (HMAllocObjectEx.c)
 *     ?ReleasePathDataResources@CKeyframeAnimationMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0030214 (-ReleasePathDataResources@CKeyframeAnimationMarshaler@DirectComposition@@AEAAXPEAVCApplicationCh.c)
 *     DrvEnumDisplaySettings @ 0x1C0033CC0 (DrvEnumDisplaySettings.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C005ED70 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00673D0 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C006DDA8 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C0074AA0 (RIMAllocateAsyncPnpWorkItem.c)
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0087D08 (UserDeactivateMITInputProcessing.c)
 *     CSTCleanupStack @ 0x1C00B2694 (CSTCleanupStack.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C00B743C (--1CTouchProcessor@@QEAA@XZ.c)
 *     _RegisterLogonProcess @ 0x1C00BE030 (_RegisterLogonProcess.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C00C75B0 (bDynamicModeChange.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00D182C (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C00D2508 (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     _lambda_a018e77ba64c4f241a1dcf8ac06f3d65_::_lambda_invoker_cdecl_ @ 0x1C00D2710 (_lambda_a018e77ba64c4f241a1dcf8ac06f3d65_--_lambda_invoker_cdecl_.c)
 *     HmgAllocateDcAttr @ 0x1C00E02F0 (HmgAllocateDcAttr.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134470 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C0146140 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0146880 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C014A390 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     UserCreateBaseWindowHandle @ 0x1C014F190 (UserCreateBaseWindowHandle.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0160E9C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     RIMVirtCreateHidDesc @ 0x1C0184200 (RIMVirtCreateHidDesc.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0187070 (RIMCreatePointerDeviceInfo.c)
 *     RIMFreePointerDevice @ 0x1C0188858 (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1C0188A98 (RIMGetDeviceButtons.c)
 *     RIMGetPointerDeviceProperties @ 0x1C01897E0 (RIMGetPointerDeviceProperties.c)
 *     RIMGetPropertyCount @ 0x1C018A2D0 (RIMGetPropertyCount.c)
 *     RIMRemoveFromActiveDevices @ 0x1C018B4C4 (RIMRemoveFromActiveDevices.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01BE764 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01BF39C (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C2E20 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE140 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C02292F0 (-ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C016E6A4 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C016F734 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C01700DC (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall Win32FreePool(char *Buffer)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  char *v3; // rcx
  NSInstrumentation::CPointerHashTable *v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  PVOID Buffera; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  if ( Buffer )
  {
    v2 = gpLeakTrackingAllocator;
    Buffera = Buffer;
    switch ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      case 0:
        goto LABEL_3;
      case 1:
        Buffera = Buffer - 16;
        v6 = *((_DWORD *)Buffer - 4);
        _InterlockedIncrement64((volatile signed __int64 *)gpLeakTrackingAllocator + 15);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(Buffera);
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v2 + 1),
          (const void *)v6);
        return;
      case 2:
        v4 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 11);
        if ( v4 )
        {
          if ( ((unsigned __int16)Buffer & 0xFFFu) >= 0x10uLL )
          {
            v8 = 0LL;
            if ( NSInstrumentation::CPointerHashTable::Remove(v4, Buffer - 16, &v8) )
            {
              NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
                *((NSInstrumentation::CPrioritizedWriterLock **)v2 + 13),
                (struct NSInstrumentation::CBackTraceStorageUnit *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFF8uLL));
              _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
              v3 = Buffer - 16;
              goto LABEL_5;
            }
          }
        }
        v5 = *((_QWORD *)v2 + 12);
        if ( v5 )
        {
          v9 = 0LL;
          if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v5, &Buffera, &v9) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
              *((NSInstrumentation::CPrioritizedWriterLock **)v2 + 13),
              (struct NSInstrumentation::CBackTraceStorageUnit *)(v9 & 0xFFFFFFFFFFFFFFF8uLL));
            _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
            goto LABEL_4;
          }
        }
LABEL_3:
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 15);
LABEL_4:
        v3 = Buffer;
LABEL_5:
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v3);
        break;
    }
  }
}
