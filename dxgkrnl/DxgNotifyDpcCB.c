/*
 * XREFs of DxgNotifyDpcCB @ 0x1C000E390
 * Callers:
 *     <none>
 * Callees:
 *     DpSynchronizeExecution @ 0x1C000EB40 (DpSynchronizeExecution.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C005EE40 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C005F208 (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C0060040 (DpiMiracastStopMiracastSessionAsync.c)
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C006D2EC (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgNotifyDpcCB(__int64 a1)
{
  __int64 v2; // rax
  struct DXGADAPTER *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  DXGDODPRESENT *v10; // rcx
  int v11; // r9d
  struct MIRACAST_CHUNK *v12; // rax
  struct _KEVENT *v13; // rcx
  _QWORD v14[2]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v15; // [rsp+70h] [rbp-9h] BYREF
  __int64 v16; // [rsp+80h] [rbp+7h]
  _QWORD v17[2]; // [rsp+88h] [rbp+Fh] BYREF
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp+27h] BYREF
  char v21; // [rsp+E0h] [rbp+67h] BYREF

  if ( KeGetCurrentIrql() != 2 )
  {
    WdLogSingleEntry1(1LL, 81LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0,
          2,
          -1,
          (__int64)L"KeGetCurrentIrql() == DISPATCH_LEVEL",
          81LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 64) + 3936LL), 0, 0) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 && *(_DWORD *)(v2 + 16) == 1953656900 && *(_DWORD *)(v2 + 20) == 2 )
    {
      v3 = *(struct DXGADAPTER **)(v2 + 3912);
      if ( v3 )
      {
        v4 = *((_QWORD *)v3 + 366);
        if ( v4 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v4 + 736) + 8LL) + 16LL))(a1);
        }
        else
        {
          v10 = *(DXGDODPRESENT **)(*((_QWORD *)v3 + 365) + 448LL);
          if ( v10 )
            DXGDODPRESENT::NotifyDpc(v10, v3);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
    }
  }
  v5 = *(_QWORD *)(a1 + 64);
  v16 = 0LL;
  v15 = 0LL;
  if ( v5 && *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 2 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v6 = *(_QWORD *)(v5 + 3248);
    if ( v6 )
    {
      *(_QWORD *)&v15 = v5;
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(v6 + 488);
      DpSynchronizeExecution(
        a1,
        (unsigned int)MiracastProcessPendingDPCChunks,
        (unsigned int)&v15,
        *(_DWORD *)(v5 + 3924),
        (__int64)&v21);
      if ( BYTE1(v16) )
      {
        DpiMiracastStopMiracastSessionAsync((PVOID)v6);
      }
      else
      {
        if ( (_BYTE)v16 )
          *(_BYTE *)(v6 + 588) = 1;
        if ( HIDWORD(v16) < 0x14 && *(_DWORD *)(v5 + 3268) + 5 < 40 )
        {
          v19 = *(_DWORD *)(v5 + 3232);
          v18 = 0;
          v17[1] = v17;
          v17[0] = v17;
          if ( MIRACAST_CHUNK_LIST::AllocateNewChunks((MIRACAST_CHUNK_LIST *)v17, 5u) )
          {
            v11 = *(_DWORD *)(v5 + 3924);
            v14[0] = v17;
            v14[1] = *(_QWORD *)(v5 + 3272);
            DpSynchronizeExecution(a1, (unsigned int)DpiMiracastMoveChunkList, (unsigned int)v14, v11, (__int64)&v21);
            *(_DWORD *)(v5 + 3268) += 5;
          }
          else
          {
            WdLogSingleEntry1(6LL, -1073741801LL);
          }
          while ( 1 )
          {
            v12 = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v17);
            if ( !v12 )
              break;
            ExFreePoolWithTag(v12, 0);
          }
        }
        if ( BYTE2(v16) || (_BYTE)v16 )
        {
          v13 = *(struct _KEVENT **)(v6 + 496);
          if ( v13 )
            KeSetEvent(v13, 1, 0);
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    WdLogSingleEntry2(2LL, v5, -1073741585LL);
  }
}
