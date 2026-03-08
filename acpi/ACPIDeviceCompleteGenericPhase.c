/*
 * XREFs of ACPIDeviceCompleteGenericPhase @ 0x1C001C540
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C00028E0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDeviceCompleteInterpreterRequest @ 0x1C001C610 (ACPIDeviceCompleteInterpreterRequest.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C001EE10 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001EF60 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C001F040 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001F100 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C001F370 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001F780 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C001FAA0 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C001FB40 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x1C001FC60 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C0020650 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0020880 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0020B10 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C0020D80 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C0020EC0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C00210F0 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C00211F0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C00212B0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0021450 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C0021620 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0021870 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0021A10 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIWakeRestoreEnablesCompletion @ 0x1C0046070 (ACPIWakeRestoreEnablesCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C001C4F4 (ACPIDeviceCompletePhase3Common.c)
 */

void __fastcall ACPIDeviceCompleteGenericPhase(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v6; // r10
  const char *v7; // rdx
  const char *v8; // r8
  __int64 v10; // rcx
  signed __int32 v11; // edx

  v4 = *(_QWORD **)(a4 + 40);
  LOBYTE(v6) = 0;
  v7 = (const char *)&unk_1C00622D0;
  v8 = (const char *)&unk_1C00622D0;
  if ( v4 )
  {
    v10 = v4[1];
    v6 = *(_QWORD *)(a4 + 40);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)v4[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v8 = (const char *)v4[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0xEu,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a2,
      v6,
      v7,
      v8);
  *(_DWORD *)(a4 + 56) &= 0xEEFFFFFF;
  if ( a2 >= 0 )
  {
    v11 = *(_DWORD *)(a4 + 212);
  }
  else
  {
    *(_DWORD *)(a4 + 256) = a2;
    v11 = 2;
  }
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 208), v11);
}
