/*
 * XREFs of FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x1C008C704
 * Callers:
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C008CAD8 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000C4DC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FWUPDATE_AddIdsForFirmwareUpdateDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  int v10; // [rsp+20h] [rbp-E0h]
  __int64 v11; // [rsp+20h] [rbp-E0h]
  __int64 v12; // [rsp+28h] [rbp-D8h]
  int v13; // [rsp+28h] [rbp-D8h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+40h] [rbp-C0h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 2722);
  v3 = *(unsigned __int16 *)(a1 + 2720);
  DestinationString.Buffer = (wchar_t *)&v15;
  *(_QWORD *)&DestinationString.Length = 11796480LL;
  v6 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X&GFU", v3, v2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1696))(
           WdfDriverGlobals,
           a2,
           &DestinationString);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v13 = *(unsigned __int16 *)(a1 + 2726);
      v10 = *(unsigned __int16 *)(a1 + 2724);
      v6 = RtlUnicodeStringPrintf(
             &DestinationString,
             L"USB\\VID_%04X&PID_%04X&BCD_%04X&REV_%04X&GFU",
             *(unsigned __int16 *)(a1 + 2720),
             *(unsigned __int16 *)(a1 + 2722),
             v10,
             v13);
      v7 = v6;
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015
                                                                                               + 1712))(
               WdfDriverGlobals,
               a2,
               &DestinationString);
        v7 = v6;
        if ( v6 >= 0 )
        {
          LODWORD(v11) = *(unsigned __int16 *)(a1 + 2724);
          v6 = RtlUnicodeStringPrintf(
                 &DestinationString,
                 L"USB\\VID_%04X&PID_%04X&BCD_%04X&GFU",
                 *(unsigned __int16 *)(a1 + 2720),
                 *(unsigned __int16 *)(a1 + 2722),
                 v11);
          v7 = v6;
          if ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1712))(
                   WdfDriverGlobals,
                   a2,
                   &DestinationString);
            v7 = v6;
            if ( v6 >= 0 )
            {
              v6 = RtlUnicodeStringPrintf(
                     &DestinationString,
                     L"USB\\VID_%04X&PID_%04X&GFU",
                     *(unsigned __int16 *)(a1 + 2720),
                     *(unsigned __int16 *)(a1 + 2722));
              v7 = v6;
              if ( v6 >= 0 )
              {
                v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1712))(
                       WdfDriverGlobals,
                       a2,
                       &DestinationString);
                v7 = v6;
                if ( v6 >= 0 )
                {
                  v6 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_WINUSB&MS_SUBCOMP_GFU");
                  v7 = v6;
                  if ( v6 >= 0 )
                  {
                    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1720))(
                           WdfDriverGlobals,
                           a2,
                           &DestinationString);
                    v7 = v6;
                    if ( v6 >= 0 )
                    {
                      v6 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_WINUSB");
                      v7 = v6;
                      if ( v6 >= 0 )
                      {
                        v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1720))(
                               WdfDriverGlobals,
                               a2,
                               &DestinationString);
                        v7 = v6;
                        if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          v8 = 22;
                          goto LABEL_37;
                        }
                      }
                      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        v8 = 21;
                        goto LABEL_37;
                      }
                    }
                    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v8 = 20;
                      goto LABEL_37;
                    }
                  }
                  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v8 = 19;
                    goto LABEL_37;
                  }
                }
                else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v8 = 18;
                  goto LABEL_37;
                }
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v8 = 17;
                goto LABEL_37;
              }
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v8 = 16;
              goto LABEL_37;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v8 = 15;
            goto LABEL_37;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = 14;
          goto LABEL_37;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 13;
        goto LABEL_37;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 12;
      goto LABEL_37;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 11;
LABEL_37:
    LODWORD(v12) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v8,
      (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
      v12);
  }
  return v7;
}
