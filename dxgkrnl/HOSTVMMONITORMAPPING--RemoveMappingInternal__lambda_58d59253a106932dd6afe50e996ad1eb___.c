__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // r15d
  unsigned int v6; // edx
  __int64 v7; // r8
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v14; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v15; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v16; // rbx
  volatile __int32 *v17; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v18; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v19; // rax
  DXGKVMB_SINGLEPACKETCONTEXT *v20; // rcx
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
    goto LABEL_15;
  do
  {
    v9 = *a2;
    v10 = v8;
    v8 = (_QWORD *)*v8;
    if ( v10[4] == *(_DWORD *)(*a2 + 16) && v10[5] == *(_DWORD *)(v9 + 20) )
    {
      v6 = v10[6];
      if ( v6 == *(_DWORD *)(v9 + 24) )
      {
        v7 = *((_QWORD *)v10 + 4);
        if ( v7 == *(_QWORD *)(v9 + 32) )
        {
          v11 = *((_QWORD *)v10 + 6);
          if ( v11 == *(_QWORD *)(v9 + 48) )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
              McTemplateK0xqpp_EtwWriteTransfer(
                v9,
                (unsigned int)&RemoteMonitorRemoveMapping,
                v7,
                *((_QWORD *)v10 + 2),
                v6,
                v11,
                *((_QWORD *)v10 + 4));
            v12 = *(_QWORD *)v10;
            if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) != v10
              || (v13 = (_QWORD *)*((_QWORD *)v10 + 1), (_DWORD *)*v13 != v10)
              || (*v13 = v12,
                  *(_QWORD *)(v12 + 8) = v13,
                  v14 = v22[0],
                  *((HOST_VMMONITOR_MAPPING_ENTRY ***)v22[0] + 1) != v22) )
            {
LABEL_28:
              __fastfail(3u);
            }
            *(HOST_VMMONITOR_MAPPING_ENTRY **)v10 = v22[0];
            *((_QWORD *)v10 + 1) = v22;
            v5 = 0;
            *((_QWORD *)v14 + 1) = v10;
            v22[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v10;
          }
        }
      }
    }
  }
  while ( v8 != a1 );
  if ( v25 )
  {
LABEL_15:
    v25 = 0;
    v23[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v15 = v22[0];
  while ( v15 != (HOST_VMMONITOR_MAPPING_ENTRY *)v22 )
  {
    v16 = v15;
    v15 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v15;
    if ( *((_QWORD *)v16 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v16 + 9), *((_DWORD *)v16 + 16), v7);
    }
    else
    {
      v17 = (volatile __int32 *)*((_QWORD *)v16 + 7);
      if ( v17 )
      {
        _InterlockedExchange(v17, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v16 + 7) + 8LL), 0LL);
      }
    }
    v18 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v16;
    v19 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v16 + 1);
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v16 + 8LL) != v16 || *v19 != v16 )
      goto LABEL_28;
    *v19 = v18;
    *((_QWORD *)v18 + 1) = v19;
    v20 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v16 + 11);
    if ( v20 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v20);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v16, v6);
  }
  return v5;
}
