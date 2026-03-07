__int64 __fastcall NotifyHandler(__int64 a1, int a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // rdi
  KIRQL v6; // al
  __int64 v7; // r8
  char v9; // [rsp+30h] [rbp-18h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_DDD(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2,
      10,
      (__int64)&WPP_e371268d4ba533618df9ec56b8c4a796_Traceguids,
      a3,
      v9,
      *(_WORD *)(*(_QWORD *)a3 + 66LL));
  }
  if ( v4 )
  {
    switch ( v4 )
    {
      case 1:
        OSNotifyDeviceCheck(a3);
        break;
      case 2:
        OSNotifyDeviceWake(a3);
        break;
      case 3:
        OSNotifyDeviceEject(a3);
        break;
    }
  }
  else
  {
    OSNotifyDeviceEnum(a3);
  }
  v5 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v7 = *(_QWORD *)(*(_QWORD *)a3 + 104LL);
  if ( v7 && *(_DWORD *)(v7 + 16) == 1599293264 )
    v5 = v7 + 376;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  if ( v5 )
    DispatchNotification(v5 - 376, v4);
  return 0LL;
}
