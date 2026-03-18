/*
 * XREFs of UsbhEtwWrite @ 0x1C00125E0
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C000E9B0 (UsbhFdoSystemPowerState.c)
 *     UsbhHubProcessIsr @ 0x1C000F090 (UsbhHubProcessIsr.c)
 *     UsbhDisableTimerObject @ 0x1C0011260 (UsbhDisableTimerObject.c)
 *     UsbhQueryBusRelations @ 0x1C0011530 (UsbhQueryBusRelations.c)
 *     UsbhEnableTimerObject @ 0x1C0011C40 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0012210 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0012400 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0013DA0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0013F80 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C0014280 (UsbhDmTimerDpc.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C005C39C (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005C4B8 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005C608 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005C6FC (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubInformation @ 0x1C005C820 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005C934 (UsbhEtwLogHubPastExceptions.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     memset @ 0x1C001E180 (memset.c)
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
