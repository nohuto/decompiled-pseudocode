/*
 * XREFs of VfReportIssueWithOptions @ 0x1405CD8E0
 * Callers:
 *     VfCheckImageCompliance @ 0x140AC049C (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140AC07A0 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140AC0848 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x140AC08F0 (VfCheckPoolType.c)
 *     ADD_MAP_REGISTERS @ 0x140AC1180 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140AC1290 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140AC132C (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140AC13C0 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140AC1454 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140AC14EC (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140AC158C (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140AC1620 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140AC16AC (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140AC172C (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140AC2650 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC29B0 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x140AC2DD0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140AC3800 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC3BD0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140AC3F00 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC40B0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC4280 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x140AC4E8C (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x140AC5364 (ViCheckPadding.c)
 *     ViCheckTag @ 0x140AC5514 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x140AC57A0 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x140AC58D4 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x140AC6044 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 *     ViMapDoubleBuffer @ 0x140AC678C (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x140AC6C1C (ViReleaseDmaAdapter.c)
 *     VfDeadlockAcquireResource @ 0x140AD3DAC (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD4ECC (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x140AD53DC (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140AD5740 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x140AD6A68 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140AD6C20 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x1405A5370 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x140AD0554 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x140AD0684 (VfErrorStoreTriageInformation.c)
 */

void __fastcall VfReportIssueWithOptions(
        ULONG a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR a5,
        _DWORD *Response)
{
  _DWORD *v6; // rbx
  int v7; // edi
  int v8; // esi
  int v10; // ebp
  int v11; // r10d
  int v12; // eax

  v6 = Response;
  v7 = a4;
  v8 = a3;
  v10 = a2;
  v11 = *Response;
  if ( *Response && (v11 & 2) == 0 )
  {
    if ( (((v11 & 8) == 0) & !_bittest(&VfOptionFlags, 9u)) != 0 && (_BYTE)KdDebuggerEnabled )
    {
      if ( (v11 & 4) != 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            VfUtilDbgPrint("\n*** Verifier assertion failed ***\n");
            DbgPrompt("(B)reak, (I)gnore, (W)arn only, (R)emove assert? ", (PCH)&Response, 2u);
            if ( (_BYTE)Response != 66 )
            {
              switch ( (_BYTE)Response )
              {
                case 'I':
                  return;
                case 'R':
                  goto LABEL_17;
                case 'W':
                  goto LABEL_14;
              }
              if ( (_BYTE)Response != 98 )
                break;
            }
            v12 = VfErrorStoreTriageInformation(a1, v10, v8, v7, a5);
            __debugbreak();
            if ( v12 )
              VfErrorReleaseTriageInformation();
          }
          if ( (_BYTE)Response == 105 )
            return;
          if ( (_BYTE)Response == 114 )
            break;
          if ( (_BYTE)Response == 119 )
          {
LABEL_14:
            *v6 = 2;
            return;
          }
        }
LABEL_17:
        *v6 = 0;
      }
    }
    else
    {
      VerifierBugCheckIfAppropriate(a1, a2, a3, a4, a5);
    }
  }
}
