__int64 __fastcall HUBPDO_HandlePLDRRecovery(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r10
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // [rsp+28h] [rbp-D8h]
  int v14; // [rsp+30h] [rbp-D0h]
  _WORD v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v16[2]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 SecurityDescriptor_low; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *p_SecurityDescriptor_low; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  _WORD *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  _WORD *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  _WORD *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  _WORD *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  _WORD *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  _WORD *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  _DWORD *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  _WORD v39[8]; // [rsp+130h] [rbp+30h] BYREF

  HUBPDO_GetPortPath(a2, v39);
  SecurityDescriptor_low = LODWORD(WPP_MAIN_CB.SecurityDescriptor);
  if ( ((__int64)WPP_MAIN_CB.SecurityDescriptor & 0x10) == 0 )
  {
    LODWORD(SecurityDescriptor_low) = LODWORD(WPP_MAIN_CB.SecurityDescriptor) | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PLDRRecovery__private_descriptor,
      SecurityDescriptor_low,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      SecurityDescriptor_low,
      3,
      (__int64)&Feature_PLDRRecovery__private_descriptor);
  }
  result = HUBREG_IsPortPLDRCapable(*(_QWORD *)a3, *(unsigned __int16 *)(*(_QWORD *)(a3 + 8) + 200LL));
  if ( (_BYTE)result )
  {
    *(_BYTE *)(*(_QWORD *)(a3 + 8) + 1472LL) = 0;
    v7 = *(_QWORD *)(a3 + 8);
    result = *(unsigned __int16 *)(v7 + 1474);
    if ( (unsigned __int16)result < 2u )
    {
      if ( !(_WORD)result )
      {
        EtwActivityIdControl(3u, (LPGUID)(v7 + 1480));
        if ( (unsigned int)dword_1C006A1F8 > 4
          && (qword_1C006A208 & 0x400000000001LL) != 0
          && (qword_1C006A210 & 0x400000000001LL) == qword_1C006A210 )
        {
          v12 = *(_QWORD *)(a3 + 8);
          p_SecurityDescriptor_low = &SecurityDescriptor_low;
          LOWORD(v18[0]) = *(_WORD *)(a3 + 1996);
          SecurityDescriptor_low = 16779264LL;
          v22 = v18;
          v16[0] = *(_WORD *)(a3 + 1998);
          v21 = 8LL;
          v24 = v16;
          v26 = v15;
          v28 = v39;
          v23 = 2LL;
          v25 = 2LL;
          v15[0] = 6;
          v27 = 2LL;
          v29 = 12LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C006A1F8,
            (unsigned __int8 *)dword_1C0065CD7,
            (const GUID *)(v12 + 1480),
            0LL,
            7u,
            &v19);
        }
      }
      ++*(_WORD *)(*(_QWORD *)(a3 + 8) + 1474LL);
      return HUBPDO_InvokePortPLDRRecovery(a1, a2);
    }
    else if ( !*(_BYTE *)(v7 + 1476) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = *(unsigned __int16 *)(a3 + 1998);
        v13 = *(unsigned __int16 *)(a3 + 1996);
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(v7 + 1432),
          2u,
          5u,
          0x4Eu,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v13,
          v14);
      }
      v8 = dword_1C006A1F8;
      v9 = qword_1C006A210;
      if ( (unsigned int)dword_1C006A1F8 > 2
        && (qword_1C006A208 & 0x400000000001LL) != 0
        && (qword_1C006A210 & 0x400000000001LL) == qword_1C006A210 )
      {
        v10 = *(_QWORD *)(a3 + 8);
        v31 = &SecurityDescriptor_low;
        SecurityDescriptor_low = 16779264LL;
        v33 = v15;
        v32 = 8LL;
        v35 = v39;
        v15[0] = 6;
        v34 = 2LL;
        v36 = 12LL;
        v18[0] = *(unsigned __int16 *)(v10 + 1474);
        v37 = v18;
        v38 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C006A1F8,
          (unsigned __int8 *)dword_1C0065C0F,
          (const GUID *)(v10 + 1480),
          0LL,
          6u,
          &v30);
        v9 = qword_1C006A210;
        v8 = dword_1C006A1F8;
      }
      if ( v8 > 4 && (qword_1C006A208 & 0x400000000001LL) != 0 && (v9 & 0x400000000001LL) == v9 )
      {
        v11 = *(_QWORD *)(a3 + 8);
        p_SecurityDescriptor_low = &SecurityDescriptor_low;
        v15[0] = *(_WORD *)(a3 + 1996);
        SecurityDescriptor_low = 16779264LL;
        v22 = v15;
        v16[0] = *(_WORD *)(a3 + 1998);
        v24 = v16;
        v26 = v18;
        v28 = v39;
        v21 = 8LL;
        v23 = 2LL;
        v25 = 2LL;
        LOWORD(v18[0]) = 6;
        v27 = 2LL;
        v29 = 12LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C006A1F8,
          (unsigned __int8 *)dword_1C00654A9,
          (const GUID *)(v11 + 1480),
          0LL,
          7u,
          &v19);
      }
      *(_OWORD *)(*(_QWORD *)(a3 + 8) + 1480LL) = 0LL;
      result = *(_QWORD *)(a3 + 8);
      *(_BYTE *)(result + 1476) = 1;
    }
  }
  return result;
}
