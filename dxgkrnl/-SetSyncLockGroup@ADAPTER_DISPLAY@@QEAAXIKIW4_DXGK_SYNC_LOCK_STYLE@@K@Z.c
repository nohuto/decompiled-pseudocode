/*
 * XREFs of ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1C0016B00
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_DISPLAY::SetSyncLockGroup(__int64 a1, unsigned int a2, int a3, int a4, int a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  KSPIN_LOCK *v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-28h] BYREF

  v6 = a2;
  v8 = 10LL * a2;
  *(_DWORD *)(a1 + 8 * v8 + 872) = a5;
  *(_DWORD *)(a1 + 8 * v8 + 864) = a3;
  *(_DWORD *)(a1 + 8 * v8 + 868) = a4;
  *(_DWORD *)(a1 + 8 * v8 + 904) = a6 >> 1;
  if ( a3 )
  {
    v9 = 0LL;
    if ( *(_QWORD *)(a1 + 80LL * a2 + 928) || (v9 = operator new[](0xF90uLL, 0x4B677844u, 64LL)) != 0 )
    {
      v13 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 16) + 4192LL);
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock(v13, &LockHandle);
      if ( v9 )
      {
        *(_QWORD *)(a1 + 8 * v8 + 884) = 0LL;
        *(_QWORD *)(a1 + 8 * v8 + 892) = 0LL;
        *(_DWORD *)(a1 + 8 * v8 + 900) = 0;
        *(_QWORD *)(a1 + 8 * v8 + 912) = 0LL;
        *(_QWORD *)(a1 + 8 * v8 + 920) = 0LL;
        *(_DWORD *)(a1 + 728) = 0;
        *(_DWORD *)(a1 + 732) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
        *(_QWORD *)(a1 + 8 * v8 + 928) = v9;
        *(_QWORD *)(a1 + 8 * v8 + 936) = v9 + 384;
        KeSetTimerEx((PKTIMER)(a1 + 736), (LARGE_INTEGER)-40000000LL, 4000, (PKDPC)(a1 + 800));
      }
      *(_BYTE *)(a1 + 80 * (v6 + 11)) = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      WdLogSingleEntry1(6LL, 6918LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v11,
            v10,
            v12,
            0,
            1,
            -1,
            (__int64)L"Failed to allocate SyncLock VSync Drift telemetry buffer.",
            6918LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
}
