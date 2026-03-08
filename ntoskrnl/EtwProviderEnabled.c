/*
 * XREFs of EtwProviderEnabled @ 0x140367E30
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x1402F8804 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTraceMemoryAcg @ 0x140367DD8 (EtwTraceMemoryAcg.c)
 *     EtwpLogMemNodeInfo @ 0x14045F526 (EtwpLogMemNodeInfo.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14067E52C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogMapExecView @ 0x14067FA78 (EtwTiLogMapExecView.c)
 *     EtwTraceWorkingSetSwap @ 0x140765840 (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogSetContextThread @ 0x14077D1C4 (EtwTiLogSetContextThread.c)
 *     EtwTiLogDriverObjectLoad @ 0x14078FD38 (EtwTiLogDriverObjectLoad.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x140793510 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140798ED0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1407F0EC4 (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTiLogAllocExecVm @ 0x1407F1018 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1407F1248 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140854C60 (EtwTiLogDriverObjectUnLoad.c)
 *     EtwTiLogProtectExecVm @ 0x1408A2C4A (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408A2F24 (EtwTiLogSuspendResumeThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E5EB4 (EtwTiLogSuspendResumeProcess.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140231970 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v4; // rax
  UCHAR v5; // cl
  BOOLEAN result; // al

  result = 0;
  if ( RegHandle )
  {
    v4 = *(_QWORD *)(RegHandle + 32);
    if ( *(_DWORD *)(v4 + 96) )
    {
      v5 = *(_BYTE *)(v4 + 100);
      if ( (Level <= v5 || !v5)
        && ((*(_DWORD *)(v4 + 104) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v4 + 112)) != 0 && (Keyword & *(_QWORD *)(v4 + 120)) == *(_QWORD *)(v4 + 120)) )
      {
        return 1;
      }
    }
    if ( *(_BYTE *)(RegHandle + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 40) + 96LL, Level, Keyword) )
      return 1;
  }
  return result;
}
