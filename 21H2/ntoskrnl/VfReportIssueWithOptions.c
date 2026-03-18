/*
 * XREFs of VfReportIssueWithOptions @ 0x1405FFA20
 * Callers:
 *     VfCheckImageCompliance @ 0x140A82B0C (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140A82E08 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140A82EB0 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x140A82F58 (VfCheckPoolType.c)
 *     ADD_MAP_REGISTERS @ 0x140A83778 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140A83888 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140A83924 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140A839B8 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140A83A4C (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140A83AE4 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140A83B84 (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140A83C18 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140A83CA4 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140A83D24 (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140A84BC0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140A84F20 (VfBuildScatterGatherListEx.c)
 *     VfCreateCommonBufferFromMdl @ 0x140A852B0 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140A853A0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140A85DA0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140A86160 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140A86510 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140A866D0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140A868E0 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x140A874C8 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x140A8798C (ViCheckPadding.c)
 *     ViCheckTag @ 0x140A87B3C (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x140A87DC8 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x140A87EFC (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140A88430 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x140A88624 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x140A88738 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x140A88D98 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x140A89224 (ViReleaseDmaAdapter.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x140A98ACC (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140A98E28 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x140A99C74 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140A99E14 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x1405E4170 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1405FDF9C (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x140A92B64 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x140A92C94 (VfErrorStoreTriageInformation.c)
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
          VfUtilDbgPrint("\n*** Verifier assertion failed ***\n");
          DbgPrompt("(B)reak, (I)gnore, (W)arn only, (R)emove assert? ", (PCH)&Response, 2u);
          switch ( (_BYTE)Response )
          {
            case 'B':
              goto LABEL_15;
            case 'I':
              return;
            case 'R':
              goto LABEL_16;
            case 'W':
              goto LABEL_14;
            case 'b':
LABEL_15:
              VfErrorStoreTriageInformation(a1, v10, v8, v7, a5);
              __debugbreak();
            case 'i':
              return;
          }
          if ( (_BYTE)Response == 114 )
            break;
          if ( (_BYTE)Response == 119 )
          {
LABEL_14:
            *v6 = 2;
            return;
          }
        }
LABEL_16:
        *v6 = 0;
      }
    }
    else
    {
      VerifierBugCheckIfAppropriate(a1, a2, a3, a4, a5);
    }
  }
}
