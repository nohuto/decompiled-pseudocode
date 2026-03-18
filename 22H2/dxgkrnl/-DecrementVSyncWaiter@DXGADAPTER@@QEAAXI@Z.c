/*
 * XREFs of ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8
 * Callers:
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x1C001BB4C (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___ @ 0x1C0026478 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___ @ 0x1C0026628 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x1C0057368 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___ @ 0x1C0057570 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___ @ 0x1C0057744 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z @ 0x1C006E23C (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017664C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0186B84 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C01C59D0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01C73B0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C01D4F10 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BC360 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0040FDC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::DecrementVSyncWaiter(DXGADAPTER *this, int a2, int a3)
{
  int v3; // ebx
  __int64 v4; // rdi
  int v5; // esi

  v3 = (int)this;
  v4 = a2 & (unsigned int)-((*((_DWORD *)this + 698) & 0x10) != 0);
  if ( (unsigned int)v4 < 0x10 )
  {
    v5 = _InterlockedDecrement((volatile signed __int32 *)this + v4 + 738);
    if ( v5 < 0 )
      WdLogSingleEntry5(0LL, 275LL, 37LL, this, *((unsigned int *)this + v4 + 738), 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0pqq_EtwWriteTransfer((_DWORD)this, (unsigned int)&VSyncWaiterChange, a3, v3, v4, v5);
  }
}
