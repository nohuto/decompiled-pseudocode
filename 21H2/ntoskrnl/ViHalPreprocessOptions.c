/*
 * XREFs of ViHalPreprocessOptions @ 0x1409CEC60
 * Callers:
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
 * Callees:
 *     DbgPrintEx @ 0x14037F820 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x1405A06F4 (VfUtilDbgPrint.c)
 */

__int64 ViHalPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  int v7; // ebx
  const CHAR *v8; // rdi
  __int64 result; // rax

  v7 = a3 & 0x10000000;
  v8 = a2;
  if ( (a3 & 0x10000000) != 0 )
    a3 = (unsigned int)a3 & 0xEFFFFFFF;
  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    if ( (unsigned int)a3 >= 0x26 )
    {
      result = 4LL;
    }
    else
    {
      a2 = (const char *)ViHalDefaultActions;
      result = *((unsigned int *)ViHalDefaultActions + a3);
    }
    *a1 = result;
  }
  if ( (_DWORD)result )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    VfUtilDbgPrint("**************** HAL Verifier Detected Violation ****************\n", a2, a3);
    VfUtilDbgPrint("**\n");
    VfUtilDbgPrint("** VF: ");
    if ( v7 )
      DbgPrintEx(0x65u, 0, v8, a5, a6);
    else
      DbgPrintEx(0x65u, 0, v8, a4, a5, a6);
    VfUtilDbgPrint("\n");
    VfUtilDbgPrint("**\n");
    return VfUtilDbgPrint("*****************************************************************\n");
  }
  return result;
}
