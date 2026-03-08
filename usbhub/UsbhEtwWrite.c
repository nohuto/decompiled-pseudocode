/*
 * XREFs of UsbhEtwWrite @ 0x1C0009AC0
 * Callers:
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0007830 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C00079B0 (UsbhDmTimerDpc.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0008330 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhDisableTimerObject @ 0x1C00084D0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C0008770 (UsbhEnableTimerObject.c)
 *     UsbhQueryBusRelations @ 0x1C0008DD0 (UsbhQueryBusRelations.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C00096F0 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C00098E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhHubProcessIsr @ 0x1C000B860 (UsbhHubProcessIsr.c)
 *     UsbhFdoSystemPowerState @ 0x1C000D270 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C005B5DC (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005B6F8 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005B848 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005B93C (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubInformation @ 0x1C005BA60 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005BB74 (UsbhEtwLogHubPastExceptions.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     memset @ 0x1C0023880 (memset.c)
 */

NTSTATUS UsbhEtwWrite(PCEVENT_DESCRIPTOR EventDescriptor, LPCGUID ActivityId, ...)
{
  va_list v4; // r8
  ULONG v5; // r9d
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData[10]; // [rsp+40h] [rbp-C8h] BYREF
  va_list va; // [rsp+120h] [rbp+18h] BYREF

  va_start(va, ActivityId);
  memset(UserData, 0, sizeof(UserData));
  va_copy(v4, va);
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)v4;
    if ( !*(_QWORD *)v4 )
      break;
    v7 = *((_DWORD *)v4 + 2);
    v4 += 16;
    if ( !v7 || v5 >= 0xA )
      break;
    v8 = v5++;
    UserData[v8].Ptr = v6;
    UserData[v8].Size = v7;
    UserData[v8].Reserved = 0;
  }
  return EtwWrite(RegHandle, EventDescriptor, ActivityId, v5, UserData);
}
