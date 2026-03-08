/*
 * XREFs of ViHalPreprocessOptions @ 0x140AC62F4
 * Callers:
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
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
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
    if ( (unsigned int)a3 >= 0x28 )
    {
      *a1 = 4;
      goto LABEL_9;
    }
    a2 = (const char *)ViHalDefaultActions;
    result = *((unsigned int *)ViHalDefaultActions + a3);
    *a1 = result;
  }
  if ( !(_DWORD)result )
    return result;
  if ( (result & 0x10) != 0 )
    *a1 = 0;
LABEL_9:
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
