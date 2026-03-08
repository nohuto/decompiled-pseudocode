/*
 * XREFs of FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C008CAD8
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0078890 (HUBFDO_EvtDevicePrepareHardware.c)
 *     FWUPDATE_EvtDeviceReportedMissing @ 0x1C008C600 (FWUPDATE_EvtDeviceReportedMissing.c)
 * Callees:
 *     McTemplateK0ppuq_EtwWriteTransfer @ 0x1C0001C10 (McTemplateK0ppuq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     RtlUnicodeStringPrintf @ 0x1C000C4DC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 *     FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x1C008C704 (FWUPDATE_AddIdsForFirmwareUpdateDevice.c)
 */

__int64 __fastcall FWUPDATE_CreateFirmwareUpdateDevice(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rcx
  char v4; // si
  char v5; // r15
  int updated; // ebx
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int16 v9; // r9
  unsigned int v10; // r8d
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rax
  __m128i si128; // xmm0
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rcx
  BOOL v18; // eax
  __int64 v19; // rdx
  __int64 v21; // [rsp+30h] [rbp-D8h]
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+78h] [rbp-90h] BYREF
  __int128 v28; // [rsp+80h] [rbp-88h] BYREF
  __int128 v29; // [rsp+90h] [rbp-78h]
  __int128 v30; // [rsp+A0h] [rbp-68h]
  void *v31; // [rsp+B0h] [rbp-58h]
  _OWORD v32[4]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v33[12]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v34[18]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v35; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v36; // [rsp+1F8h] [rbp+F0h]
  __int128 v37; // [rsp+208h] [rbp+100h]
  _QWORD v38[10]; // [rsp+218h] [rbp+110h] BYREF
  char v39; // [rsp+268h] [rbp+160h] BYREF

  LODWORD(v31) = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  memset(v33, 0, sizeof(v33));
  v27 = 0LL;
  v2 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  memset(v38, 0, sizeof(v38));
  v25 = 0LL;
  LOBYTE(v22) = 0;
  memset(v32, 0, 60);
  memset(v34, 0, 0x8CuLL);
  v3 = *(unsigned int *)(a1 + 160);
  v24 = 0LL;
  v4 = 0;
  v23 = 0LL;
  v5 = 0;
  if ( (_DWORD)v3 == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1680))(WdfDriverGlobals, v7);
    if ( v23 )
    {
      LOBYTE(v22) = 8;
      LOBYTE(v8) = 27;
      v5 = 1;
      updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, NTSTATUS (__fastcall *)(__int64, IRP *), __int64, __int64 *, int))(WdfFunctions_01015 + 584))(
                  WdfDriverGlobals,
                  v23,
                  FWUPDATE_EvtDeviceWdmIrpQueryInterfacePreprocess,
                  v8,
                  &v22,
                  1);
      if ( updated >= 0 )
      {
        memset(v34, 0, sizeof(v34));
        v34[1] = FWUPDATE_EvtDeviceD0Entry;
        v34[3] = FWUPDATE_EvtDeviceD0Exit;
        LODWORD(v34[0]) = 144;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
          WdfDriverGlobals,
          v23,
          v34);
        memset(v32, 0, sizeof(v32));
        *((_QWORD *)&v32[3] + 1) = FWUPDATE_EvtDeviceReportedMissing;
        *(_QWORD *)&v32[1] = FWUPDATE_EvtDeviceResourceRequirementsQuery;
        LODWORD(v32[0]) = 64;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 1688))(
          WdfDriverGlobals,
          v23,
          v32);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 528))(
          WdfDriverGlobals,
          v23,
          34LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 496))(
          WdfDriverGlobals,
          v23,
          0LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3136))(WdfDriverGlobals, v23);
        v25 = 0x100000008LL;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 3224))(
          WdfDriverGlobals,
          v23,
          &v25);
        updated = FWUPDATE_AddIdsForFirmwareUpdateDevice(a1, v23);
        if ( updated < 0 )
          goto LABEL_40;
        v31 = off_1C006A170;
        *((_QWORD *)&v28 + 1) = FWUPDATE_EvtDeviceCleanup;
        *(_QWORD *)&v28 = 56LL;
        *(_QWORD *)&v29 = 0LL;
        v30 = 0LL;
        *((_QWORD *)&v29 + 1) = 0x100000001LL;
        while ( 1 )
        {
          v11 = v23;
          DestinationString.Buffer = (wchar_t *)&v39;
          *(_QWORD *)&DestinationString.Length = 12582912LL;
          updated = RtlUnicodeStringPrintf(&DestinationString, L"\\Device\\USBFWU-%d", v2);
          if ( updated >= 0 )
            updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 536))(
                        WdfDriverGlobals,
                        v11,
                        &DestinationString);
          if ( updated < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_40;
            v9 = 38;
            goto LABEL_38;
          }
          updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
                      WdfDriverGlobals,
                      v23,
                      &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
          if ( updated < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_40;
            v9 = 39;
            goto LABEL_12;
          }
          v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, __int128 *, __int64 *))(WdfFunctions_01015
                                                                                                 + 600))(
                  WdfDriverGlobals,
                  &v23,
                  &v28,
                  &v24);
          updated = v12;
          if ( v12 >= 0 )
            break;
          ++v2;
          if ( v12 != -1073741771 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_40;
            v9 = 40;
LABEL_38:
            v10 = 2;
            goto LABEL_39;
          }
        }
        v4 = 1;
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v24,
                off_1C006A170);
        v5 = 0;
        *(_QWORD *)v13 = a1;
        *(_DWORD *)(v13 + 28) = 5;
        memset(v33, 0, sizeof(v33));
        v33[6] = FWUPDATE_EvtIoInternalDeviceControl;
        LODWORD(v33[0]) = 96;
        v33[5] = FWUPDATE_EvtIoDeviceControl;
        BYTE5(v33[1]) = 1;
        *(_QWORD *)((char *)v33 + 4) = 1LL;
        updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1216))(
                    WdfDriverGlobals,
                    v24,
                    v33,
                    0LL,
                    &v27);
        if ( updated >= 0 )
        {
          HIDWORD(v37) = -1;
          *(_QWORD *)&v35 = 0x200000030LL;
          *((_QWORD *)&v35 + 1) = 2LL;
          *(_QWORD *)&v36 = 2LL;
          *((_QWORD *)&v36 + 1) = 2LL;
          LODWORD(v37) = 2;
          *(_QWORD *)((char *)&v37 + 4) = 2LL;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 664))(
            WdfDriverGlobals,
            v24,
            &v35);
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v15 = 2;
          v16 = *(_DWORD *)(a1 + 740);
          v17 = 2LL;
          *(__m128i *)((char *)&v38[3] + 4) = si128;
          LODWORD(v38[4]) = 1;
          v38[0] = 80LL;
          *(_QWORD *)((char *)&v38[5] + 4) = si128.m128i_i64[0];
          HIDWORD(v38[6]) = _mm_cvtsi128_si32(si128);
          HIDWORD(v38[7]) = v16;
          LODWORD(v38[7]) = 1;
          *(_QWORD *)((char *)&v38[1] + 4) = 1LL;
          *(_QWORD *)((char *)&v38[2] + 4) = 0LL;
          v38[8] = 0LL;
          v38[9] = 0x500000000LL;
          LODWORD(v38[1]) = 0;
          while ( 1 )
          {
            v18 = v15++ > v16;
            *((_DWORD *)&v38[3] + ++v17) = v18 + 3;
            if ( v17 > 6 )
              break;
            v16 = HIDWORD(v38[7]);
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 672))(
            WdfDriverGlobals,
            v24,
            v38);
          v19 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 2656) = v24;
          updated = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1064))(
                      WdfDriverGlobals,
                      v19);
          if ( updated >= 0 )
          {
            v4 = 0;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v21) = updated;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a1 + 2520),
                2u,
                3u,
                0x2Au,
                (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
                v21);
            }
            *(_QWORD *)(a1 + 2656) = 0LL;
          }
          goto LABEL_40;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_40;
        v9 = 41;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_40;
        v9 = 37;
      }
LABEL_12:
      v10 = 3;
LABEL_39:
      LODWORD(v21) = updated;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        v10,
        v9,
        (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
        v21);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 2520),
          2u,
          3u,
          0x24u,
          (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
      updated = -1073741670;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x23u,
        (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
        v3);
    updated = -1073741823;
  }
LABEL_40:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
  {
    LOBYTE(v21) = *(_BYTE *)(a1 + 160);
    McTemplateK0ppuq_EtwWriteTransfer(
      v3,
      &USBHUB3_ETW_EVENT_FIRMWARE_UPDATE_ENUMERATION_COMPLETE,
      (const GUID *)(a1 + 2276),
      *(_QWORD *)(a1 + 248),
      *(_QWORD *)(a1 + 2656),
      v21,
      updated);
  }
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 432))(WdfDriverGlobals, v23);
  if ( v4 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v24);
  return (unsigned int)updated;
}
