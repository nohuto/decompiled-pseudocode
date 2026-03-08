/*
 * XREFs of ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0015344
 * Callers:
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C0165644 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C0165800 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01944A0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C01B450C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C02F1F88 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C03166DC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire(DXGDEVICEACCESSLOCKEXCLUSIVE *this)
{
  __int64 v2; // rcx
  bool v3; // zf
  struct _KEVENT *v4; // rcx
  struct _KEVENT *v5; // rcx
  int v6; // edi
  __int64 v7; // rbx

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(v2 + 464) == 2;
  v4 = *(struct _KEVENT **)(v2 + 16);
  if ( v3 )
    v5 = v4 + 5;
  else
    v5 = v4 + 4;
  v6 = 0;
  if ( KeReadStateEvent(v5) )
  {
    v7 = *(_QWORD *)this;
    KeEnterCriticalRegion();
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 136), 0) )
      v6 = 1;
    else
      KeLeaveCriticalRegion();
    *((_DWORD *)this + 2) = v6;
  }
  return *((unsigned int *)this + 2);
}
