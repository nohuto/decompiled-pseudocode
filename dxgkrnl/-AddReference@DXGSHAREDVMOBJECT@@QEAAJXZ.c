/*
 * XREFs of ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C036DA00
 * Callers:
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0346DF8 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037DF70 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038E8A0 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGSHAREDVMOBJECT::AddReference(DXGSHAREDVMOBJECT *this)
{
  if ( *((int *)this + 6) < 0 )
  {
    WdLogSingleEntry1(1LL, 16201LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Reference >= 0", 16201LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
