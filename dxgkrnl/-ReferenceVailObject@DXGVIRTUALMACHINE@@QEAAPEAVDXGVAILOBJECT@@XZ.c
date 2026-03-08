/*
 * XREFs of ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0340EF4
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C004CDD0 (DxgkDeviceIoctl.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01A6B80 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0346B84 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C035FB20 (NtDxgkRegisterVailProcess.c)
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1C0371AE4 (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 *     ?VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038E030 (-VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006CA60 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
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
