/*
 * XREFs of ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0034668
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C0017DD8 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z @ 0x1C0034D54 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z.c)
 *     VidSchiFlushPendingFlips @ 0x1C00AE270 (VidSchiFlushPendingFlips.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00B5A88 (VidSchiWaitForDrainFlipQueue.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EF9C (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::DecrementVSyncWaiter(DXGADAPTER *this, int a2, __int64 a3)
{
  __int64 v4; // rdi
  int v5; // esi
  __int64 v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+28h] [rbp-10h]

  v4 = a2 & (unsigned int)-((*((_DWORD *)this + 698) & 0x10) != 0);
  if ( (unsigned int)v4 < 0x10 )
  {
    v5 = _InterlockedDecrement((volatile signed __int32 *)this + v4 + 738);
    if ( v5 < 0 )
      WdLogSingleEntry5(0LL, 275LL, 37LL, this, *((unsigned int *)this + v4 + 738), 0LL);
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
    {
      LODWORD(v7) = v5;
      LODWORD(v6) = v4;
      McTemplateK0pqq_EtwWriteTransfer((__int64)this, &VSyncWaiterChange, a3, this, v6, v7);
    }
  }
}
