__int64 __fastcall xxxSystemParametersInfo(unsigned int a1, unsigned int a2, void *a3, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // r9
  unsigned __int8 v11; // r12
  bool v12; // r15
  PDEVICE_OBJECT v13; // rcx
  __int64 v15; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // rcx
  int v22; // r12d
  int v23; // [rsp+40h] [rbp-39h] BYREF
  void *v24; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-29h] BYREF
  int *v26; // [rsp+70h] [rbp-9h]
  __int64 v27; // [rsp+78h] [rbp-1h]

  v24 = a3;
  if ( !(unsigned __int8)PsIsWin32KFilterEnabled() || (unsigned int)IsSPIActionAllowedForFilteredProcess(a1) )
  {
    v9 = 0;
    v23 = 0;
    if ( (a4 & 1) != 0 )
    {
      v11 = 1;
      v10 = 0LL;
      v12 = 0;
    }
    else
    {
      v10 = 1LL;
      v11 = 0;
      v12 = 1;
    }
    if ( a1 < 0x68 && a1 >= 0x3E || a1 < 0xAE && a1 >= 0x94 )
    {
LABEL_6:
      v13 = WPP_GLOBAL_Control;
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType);
      if ( (_BYTE)v7 || (_BYTE)v8 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          10,
          426,
          (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
      if ( qword_1C02D6E60
        && (int)qword_1C02D6E60(v13, v7, v8, &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids) >= 0
        && qword_1C02D6E68 )
      {
        v9 = qword_1C02D6E68(a1, a2, v24, a4);
      }
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType);
      if ( (_BYTE)v7 || (_BYTE)v8 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          10,
          427,
          (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
      return v9;
    }
    else
    {
      if ( a1 > 0x201E )
      {
        v21 = 0x1C0000000uLL;
        switch ( a1 )
        {
          case 0x201Fu:
          case 0x2021u:
          case 0x2027u:
          case 0x2031u:
          case 0x2033u:
            if ( v11 )
            {
              v12 = (unsigned int)FastWriteProfileValue(0LL, &v24, 4u) != 0;
              v9 = v12;
            }
            if ( v12 )
            {
              v22 = (int)v24;
              gpviCPUserPreferences[4 * ((a1 - 0x2000) >> 1) + 4] = (_DWORD)v24;
              if ( a1 == 8225 )
                *(_DWORD *)(SGDGetUserSessionState(v21, v7, v8, v10) + 524) = v22;
LABEL_42:
              BroadcastSettingsUpdateToAllContainers();
            }
            goto LABEL_43;
          case 0x2020u:
          case 0x2026u:
          case 0x2030u:
          case 0x2032u:
            goto LABEL_80;
          default:
            goto LABEL_6;
        }
      }
      if ( a1 == 8222 )
      {
LABEL_80:
        *(_DWORD *)v24 = gpviCPUserPreferences[4 * ((a1 - 0x2000) >> 1) + 4];
      }
      else
      {
        switch ( a1 )
        {
          case 0x32u:
            if ( a2 && a2 != 24 || !v24 || *(_DWORD *)v24 != 24 )
              return 0LL;
            memmove((char *)v24 + 4, &dword_1C02D159C, 0x14uLL);
            return 1LL;
          case 0x33u:
            v17 = SpiSetFilterKeys(a2, v24, v11, v10, &v23);
            v9 = v23;
            v12 = v17 != 0;
            break;
          case 0x34u:
            if ( (a2 & 0xFFFFFFF7) != 0 || !v24 || *(_DWORD *)v24 != 8 )
              return 0LL;
            memmove((char *)v24 + 4, &dword_1C02D155C, 4uLL);
            return 1;
          case 0x35u:
            v19 = SpiSetToggleKeys(a2, v24, v11, v10, &v23);
            v9 = v23;
            v12 = v19 != 0;
            break;
          case 0x3Au:
            return (unsigned int)SpiGetStickyKeys(a2, v24) != 0;
          case 0x3Bu:
            v18 = SpiSetStickyKeys(a2, v24, v11, v10, &v23);
            v9 = v23;
            v12 = v18 != 0;
            break;
          case 0x3Cu:
            if ( a2 && a2 != 12 || !v24 || *(_DWORD *)v24 != 12 )
              return 0LL;
            memmove((char *)v24 + 4, &dword_1C02D1564, 8uLL);
            return 1;
          case 0x3Du:
            v20 = SpiSetAccessTimeOut(a2, v24, v11, v10, &v23);
            v9 = v23;
            v12 = v20 != 0;
            break;
          case 0x68u:
            *(_DWORD *)v24 = *((_DWORD *)gpsi + 1247);
            return v12;
          case 0x69u:
            if ( (unsigned int)ApiSetEditionCheckDesktopPolicy() )
              return 0;
            if ( v11 )
            {
              RtlStringCchPrintfW((unsigned __int16 *)&v25, 0x10uLL, L"%d", a2);
              v15 = -1LL;
              while ( *((_WORD *)&v25.Ptr + ++v15) != 0 )
                ;
              v12 = (unsigned int)FastWriteProfileValue(0LL, &v25, 2 * (int)v15 + 2) != 0;
              v9 = v12;
            }
            if ( !v12 )
              break;
            *((_DWORD *)gpsi + 1247) = a2;
            goto LABEL_42;
          case 0x92u:
            return (unsigned int)ReadPointerDeviceSettings(a1, v24) != 0;
          case 0x93u:
            v12 = (unsigned int)WritePointerDeviceSettings(a1, v24, v11) != 0;
            v9 = v12;
            break;
          case 0xAEu:
            return (unsigned int)GetPrecisionTouchPadConfiguration((__int64)v24) != 0;
          case 0xAFu:
            v9 = SetPrecisionTouchPadConfiguration(v24);
            if ( !v9 )
              return 0;
            v12 = 1;
            PTPTelemetry::PTPConfigUpdateEx(0LL);
            break;
          case 0xB0u:
            *(_DWORD *)v24 = CInputGlobals::GetWakeOnDeviceTypes(gpInputGlobals);
            return v12;
          case 0xB1u:
            return CInputGlobals::SetWakeableInputTypesToRegistry((CInputGlobals *)0x1C0000000LL, a2, (unsigned int)v24);
          default:
            goto LABEL_6;
        }
LABEL_43:
        if ( v9 && (a4 & 2) != 0 )
          ApiSetEditionxxxBroadcastSPIChange(a1);
      }
      return v12;
    }
  }
  else
  {
    EtwTraceSPIBlockedByFiltering(a1);
    if ( (unsigned int)dword_1C02C9368 > 5 && tlgKeywordOn((__int64)&dword_1C02C9368, 0x400000000000LL) )
    {
      v23 = a1;
      v26 = &v23;
      v27 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02C9368,
        (unsigned __int8 *)dword_1C0294EE5,
        0LL,
        0LL,
        3u,
        &v25);
    }
    return 0LL;
  }
}
