/*
 * XREFs of Win32FreePool @ 0x1C0070430
 * Callers:
 *     HMAllocObjectEx @ 0x1C00122BC (HMAllocObjectEx.c)
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C0030DD8 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C006C130 (DrvEnumDisplaySettings.c)
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     _RegisterLogonProcess @ 0x1C008CF70 (_RegisterLogonProcess.c)
 *     QueuePowerRequest @ 0x1C00B7EA0 (QueuePowerRequest.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00DE208 (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 *     _lambda_a018e77ba64c4f241a1dcf8ac06f3d65_::_lambda_invoker_cdecl_ @ 0x1C00DE680 (_lambda_a018e77ba64c4f241a1dcf8ac06f3d65_--_lambda_invoker_cdecl_.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C0175DB0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01ED628 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01F1CA0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0267C70 (-ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C019B554 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C019C5E4 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C019CF8C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
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
