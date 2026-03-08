/*
 * XREFs of ACPICMButtonSetPower @ 0x1C0018C10
 * Callers:
 *     ACPICMLidSetPowerCompletion @ 0x1C00198C0 (ACPICMLidSetPowerCompletion.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIBusIrpSetPower @ 0x1C00027A0 (ACPIBusIrpSetPower.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0009C8C (WPP_RECORDER_SF_qLqss.c)
 *     OSNotifyDeviceWake @ 0x1C0032FFC (OSNotifyDeviceWake.c)
 */

__int64 __fastcall ACPICMButtonSetPower(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 DeviceExtension; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // eax
  char v9; // r11
  __int64 v10; // r8
  const char *v11; // rcx
  const char *v12; // r10
  unsigned __int16 v13; // r9
  NTSTATUS v14; // eax
  __int64 v15; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v5 = *(_QWORD *)(a2 + 184);
  *(_BYTE *)(v5 + 3) |= 1u;
  if ( *(_DWORD *)(v5 + 16) != 1 && (*(_DWORD *)(DeviceExtension + 200) & 4) != 0 )
  {
    v6 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v6 & 0x10000) != 0 )
    {
      v7 = (*(_DWORD *)(v5 + 8) >> 8) & 0xF;
      if ( v7 == 1 )
      {
        v8 = OSNotifyDeviceWake(*(_QWORD *)(DeviceExtension + 760));
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = *(_QWORD *)(DeviceExtension + 8);
          v11 = (const char *)&unk_1C00622D0;
          v12 = (const char *)&unk_1C00622D0;
          if ( (v10 & 0x200000000000LL) != 0 )
          {
            v11 = *(const char **)(DeviceExtension + 608);
            if ( (v10 & 0x400000000000LL) != 0 )
              v12 = *(const char **)(DeviceExtension + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v13 = 11;
LABEL_19:
            WPP_RECORDER_SF_qLqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              v13,
              (__int64)&WPP_54316db9c10838dc0a95ce458be70024_Traceguids,
              a2,
              v9,
              DeviceExtension,
              v11,
              v12);
          }
        }
      }
      else if ( *(_DWORD *)(DeviceExtension + 536) >= v7 && (v6 & 0x1000000000000000LL) == 0 )
      {
        v14 = PoRequestPowerIrp(DeviceObject, 0, (POWER_STATE)v7, ACPICMButtonWaitWakeComplete, 0LL, 0LL);
        v9 = v14;
        if ( v14 < 0 )
        {
          v15 = *(_QWORD *)(DeviceExtension + 8);
          v11 = (const char *)&unk_1C00622D0;
          v12 = (const char *)&unk_1C00622D0;
          if ( (v15 & 0x200000000000LL) != 0 )
          {
            v11 = *(const char **)(DeviceExtension + 608);
            if ( (v15 & 0x400000000000LL) != 0 )
              v12 = *(const char **)(DeviceExtension + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v13 = 12;
            goto LABEL_19;
          }
        }
      }
    }
  }
  ACPIBusIrpSetPower(DeviceObject, a2);
  return 259LL;
}
