/*
 * XREFs of UsbhDerefPdoDeviceHandle @ 0x1C0003470
 * Callers:
 *     UsbhSyncSendCommandToDevice @ 0x1C0002110 (UsbhSyncSendCommandToDevice.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C00029DC (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C002FC90 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C003D878 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C003DE80 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhGetHubNodeInfo @ 0x1C0048AC8 (UsbhGetHubNodeInfo.c)
 *     UsbhPdoQueryWmiDataBlock @ 0x1C0048EE0 (UsbhPdoQueryWmiDataBlock.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C00552A0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0056374 (UsbhPdoRemoveCleanup.c)
 *     UsbhPdoSetDeviceData @ 0x1C0056490 (UsbhPdoSetDeviceData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDerefPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbp
  __int64 v8; // rax
  KSPIN_LOCK *v9; // rdi
  KIRQL v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void (__fastcall *v16)(_QWORD, __int64, __int64, _QWORD); // rax

  v4 = a4;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    goto LABEL_18;
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v8);
  v9 = (KSPIN_LOCK *)(v8 + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 3720));
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 825054788;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = a2;
      *(_QWORD *)(v12 + 24) = a3;
    }
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 841832004;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = a2;
        *(_QWORD *)(v14 + 24) = v4;
      }
    }
  }
  v15 = *(_QWORD *)(a1 + 64);
  if ( !v15 )
LABEL_18:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v15 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v16 = *(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v15 + 4472);
  if ( v16 )
    v16(*(_QWORD *)(v15 + 4232), a2, a3, (unsigned int)v4);
  KeReleaseSpinLock(v9, v10);
}
