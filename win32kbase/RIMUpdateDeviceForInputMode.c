__int64 __fastcall RIMUpdateDeviceForInputMode(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx

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
        v10 = SGDGetUserSessionState(a1, v7, v8, v9);
        if ( (*(_DWORD *)(v10 + 16820) & 0x10000) != 0 )
          v11 = (unsigned int)*(char *)(v10 + 16821);
        else
          v11 = 0LL;
        RIMConfigureDeviceFeedback(a1, v11);
      }
    }
    if ( (*(_DWORD *)(a1 + 184) & 0x2000) == 0 )
      RIMSendLatencyMgtDeviceRequest(a1, a2 != 0);
  }
  if ( *(_BYTE *)SGDGetUserGdiSessionState(a1) || (*(_DWORD *)(a1 + 188) & 4) != 0 )
  {
    LOBYTE(v4) = a2 == 1;
    RIMSetDevicePDOSuppression(a1, v4);
  }
  return 0LL;
}
