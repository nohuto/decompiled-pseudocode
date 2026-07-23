/*
 * XREFs of VfReportIssueWithOptions @ 0x1405A2024
 * Callers:
 *     VfCheckImageCompliance @ 0x1409C891C (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1409C8C14 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1409C8CBC (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1409C8D64 (VfCheckPoolType.c)
 *     ADD_MAP_REGISTERS @ 0x1409CABC0 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1409CACD0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1409CAD6C (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x1409CAE00 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x1409CAE94 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x1409CAF2C (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1409CAFCC (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1409CB060 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x1409CB0EC (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1409CB16C (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x1409CC000 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CC360 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x1409CC6F0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x1409CD0F0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CD4B0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409CD870 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CDA30 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409CDC30 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x1409CE7D8 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x1409CECA0 (ViCheckPadding.c)
 *     ViCheckTag @ 0x1409CEE50 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x1409CF0DC (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x1409CF210 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x1409CF93C (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x1409D0094 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x1409D0520 (ViReleaseDmaAdapter.c)
 *     VfDeadlockAcquireResource @ 0x1409DE5C8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DF338 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1409DF838 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x1409DFB94 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x1409E0A4C (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x1409E0BE8 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x1405857A0 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x1409D8FF8 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x1409D91BC (VfErrorStoreTriageInformation.c)
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
