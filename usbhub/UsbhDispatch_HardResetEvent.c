__int64 __fastcall UsbhDispatch_HardResetEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbp
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r14
  KIRQL v10; // r13
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // r14
  char v19; // cl
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx

  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    goto LABEL_37;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      19,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      a3);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2800));
  v9 = *(int *)(v6 + 2808);
  v10 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v11 = 829576018;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v9;
      *(_QWORD *)(v11 + 24) = v3;
    }
  }
  if ( ((_DWORD)v3 == 3 || (_DWORD)v3 == 9) && (_DWORD)v9 == 3 )
  {
    if ( *(_BYTE *)(v6 + 5268) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 5260));
      UsbhIncrementConcurrentResetCounter(a1, v8, 0LL);
    }
    Log(a1, 16, 1381200434, 3LL, v3);
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2800), v10);
    return 3LL;
  }
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 863130450;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = v9;
      *(_QWORD *)(v14 + 24) = v3;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2800), v7);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 724267890;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = a2;
      *(_QWORD *)(v16 + 24) = v3;
    }
  }
  v17 = *(_QWORD *)(a1 + 64);
  if ( !v17 )
LABEL_37:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v17 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeWaitForSingleObject((PVOID)(v17 + 2816), Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 64) = 2018792274;
  *(_DWORD *)(a2 + 72) = v3;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v18 = *(int *)(v17 + 2808);
  *(_DWORD *)(a2 + 68) = v18;
  v19 = *(_DWORD *)(v17 + 920) + 1;
  *(_QWORD *)(v17 + 1320) = a2;
  v20 = v19 & 7;
  *(_DWORD *)(v17 + 920) = v20;
  v20 *= 32LL;
  *(_DWORD *)(v20 + v17 + 924) = v3;
  *(_DWORD *)(v20 + v17 + 928) = *(_DWORD *)(v17 + 2808);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v21 = *(_QWORD *)(a1 + 64);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
      *(_DWORD *)v22 = 757953394;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 16) = a2;
      *(_QWORD *)(v22 + 24) = v18;
    }
  }
  switch ( (int)v18 )
  {
    case 1:
      result = Usbh_HRS_Disabled(a2, (unsigned int)v3);
      break;
    case 2:
      result = Usbh_HRS_WaitReady(a2, (unsigned int)v3);
      break;
    case 3:
      result = Usbh_HRS_Queued(a2, (unsigned int)v3);
      break;
    case 4:
      result = Usbh_HRS_ResetStop(a2, (unsigned int)v3);
      break;
    case 5:
      result = Usbh_HRS_WaitDone(a2, (unsigned int)v3);
      break;
    case 6:
      result = Usbh_HRS_Paused(a2, (unsigned int)v3);
      break;
    case 7:
      result = Usbh_HRS_PausedWaitDone(a2, (unsigned int)v3);
      break;
    default:
      UsbhReleaseResetLock(a1, a2, (unsigned int)v18);
      result = (unsigned int)v18;
      break;
  }
  return result;
}
