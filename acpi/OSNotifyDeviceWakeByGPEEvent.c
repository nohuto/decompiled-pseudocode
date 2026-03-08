/*
 * XREFs of OSNotifyDeviceWakeByGPEEvent @ 0x1C0033280
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x1C0003670 (ACPIInterruptDispatchEventDpc.c)
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C000518C (ACPIWakeRemoveDevicesAndUpdate.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0033670 (OSNotifyDeviceWakeCallBack.c)
 *     WPP_RECORDER_SF_LDL @ 0x1C00337FC (WPP_RECORDER_SF_LDL.c)
 *     ACPIWakeDisableAsync @ 0x1C0044CC8 (ACPIWakeDisableAsync.c)
 */

void __fastcall OSNotifyDeviceWakeByGPEEvent(int a1, int a2, int a3, int a4)
{
  char v4; // si
  __int64 v6; // rdi
  _QWORD *Pool2; // rax
  int v8; // edx
  _QWORD *v9; // rbx
  __int64 *i; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  char v13; // bp
  const char *v14; // rcx
  const char *v15; // rdx
  __int64 v16; // rax
  KIRQL Irql; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  Irql = 0;
  v6 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LDL(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1299211073LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = Pool2;
    *Pool2 = Pool2;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    for ( i = (__int64 *)AcpiPowerWaitWakeList; i != &AcpiPowerWaitWakeList; i = (__int64 *)*i )
    {
      v6 = i[5];
      if ( (*(_QWORD *)(v6 + 1008) & 0x500000000LL) == 0 && *(_DWORD *)(v6 + 504) == a1 )
      {
        ACPIWakeRemoveDevicesAndUpdate(i[5], (__int64)v9);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    if ( (_QWORD *)*v9 == v9 )
    {
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v12 = ACPIWakeDisableAsync(v6, v9, v11, v9);
      v13 = v12;
      if ( v12 != 259 )
        OSNotifyDeviceWakeCallBack(0LL, v12, 0LL, v9);
      v14 = (const char *)&unk_1C00622D0;
      v15 = (const char *)&unk_1C00622D0;
      if ( v6 )
      {
        v16 = *(_QWORD *)(v6 + 8);
        v4 = v6;
        if ( (v16 & 0x200000000000LL) != 0 )
        {
          v14 = *(const char **)(v6 + 608);
          if ( (v16 & 0x400000000000LL) != 0 )
            v15 = *(const char **)(v6 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x11u,
          0x21u,
          (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
          v13,
          v4,
          v14,
          v15);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      32,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids);
  }
}
