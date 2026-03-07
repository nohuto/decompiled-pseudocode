__int64 __fastcall HUBPDO_AssignPDOIds(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // ebx
  unsigned __int16 v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int16 v8; // dx
  NTSTATUS v10; // [rsp+28h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+40h] [rbp-58h] BYREF

  *(_QWORD *)&DestinationString.Length = 3670016LL;
  DestinationString.Buffer = (wchar_t *)&v12;
  HUBREG_UpdateUxdSettings(*(_QWORD *)a1, a1, 0LL);
  if ( (*(_DWORD *)(a1 + 1632) & 1) != 0 )
    HUBID_BuildUxdPnpId(a1, (const void **)(a1 + 2120));
  v4 = HUBID_BuildDeviceID(a1, a2);
  if ( v4 >= 0 )
  {
    v4 = HUBID_BuildHardwareID(a1, a2, 0LL);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v4;
      v5 = 108;
      goto LABEL_6;
    }
    v4 = HUBID_BuildCompatibleID(a1, a2, 0LL);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v4;
      v5 = 109;
      goto LABEL_6;
    }
    HUBID_BuildContainerID(a1, a2);
    v6 = *(_DWORD *)(a1 + 1632);
    if ( (v6 & 0x40) != 0 )
    {
      if ( (v6 & 2) == 0 )
        DestinationString.MaximumLength = 32;
      RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 2152));
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1704))(
             WdfDriverGlobals,
             a2,
             &DestinationString);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v4;
        v5 = 110;
        goto LABEL_6;
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(v7 + 204) & 0x200) == 0 || (v8 = *(_WORD *)(v7 + 236)) == 0 || (*(_DWORD *)(a1 + 1636) & 2) == 0 )
        v8 = *(_WORD *)(v7 + 200);
      v4 = RtlIntegerToUnicodeString(v8, 0xAu, &DestinationString);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v4;
        v5 = 111;
        goto LABEL_6;
      }
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1704))(
             WdfDriverGlobals,
             a2,
             &DestinationString);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v4;
        v5 = 112;
        goto LABEL_6;
      }
    }
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 107;
LABEL_6:
    v10 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v5,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      v10,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  return (unsigned int)v4;
}
