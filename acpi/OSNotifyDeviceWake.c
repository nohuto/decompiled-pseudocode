__int64 __fastcall OSNotifyDeviceWake(__int64 *a1)
{
  __int64 v1; // r8
  const char *v2; // rbp
  char v3; // si
  __int64 v4; // r9
  void *v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *Pool2; // rax
  _QWORD *v9; // rdi
  const char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // eax
  char v14; // r14
  const char *v15; // rcx
  __int64 v16; // rax
  KIRQL Irql; // [rsp+80h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = (const char *)&unk_1C00622D0;
  v3 = 0;
  Irql = 0;
  LODWORD(v4) = 0;
  v5 = &unk_1C00622D0;
  v6 = *(_QWORD **)(v1 + 104);
  if ( v6 )
  {
    v7 = v6[1];
    v4 = *(_QWORD *)(v1 + 104);
    if ( (v7 & 0x200000000000LL) != 0 && (v7 & 0x400000000000LL) != 0 )
      v5 = (void *)v6[77];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_1C006FA40 = *(_DWORD *)(v1 + 40);
    byte_1C006FA44 = 0;
    WPP_RECORDER_SF_qsqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v5, v1, v4);
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1299211073LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = Pool2;
    *Pool2 = Pool2;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    ACPIWakeRemoveDevicesAndUpdate((__int64)v6, (__int64)v9);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    if ( (_QWORD *)*v9 == v9 )
    {
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v13 = ACPIWakeDisableAsync(v6, v9, v12, v9);
      v14 = v13;
      if ( v13 != 259 )
        OSNotifyDeviceWakeCallBack(0LL, v13, 0LL, v9);
      v15 = (const char *)&unk_1C00622D0;
      if ( v6 )
      {
        v16 = v6[1];
        v3 = (char)v6;
        if ( (v16 & 0x200000000000LL) != 0 )
        {
          v2 = (const char *)v6[76];
          if ( (v16 & 0x400000000000LL) != 0 )
            v15 = (const char *)v6[77];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x11u,
          0x1Cu,
          (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
          v14,
          v3,
          v2,
          v15);
    }
  }
  else
  {
    v10 = (const char *)&unk_1C00622D0;
    if ( v6 )
    {
      v11 = v6[1];
      v3 = (char)v6;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v2 = (const char *)v6[76];
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = (const char *)v6[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x11u,
        0x1Bu,
        (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
        v3,
        v2,
        v10);
  }
  return 0LL;
}
