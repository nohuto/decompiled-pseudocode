/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___ @ 0x1C00566D0
 * Callers:
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z @ 0x1C0057424 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x1C0057384 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C0057444 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C0347A94 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___(
        _QWORD *a1,
        _DWORD *a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // r15d
  unsigned int v6; // edx
  HOST_VMMONITOR_MAPPING_ENTRY **v7; // rcx
  int v8; // r8d
  _QWORD *v9; // rsi
  _DWORD *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v13; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v14; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v15; // rbx
  volatile __int32 *v16; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v17; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v18; // rax
  DXGKVMB_SINGLEPACKETCONTEXT *v19; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v21[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v24; // [rsp+78h] [rbp-8h]

  v2 = a1 + 2;
  v24 = 0;
  v22 = a1 + 2;
  v21[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v21;
  v21[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v21;
  v5 = -1073741275;
  KeAcquireInStackQueuedSpinLock(a1 + 2, &LockHandle);
  v2[1] = KeGetCurrentThread();
  v9 = (_QWORD *)*a1;
  v24 = 1;
  if ( v9 == a1 )
    goto LABEL_12;
  do
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    if ( v10[4] == *a2 && v10[5] == a2[1] )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
        McTemplateK0xqpp_EtwWriteTransfer(
          (_DWORD)v7,
          (unsigned int)&RemoteMonitorRemoveMapping,
          v8,
          *((_QWORD *)v10 + 2),
          v10[6],
          *((_QWORD *)v10 + 6),
          *((_QWORD *)v10 + 4));
      v11 = *(_QWORD *)v10;
      if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) != v10
        || (v12 = (_QWORD *)*((_QWORD *)v10 + 1), (_DWORD *)*v12 != v10)
        || (*v12 = v11, *(_QWORD *)(v11 + 8) = v12, v13 = v21[0], *((HOST_VMMONITOR_MAPPING_ENTRY ***)v21[0] + 1) != v21) )
      {
LABEL_25:
        __fastfail(3u);
      }
      *(HOST_VMMONITOR_MAPPING_ENTRY **)v10 = v21[0];
      v7 = v21;
      *((_QWORD *)v10 + 1) = v21;
      v5 = 0;
      *((_QWORD *)v13 + 1) = v10;
      v21[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v10;
    }
  }
  while ( v9 != a1 );
  if ( v24 )
  {
LABEL_12:
    v24 = 0;
    v22[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v14 = v21[0];
  while ( v14 != (HOST_VMMONITOR_MAPPING_ENTRY *)v21 )
  {
    v15 = v14;
    v14 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v14;
    if ( *((_QWORD *)v15 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v15 + 9), *((_DWORD *)v15 + 16), v8);
    }
    else
    {
      v16 = (volatile __int32 *)*((_QWORD *)v15 + 7);
      if ( v16 )
      {
        _InterlockedExchange(v16, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v15 + 7) + 8LL), 0LL);
      }
    }
    v17 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v15;
    v18 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v15 + 1);
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v15 + 8LL) != v15 || *v18 != v15 )
      goto LABEL_25;
    *v18 = v17;
    *((_QWORD *)v17 + 1) = v18;
    v19 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v15 + 11);
    if ( v19 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v19);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v15, v6);
  }
  return v5;
}
