__int64 __fastcall ACPIDeviceIrpWaitWakeRequestPending(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // rdi
  const char *v5; // rcx
  __int64 v6; // rsi
  char v7; // r8
  const char *v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rax
  KIRQL Irql; // [rsp+68h] [rbp+10h] BYREF

  v4 = (_QWORD *)*((_QWORD *)a4 + 5);
  v5 = (const char *)&unk_1C00622D0;
  v6 = *((_QWORD *)a4 + 25);
  v7 = 0;
  Irql = 0;
  v10 = (const char *)&unk_1C00622D0;
  if ( v4 )
  {
    v11 = v4[1];
    v7 = (char)v4;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v4[76];
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = (const char *)v4[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x23u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      (char)a4,
      a2,
      v7,
      v5,
      v10);
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  ++a4[28];
  if ( a2 >= 0 )
  {
    v12 = (_QWORD *)qword_1C006F238;
    if ( *(__int64 **)qword_1C006F238 != &AcpiPowerWaitWakeList )
      __fastfail(3u);
    *(_QWORD *)a4 = &AcpiPowerWaitWakeList;
    *((_QWORD *)a4 + 1) = v12;
    *v12 = a4;
    qword_1C006F238 = (__int64)a4;
    if ( *(_BYTE *)(v6 + 68) )
    {
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      ACPIDeviceCancelWaitWakeIrp(v4[96], v6);
      ACPIDereferenceWaitWakePowerRequest(a4);
      return 3221225760LL;
    }
    a4[14] |= 0x40u;
    ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
    _InterlockedExchange64((volatile __int64 *)(v6 + 104), (__int64)ACPIDeviceCancelWaitWakeIrp);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    a4[64] = a2;
    ACPIDeviceIrpWaitWakeRequestComplete((__int64)a4);
  }
  ACPIDereferenceWaitWakePowerRequest(a4);
  return 259LL;
}
