__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___(
        HOST_VMMONITOR_MAPPING_ENTRY *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // r15d
  unsigned int v6; // edx
  int v7; // r8d
  HOST_VMMONITOR_MAPPING_ENTRY *v8; // rsi
  HOST_VMMONITOR_MAPPING_ENTRY *v9; // rdi
  __int64 v10; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v11; // rax
  HOST_VMMONITOR_MAPPING_ENTRY **v12; // rcx
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

  v2 = (_QWORD *)((char *)a1 + 16);
  v24 = 0;
  v22 = (_QWORD *)((char *)a1 + 16);
  v21[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v21;
  v21[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v21;
  v5 = -1073741275;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 2, &LockHandle);
  v2[1] = KeGetCurrentThread();
  v8 = *(HOST_VMMONITOR_MAPPING_ENTRY **)a1;
  v24 = 1;
  if ( v8 == a1 )
    goto LABEL_11;
  do
  {
    v9 = v8;
    v8 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v8;
    v10 = *((_QWORD *)v9 + 4);
    if ( v10 == *a2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
        McTemplateK0xqpp_EtwWriteTransfer(
          v10,
          (unsigned int)&RemoteMonitorRemoveMapping,
          v7,
          *((_QWORD *)v9 + 2),
          *((_DWORD *)v9 + 6),
          *((_QWORD *)v9 + 6),
          *((_QWORD *)v9 + 4));
      v11 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v9;
      if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v9 + 8LL) != v9
        || (v12 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v9 + 1), *v12 != v9)
        || (*v12 = v11, *((_QWORD *)v11 + 1) = v12, v13 = v21[0], *((HOST_VMMONITOR_MAPPING_ENTRY ***)v21[0] + 1) != v21) )
      {
LABEL_24:
        __fastfail(3u);
      }
      *(HOST_VMMONITOR_MAPPING_ENTRY **)v9 = v21[0];
      *((_QWORD *)v9 + 1) = v21;
      v5 = 0;
      *((_QWORD *)v13 + 1) = v9;
      v21[0] = v9;
    }
  }
  while ( v8 != a1 );
  if ( v24 )
  {
LABEL_11:
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
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v15 + 9), *((_DWORD *)v15 + 16), v7);
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
      goto LABEL_24;
    *v18 = v17;
    *((_QWORD *)v17 + 1) = v18;
    v19 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v15 + 11);
    if ( v19 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v19);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v15, v6);
  }
  return v5;
}
