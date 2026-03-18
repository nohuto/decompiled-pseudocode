/*
 * XREFs of ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0345934
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C004DE30 (DxgkDeviceIoctl.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01AB2B4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C034B544 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C03645B0 (NtDxgkRegisterVailProcess.c)
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1C03761A4 (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 *     ?VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03928A0 (-VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006D690 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

struct DXGVAILOBJECT *__fastcall DXGVIRTUALMACHINE::ReferenceVailObject(struct _KTHREAD **this)
{
  __int64 v1; // rbx
  DxgkCompositionObject *v3; // rcx

  v1 = 0LL;
  if ( this[9] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 6268LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_VirtualMachineLock.IsExclusiveOwner()",
      6268LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = this[41];
  if ( v3 )
  {
    DxgkCompositionObject::AddRef(v3);
    return this[41];
  }
  return (struct DXGVAILOBJECT *)v1;
}
