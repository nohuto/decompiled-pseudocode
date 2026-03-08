/*
 * XREFs of HUBPDO_RegisterPortPLDRCapability @ 0x1C0080B64
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0018550 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDd @ 0x1C0014BAC (WPP_RECORDER_SF_DDd.c)
 *     HUBPDO_GetPortPath @ 0x1C001A014 (HUBPDO_GetPortPath.c)
 *     DereferenceDeviceResetInterface @ 0x1C0043E24 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 *     HUBREG_SetPortPLDRCapabilityValue @ 0x1C00894E4 (HUBREG_SetPortPLDRCapabilityValue.c)
 *     QueryDeviceResetInterface @ 0x1C008F7E8 (QueryDeviceResetInterface.c)
 */

__int64 __fastcall HUBPDO_RegisterPortPLDRCapability(_QWORD *a1)
{
  __int64 v2; // r14
  __int16 v3; // r15
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  int DeviceResetInterface; // r14d
  int v9; // [rsp+28h] [rbp-E0h]
  int v10; // [rsp+30h] [rbp-D8h]
  int v11; // [rsp+30h] [rbp-D8h]
  int v12; // [rsp+30h] [rbp-D8h]
  int v13; // [rsp+30h] [rbp-D8h]
  int v14; // [rsp+38h] [rbp-D0h]
  int v15; // [rsp+38h] [rbp-D0h]
  int v16; // [rsp+38h] [rbp-D0h]
  int v17; // [rsp+38h] [rbp-D0h]
  _WORD v18[2]; // [rsp+48h] [rbp-C0h] BYREF
  _WORD v19[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v23[10]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v25; // [rsp+D8h] [rbp-30h]
  __int64 v26; // [rsp+E0h] [rbp-28h]
  __int64 *v27; // [rsp+E8h] [rbp-20h]
  __int64 v28; // [rsp+F0h] [rbp-18h]
  _WORD *v29; // [rsp+F8h] [rbp-10h]
  __int64 v30; // [rsp+100h] [rbp-8h]
  __int64 *v31; // [rsp+108h] [rbp+0h]
  __int64 v32; // [rsp+110h] [rbp+8h]
  _WORD *v33; // [rsp+118h] [rbp+10h]
  __int64 v34; // [rsp+120h] [rbp+18h]
  __int64 *v35; // [rsp+128h] [rbp+20h]
  __int64 v36; // [rsp+130h] [rbp+28h]
  _WORD v37[8]; // [rsp+138h] [rbp+30h] BYREF

  memset(v23, 0, sizeof(v23));
  HUBPDO_GetPortPath(a1[2], v37);
  if ( (*(_DWORD *)(*a1 + 40LL) & 0x40000) != 0 && (a1[204] & 0x20) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
      WdfDriverGlobals,
      *(_QWORD *)(*a1 + 16LL));
    v2 = *a1;
    v3 = *(_WORD *)(a1[1] + 200LL);
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
           WdfDriverGlobals,
           *(_QWORD *)(*a1 + 16LL),
           0LL,
           1LL);
    v5 = 0;
    while ( 1 )
    {
      v6 = v4;
      if ( !v4
        || v4 != *(_QWORD *)(v2 + 2656)
        && *(_WORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        v4,
                        off_1C006A0F8)
                    + 48) == v3 )
      {
        break;
      }
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
             WdfDriverGlobals,
             *(_QWORD *)(v2 + 16),
             v6,
             1LL);
    }
    if ( v6 )
    {
      DeviceResetInterface = QueryDeviceResetInterface(v6, v23);
      if ( DeviceResetInterface >= 0 )
      {
        DereferenceDeviceResetInterface(v23);
        memset(v23, 0, sizeof(v23));
        if ( (unsigned int)HUBREG_SetPortPLDRCapabilityValue(*a1, *(unsigned __int16 *)(a1[1] + 200LL), 1LL) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = *((unsigned __int16 *)a1 + 999);
            v11 = *((unsigned __int16 *)a1 + 998);
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(a1[1] + 1432LL),
              2u,
              5u,
              0xB8u,
              (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
              v11,
              v15);
          }
          if ( (unsigned int)dword_1C006A1F8 > 2
            && (qword_1C006A208 & 0x400000000001LL) != 0
            && (qword_1C006A210 & 0x400000000001LL) == qword_1C006A210 )
          {
            v21 = 16779264LL;
            v25 = &v21;
            LOWORD(v20) = *((_WORD *)a1 + 998);
            v26 = 8LL;
            v27 = &v20;
            v19[0] = *((_WORD *)a1 + 999);
            v29 = v19;
            v18[0] = 6;
            v31 = (__int64 *)v18;
            v33 = v37;
            v28 = 2LL;
            v30 = 2LL;
            v32 = 2LL;
            v34 = 12LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C006A1F8,
              (unsigned __int8 *)dword_1C00653D9,
              0LL,
              0LL,
              7u,
              &v24);
          }
          v5 = -1073741762;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = *((unsigned __int16 *)a1 + 999);
            v12 = *((unsigned __int16 *)a1 + 998);
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(a1[1] + 1432LL),
              4u,
              5u,
              0xB9u,
              (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
              v12,
              v16);
          }
          if ( (unsigned int)dword_1C006A1F8 > 4
            && (qword_1C006A208 & 0x400000000001LL) != 0
            && (qword_1C006A210 & 0x400000000001LL) == qword_1C006A210 )
          {
            v21 = 16779264LL;
            v25 = &v21;
            LOWORD(v20) = *((_WORD *)a1 + 998);
            v26 = 8LL;
            v27 = &v20;
            v19[0] = *((_WORD *)a1 + 999);
            v29 = v19;
            v18[0] = 6;
            v31 = (__int64 *)v18;
            v33 = v37;
            v28 = 2LL;
            v30 = 2LL;
            v32 = 2LL;
            v34 = 12LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C006A1F8,
              (unsigned __int8 *)dword_1C0065311,
              0LL,
              0LL,
              7u,
              &v24);
          }
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDd(
            *(_QWORD *)(a1[1] + 1432LL),
            *((unsigned __int16 *)a1 + 999),
            *((unsigned __int16 *)a1 + 998),
            0xB7u,
            v9);
        if ( (unsigned int)dword_1C006A1F8 > 2
          && (qword_1C006A208 & 0x400000000001LL) != 0
          && (qword_1C006A210 & 0x400000000001LL) == qword_1C006A210 )
        {
          v21 = 16779264LL;
          v25 = &v21;
          LOWORD(v20) = *((_WORD *)a1 + 998);
          v26 = 8LL;
          v27 = &v20;
          v19[0] = *((_WORD *)a1 + 999);
          v29 = v19;
          v18[0] = 6;
          v31 = (__int64 *)v18;
          v33 = v37;
          v35 = &v22;
          v28 = 2LL;
          v30 = 2LL;
          v32 = 2LL;
          v34 = 12LL;
          LODWORD(v22) = DeviceResetInterface;
          v36 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C006A1F8,
            (unsigned __int8 *)dword_1C0065C62,
            0LL,
            0LL,
            8u,
            &v24);
        }
        v5 = -1073741808;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = *((unsigned __int16 *)a1 + 999);
        v10 = *((unsigned __int16 *)a1 + 998);
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(a1[1] + 1432LL),
          2u,
          5u,
          0xB6u,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v10,
          v14);
      }
      if ( (unsigned int)dword_1C006A1F8 > 2
        && (qword_1C006A208 & 0x400000000001LL) != 0
        && (qword_1C006A210 & 0x400000000001LL) == qword_1C006A210 )
      {
        v22 = 16779264LL;
        v25 = &v22;
        v18[0] = *((_WORD *)a1 + 998);
        v26 = 8LL;
        v27 = (__int64 *)v18;
        v19[0] = *((_WORD *)a1 + 999);
        v29 = v19;
        LOWORD(v20) = 6;
        v31 = &v20;
        v33 = v37;
        v28 = 2LL;
        v30 = 2LL;
        v32 = 2LL;
        v34 = 12LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C006A1F8,
          (unsigned __int8 *)dword_1C0065375,
          0LL,
          0LL,
          7u,
          &v24);
      }
      v5 = -1073741810;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
      WdfDriverGlobals,
      *(_QWORD *)(*a1 + 16LL));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = *((unsigned __int16 *)a1 + 999);
      v13 = *((unsigned __int16 *)a1 + 998);
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a1[1] + 1432LL),
        2u,
        5u,
        0xB5u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v13,
        v17);
    }
    if ( (unsigned int)dword_1C006A1F8 > 2
      && (qword_1C006A208 & 0x400000000001LL) != 0
      && (qword_1C006A210 & 0x400000000001LL) == qword_1C006A210 )
    {
      v21 = 16779264LL;
      v25 = &v21;
      LOWORD(v20) = *((_WORD *)a1 + 998);
      v26 = 8LL;
      v27 = &v20;
      v19[0] = *((_WORD *)a1 + 999);
      v29 = v19;
      v18[0] = 6;
      v31 = (__int64 *)v18;
      v33 = v37;
      v28 = 2LL;
      v30 = 2LL;
      v32 = 2LL;
      v34 = 12LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C006A1F8,
        (unsigned __int8 *)dword_1C006590F,
        0LL,
        0LL,
        7u,
        &v24);
    }
    return (unsigned int)-1073741808;
  }
  return v5;
}
