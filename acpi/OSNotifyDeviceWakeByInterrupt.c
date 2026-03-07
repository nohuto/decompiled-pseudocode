void __fastcall OSNotifyDeviceWakeByInterrupt(__int64 a1)
{
  _QWORD *Pool2; // rax
  int v3; // edx
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // r14
  _QWORD *i; // rax
  _QWORD *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rcx
  KIRQL Irql; // [rsp+78h] [rbp+10h] BYREF

  Irql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      17,
      34,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      a1,
      *(_DWORD *)(a1 + 32));
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1299211073LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = Pool2;
    *Pool2 = Pool2;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    v5 = v4[1];
    if ( v5 )
    {
      do
      {
        v6 = (__int64 *)AcpiPowerWaitWakeList;
        v7 = v5;
        v8 = v5;
        if ( (__int64 *)AcpiPowerWaitWakeList != &AcpiPowerWaitWakeList )
        {
          v9 = (_QWORD *)(a1 + 16);
          do
          {
            for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
            {
              if ( v6 == (__int64 *)i[2] )
              {
                ACPIWakeRemoveDevicesAndUpdate(v6[5], (__int64)v4);
                break;
              }
            }
            v8 = v4[1];
            if ( v5 != v8 )
              break;
            v6 = (__int64 *)*v6;
          }
          while ( v6 != &AcpiPowerWaitWakeList );
        }
        v5 = v8;
      }
      while ( v8 != v7 );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    v11 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
    {
      ExFreePoolWithTag(v4, 0);
    }
    else
    {
      do
      {
        ACPIWakeEmulationDisable(v11);
        v13 = v11[5];
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != v4 );
      if ( !v13 || (unsigned int)ACPIWakeDisableAsync(v13, v4, v12, v4) != 259 )
        OSNotifyDeviceWakeCallBack(0LL, 0LL, 0LL, v4);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      22,
      35,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids);
  }
}
