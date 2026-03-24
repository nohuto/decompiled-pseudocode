/*
 * XREFs of VfReportIssueWithOptions @ 0x1405A1DF4
 * Callers:
 *     VfCheckImageCompliance @ 0x1409C791C (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1409C7C14 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1409C7CBC (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1409C7D64 (VfCheckPoolType.c)
 *     ADD_MAP_REGISTERS @ 0x1409C9BC0 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1409C9CD0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1409C9D6C (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x1409C9E00 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x1409C9E94 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x1409C9F2C (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1409C9FCC (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1409CA060 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x1409CA0EC (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1409CA16C (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x1409CB000 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CB360 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x1409CB6F0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x1409CC0F0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CC4B0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409CC870 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CCA30 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409CCC30 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x1409CD7D8 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x1409CDCA0 (ViCheckPadding.c)
 *     ViCheckTag @ 0x1409CDE50 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x1409CE0DC (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x1409CE210 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x1409CE748 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x1409CE93C (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x1409CEA50 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x1409CF094 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x1409CF520 (ViReleaseDmaAdapter.c)
 *     VfDeadlockAcquireResource @ 0x1409DD5C8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DE338 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1409DE838 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x1409DEB94 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x1409DFA4C (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x1409DFBE8 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x140585570 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1405A06F4 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D54 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorReleaseTriageInformation @ 0x1409D7FF8 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x1409D81BC (VfErrorStoreTriageInformation.c)
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
