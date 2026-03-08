/*
 * XREFs of HUBPDO_InvokePortPLDRRecovery @ 0x1C0081794
 * Callers:
 *     HUBPDO_HandlePLDRRecovery @ 0x1C001A06C (HUBPDO_HandlePLDRRecovery.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x1C007BFE4 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDd @ 0x1C0014BAC (WPP_RECORDER_SF_DDd.c)
 *     HUBPDO_GetPortPath @ 0x1C001A014 (HUBPDO_GetPortPath.c)
 *     DereferenceDeviceResetInterface @ 0x1C0043E24 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 *     QueryDeviceResetInterface @ 0x1C008F7E8 (QueryDeviceResetInterface.c)
 */

__int64 __fastcall HUBPDO_InvokePortPLDRRecovery(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  int DeviceResetInterface; // ebx
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned __int8 *v8; // rdx
  __int64 v9; // r8
  const GUID *v10; // r8
  int v12; // [rsp+20h] [rbp-E0h]
  ULONG v13; // [rsp+20h] [rbp-E0h]
  _WORD v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v15[2]; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v16[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[10]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v21; // [rsp+D0h] [rbp-30h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  _WORD *v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  _WORD *v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]
  _WORD *v27; // [rsp+100h] [rbp+0h]
  __int64 v28; // [rsp+108h] [rbp+8h]
  _WORD *v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+118h] [rbp+18h]
  int *v31; // [rsp+120h] [rbp+20h]
  __int64 v32; // [rsp+128h] [rbp+28h]
  _WORD v33[8]; // [rsp+130h] [rbp+30h] BYREF

  memset(v19, 0, sizeof(v19));
  v4 = *(_QWORD *)(a2 + 24);
  HUBPDO_GetPortPath(a2, v33);
  DeviceResetInterface = QueryDeviceResetInterface(a1, v19);
  if ( DeviceResetInterface >= 0 )
  {
    if ( v19[4] )
    {
      DeviceResetInterface = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v19[4])(v19[1], 1LL, 0LL);
      if ( DeviceResetInterface >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL),
            4u,
            5u,
            0xC0u,
            (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
            *(unsigned __int16 *)(v4 + 1996),
            *(unsigned __int16 *)(v4 + 1998));
        if ( (unsigned int)dword_1C006A1F8 <= 4
          || (qword_1C006A208 & 0x400000000001LL) == 0
          || (qword_1C006A210 & 0x400000000001LL) != qword_1C006A210 )
        {
          goto LABEL_29;
        }
        v22 = 8LL;
        v21 = v18;
        v8 = (unsigned __int8 *)&dword_1C006558B;
        v16[0] = *(_WORD *)(v4 + 1996);
        v23 = v16;
        v15[0] = *(_WORD *)(v4 + 1998);
        v25 = v15;
        v14[0] = 6;
        v27 = v14;
        v29 = v33;
        v13 = 7;
        v24 = 2LL;
        v26 = 2LL;
        v28 = 2LL;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDd(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL),
            *(unsigned __int16 *)(v4 + 1996),
            v9,
            0xBFu,
            v12);
        if ( (unsigned int)dword_1C006A1F8 <= 2
          || (qword_1C006A208 & 0x400000000001LL) == 0
          || (qword_1C006A210 & 0x400000000001LL) != qword_1C006A210 )
        {
          goto LABEL_29;
        }
        v24 = 2LL;
        v21 = v18;
        v8 = (unsigned __int8 *)&unk_1C00659DF;
        v16[0] = *(_WORD *)(v4 + 1996);
        v23 = v16;
        v15[0] = *(_WORD *)(v4 + 1998);
        v25 = v15;
        v14[0] = 6;
        v27 = v14;
        v29 = v33;
        v31 = &v17;
        v13 = 8;
        v22 = 8LL;
        v26 = 2LL;
        v28 = 2LL;
        v17 = DeviceResetInterface;
        v32 = 4LL;
      }
    }
    else
    {
      DeviceResetInterface = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDd(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL), *(unsigned __int16 *)(v4 + 1996), v6, 0xBEu, v12);
      if ( (unsigned int)dword_1C006A1F8 <= 2
        || (qword_1C006A208 & 0x400000000001LL) == 0
        || (qword_1C006A210 & 0x400000000001LL) != qword_1C006A210 )
      {
        goto LABEL_29;
      }
      v24 = 2LL;
      v21 = v18;
      v8 = (unsigned __int8 *)&unk_1C0065A4C;
      v16[0] = *(_WORD *)(v4 + 1996);
      v23 = v16;
      v15[0] = *(_WORD *)(v4 + 1998);
      v25 = v15;
      v14[0] = 6;
      v27 = v14;
      v29 = v33;
      v31 = &v17;
      v13 = 8;
      v22 = 8LL;
      v26 = 2LL;
      v28 = 2LL;
      v17 = -1073741637;
      v32 = 4LL;
    }
    v10 = (const GUID *)(*(_QWORD *)(v4 + 8) + 1480LL);
    v18[0] = 16779264LL;
    v30 = 12LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C006A1F8, v8, v10, 0LL, v13, &v20);
LABEL_29:
    DereferenceDeviceResetInterface(v19);
    return (unsigned int)DeviceResetInterface;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL),
      *(unsigned __int16 *)(v4 + 1998),
      *(unsigned __int16 *)(v4 + 1996),
      0xBDu,
      v12);
  if ( (unsigned int)dword_1C006A1F8 > 2
    && (qword_1C006A208 & 0x400000000001LL) != 0
    && (qword_1C006A210 & 0x400000000001LL) == qword_1C006A210 )
  {
    v24 = 2LL;
    v26 = 2LL;
    v21 = v18;
    v14[0] = *(_WORD *)(v4 + 1996);
    v23 = v14;
    v15[0] = *(_WORD *)(v4 + 1998);
    v25 = v15;
    v16[0] = 6;
    v27 = v16;
    v29 = v33;
    v28 = 2LL;
    v7 = *(_QWORD *)(v4 + 8);
    v31 = &v17;
    v22 = 8LL;
    v18[0] = 16779264LL;
    v30 = 12LL;
    v17 = DeviceResetInterface;
    v32 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C006A1F8,
      (unsigned __int8 *)dword_1C0065B35,
      (const GUID *)(v7 + 1480),
      0LL,
      8u,
      &v20);
  }
  return (unsigned int)DeviceResetInterface;
}
