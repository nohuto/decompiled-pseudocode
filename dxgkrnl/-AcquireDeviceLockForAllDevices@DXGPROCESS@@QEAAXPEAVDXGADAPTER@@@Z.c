/*
 * XREFs of ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C021948C
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C017F7AC (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C02D9190 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C00071C4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C017FBC8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0180304 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::AcquireDeviceLockForAllDevices(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  char *v4; // rax
  struct _KTHREAD *v5; // rbx
  __int64 Current; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF

  if ( this[28] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3364LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DeviceCreationLock.IsExclusiveOwner()",
      3364LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (char *)(this + 40);
  v5 = this[40];
  v10[0] = v4;
  while ( 1 )
  {
    v10[1] = v5;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v10);
    v7 = Current;
    if ( !Current )
      break;
    if ( *(struct DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL) == a2
      && !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Current + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v8, (const EVENT_DESCRIPTOR *)"g", v9, 40);
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
    }
    v5 = *(struct _KTHREAD **)v5;
  }
}
