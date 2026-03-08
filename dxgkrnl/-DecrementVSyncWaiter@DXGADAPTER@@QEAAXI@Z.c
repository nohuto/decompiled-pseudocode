/*
 * XREFs of ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8
 * Callers:
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x1C001B8EC (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x1C00564C8 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___ @ 0x1C00566D0 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___ @ 0x1C00568A4 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___ @ 0x1C0056A98 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z @ 0x1C006D60C (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017E400 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C018D730 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C018F830 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01911B0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C7400 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02B7460 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
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
