/*
 * XREFs of RIMUpdateDeviceForInputMode @ 0x1C0005CE4
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C0005C78 (RIMHandlePowerDeviceArrival.c)
 *     RIMSetDeviceInputMode @ 0x1C00BF684 (RIMSetDeviceInputMode.c)
 * Callees:
 *     RIMConfigureDeviceFeedback @ 0x1C017FFF0 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigurePointerDevice @ 0x1C0180590 (RIMConfigurePointerDevice.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0182C44 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDevicePDOSuppression @ 0x1C0191E58 (RIMSetDevicePDOSuppression.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1C0192B68 (RIMApiSetSetUserPTPEnabledPreference.c)
 */

__int64 __fastcall RIMUpdateDeviceForInputMode(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx

  if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 336);
    if ( !a2 )
    {
      RIMConfigurePointerDevice(*(_QWORD *)(a1 + 336), a1, *(_QWORD *)(a1 + 456));
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 472) + 24LL) == 7 )
        RIMApiSetSetUserPTPEnabledPreference(a1, *(_QWORD *)(a1 + 456), v6);
      if ( (*(_DWORD *)(a1 + 200) & 0x400) != 0 )
      {
        v11 = SGDGetUserSessionState(v8, v7, v9, v10);
        if ( (*(_DWORD *)(v11 + 16820) & 0x10000) != 0 )
          v12 = (unsigned int)*(char *)(v11 + 16821);
        else
          v12 = 0LL;
        RIMConfigureDeviceFeedback(a1, v12);
      }
    }
    if ( (*(_DWORD *)(a1 + 184) & 0x2000) == 0 )
      RIMSendLatencyMgtDeviceRequest(a1, a2 != 0);
  }
  if ( *(_BYTE *)SGDGetUserGdiSessionState() || (*(_DWORD *)(a1 + 188) & 4) != 0 )
  {
    LOBYTE(v4) = a2 == 1;
    RIMSetDevicePDOSuppression(a1, v4);
  }
  return 0LL;
}
