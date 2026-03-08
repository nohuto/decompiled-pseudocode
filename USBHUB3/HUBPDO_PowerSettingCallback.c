/*
 * XREFs of HUBPDO_PowerSettingCallback @ 0x1C001B140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBPDO_PowerSettingCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, _DWORD *Context)
{
  _DWORD *v4; // r15
  unsigned int v7; // ebx
  int v10; // eax
  int v11; // eax
  char v12; // al
  int v13; // eax
  char v14; // cl
  char v15; // al
  int Source1; // [rsp+78h] [rbp+48h] BYREF

  v4 = Context + 555;
  v7 = 0;
  Source1 = Context[555];
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_3_LINK_POWER_MANAGEMENT_POLICY, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_ENABLE_FOR_DEVICES, 0x10uLL) == 16
      || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_ENABLE_FOR_HUBS, 0x10uLL) == 16 )
    {
      if ( ValueLength < 4 )
        goto LABEL_37;
      v14 = *Value != 0;
      v15 = Source1 & 0xFE;
    }
    else
    {
      if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_ENABLE_FOR_DEVICES, 0x10uLL) != 16
        && RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_ENABLE_FOR_HUBS, 0x10uLL) != 16 )
      {
        if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_TIMEOUT_FOR_DEVICES, 0x10uLL) == 16
          || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U1_TIMEOUT_FOR_HUBS, 0x10uLL) == 16 )
        {
          if ( ValueLength < 4 )
            goto LABEL_37;
          v13 = *Value;
          if ( *Value )
          {
            if ( v13 != 1 )
            {
              if ( v13 == 2 )
                LOBYTE(Source1) = Source1 & 0xEB;
              goto LABEL_41;
            }
            v12 = Source1 & 0xEB | 4;
LABEL_24:
            LOBYTE(Source1) = v12;
            goto LABEL_41;
          }
          LOBYTE(Source1) = Source1 | 0x14;
        }
        else if ( RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_TIMEOUT_FOR_DEVICES, 0x10uLL) == 16
               || RtlCompareMemory(SettingGuid, &GUID_POWER_USB_U2_TIMEOUT_FOR_HUBS, 0x10uLL) == 16 )
        {
          if ( ValueLength < 4 )
            goto LABEL_37;
          v11 = *Value;
          if ( !*Value )
          {
            LOBYTE(Source1) = Source1 | 0x28;
            goto LABEL_41;
          }
          if ( v11 != 1 )
          {
            if ( v11 == 2 )
              LOBYTE(Source1) = Source1 & 0xD7;
            goto LABEL_41;
          }
          v12 = Source1 & 0xD7 | 8;
          goto LABEL_24;
        }
LABEL_41:
        if ( RtlCompareMemory(&Source1, v4, 4uLL) != 4 )
        {
          *v4 = Source1;
          HUBSM_AddEvent((__int64)(Context + 126), 4055);
        }
        return v7;
      }
      if ( ValueLength < 4 )
        goto LABEL_37;
      v14 = *Value != 0 ? 2 : 0;
      v15 = Source1 & 0xFD;
    }
    LOBYTE(Source1) = v15 | v14;
    goto LABEL_41;
  }
  v10 = *Value;
  if ( (unsigned int)*Value <= 3 )
  {
    if ( v10 )
    {
      LOBYTE(Source1) = Source1 | 0x3F;
      switch ( v10 )
      {
        case 1:
          LOBYTE(Source1) = 127;
          break;
        case 2:
          LOBYTE(Source1) = 63;
          break;
        case 3:
          LOBYTE(Source1) = -65;
          break;
      }
    }
    else
    {
      Source1 = 0;
    }
    goto LABEL_41;
  }
LABEL_37:
  v7 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*((_QWORD *)Context + 1) + 1432LL),
      2u,
      2u,
      0x85u,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      -1073741811);
  return v7;
}
