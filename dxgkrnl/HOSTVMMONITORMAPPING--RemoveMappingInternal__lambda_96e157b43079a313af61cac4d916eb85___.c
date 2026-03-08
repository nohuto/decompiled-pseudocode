/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x1C001B8EC
 * Callers:
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C0002F5C (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x1C0057384 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C0057444 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C0347A94 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___(
        _QWORD *a1,
        _DWORD **a2)
{
  _QWORD *v2; // rbx
  unsigned int v5; // r15d
  unsigned int v6; // edx
  int v7; // r8d
  _QWORD *v8; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v9; // rdi
  _DWORD *v11; // rsi
  _DWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v16; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v17; // rbx
  volatile __int32 *v18; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v19; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v20; // rax
  DXGKVMB_SINGLEPACKETCONTEXT *v21; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v22[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v25; // [rsp+78h] [rbp-8h]

  v2 = a1 + 2;
  v25 = 0;
  v23 = a1 + 2;
  v22[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v22;
  v22[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v22;
  v5 = -1073741275;
  KeAcquireInStackQueuedSpinLock(a1 + 2, &LockHandle);
  v2[1] = KeGetCurrentThread();
  v8 = (_QWORD *)*a1;
  v25 = 1;
  if ( v8 == a1 )
    goto LABEL_2;
  v11 = *a2;
  do
  {
    v12 = v8;
    v8 = (_QWORD *)*v8;
    if ( v12[4] == *v11 && v12[5] == v11[1] )
    {
      v6 = v12[6];
      if ( v6 == *a2[1] )
      {
        v13 = *((_QWORD *)v12 + 6);
        if ( v13 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
            McTemplateK0xqpp_EtwWriteTransfer(
              v13,
              (unsigned int)&RemoteMonitorRemoveMapping,
              v7,
              *((_QWORD *)v12 + 2),
              v6,
              v13,
              *((_QWORD *)v12 + 4));
          v14 = *(_QWORD *)v12;
          if ( *(_DWORD **)(*(_QWORD *)v12 + 8LL) != v12
            || (v15 = (_QWORD *)*((_QWORD *)v12 + 1), (_DWORD *)*v15 != v12)
            || (*v15 = v14,
                *(_QWORD *)(v14 + 8) = v15,
                v16 = v22[0],
                *((HOST_VMMONITOR_MAPPING_ENTRY ***)v22[0] + 1) != v22) )
          {
LABEL_30:
            __fastfail(3u);
          }
          *(HOST_VMMONITOR_MAPPING_ENTRY **)v12 = v22[0];
          *((_QWORD *)v12 + 1) = v22;
          v5 = 0;
          *((_QWORD *)v16 + 1) = v12;
          v22[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v12;
        }
      }
    }
  }
  while ( v8 != a1 );
  if ( v25 )
  {
LABEL_2:
    v25 = 0;
    v23[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v9 = v22[0];
  while ( v9 != (HOST_VMMONITOR_MAPPING_ENTRY *)v22 )
  {
    v17 = v9;
    v9 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v9;
    if ( *((_QWORD *)v17 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v17 + 9), *((_DWORD *)v17 + 16), v7);
    }
    else
    {
      v18 = (volatile __int32 *)*((_QWORD *)v17 + 7);
      if ( v18 )
      {
        _InterlockedExchange(v18, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v17 + 7) + 8LL), 0LL);
      }
    }
    v19 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v17;
    v20 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v17 + 1);
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v17 + 8LL) != v17 || *v20 != v17 )
      goto LABEL_30;
    *v20 = v19;
    *((_QWORD *)v19 + 1) = v20;
    v21 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v17 + 11);
    if ( v21 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v21);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v17, v6);
  }
  return v5;
}
