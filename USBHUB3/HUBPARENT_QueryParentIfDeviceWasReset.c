__int64 __fastcall HUBPARENT_QueryParentIfDeviceWasReset(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-98h]
  __int128 v6; // [rsp+60h] [rbp-58h]

  v5 = *(_OWORD *)(a1 + 208);
  v6 = *(_OWORD *)(a1 + 272);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(a1 + 264))(*((_QWORD *)&v5 + 1)) )
  {
    v2 = 2057;
    if ( ((unsigned __int8 (__fastcall *)(_QWORD))v6)(*((_QWORD *)&v5 + 1)) )
    {
      HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs(a1);
      v3 = *(_QWORD *)(a1 + 2656);
      if ( v3 )
        *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     v3,
                     off_1C006A170)
                 + 24) = 1;
      FWUPDATE_ReenumerateFirmwareUpdateDevice(a1);
    }
  }
  else
  {
    return 2041;
  }
  return v2;
}
