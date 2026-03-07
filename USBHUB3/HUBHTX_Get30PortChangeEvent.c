__int64 __fastcall HUBHTX_Get30PortChangeEvent(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  _WORD *v4; // rax
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  int v7; // edi
  int v8; // esi
  __int16 v9; // r15
  __int16 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  __int64 v16; // rdx
  unsigned __int16 v17; // r9
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int16 v22; // r9
  unsigned int v23; // ecx
  unsigned __int16 v25; // r9
  int v26; // eax
  unsigned __int8 v27; // dl
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-98h]
  __int64 v31; // [rsp+28h] [rbp-90h]
  __int64 v32; // [rsp+30h] [rbp-88h]
  __int64 v33; // [rsp+38h] [rbp-80h]
  __int64 v34; // [rsp+40h] [rbp-78h]
  __int16 v35; // [rsp+C0h] [rbp+8h]
  char v36; // [rsp+C8h] [rbp+10h]
  char v37; // [rsp+D0h] [rbp+18h]

  v3 = (_QWORD *)a1;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1336), 0xFFFFFF7F);
  if ( *(_BYTE *)(a1 + 1457) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)a1 + 16LL),
      0LL,
      3893LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    *((_BYTE *)v3 + 1457) = 0;
  }
  v4 = (_WORD *)v3[166];
  v5 = 3061;
  v6 = *((unsigned __int16 *)v3 + 92);
  v7 = *((unsigned __int16 *)v3 + 96);
  v8 = *((unsigned __int16 *)v3 + 97);
  *((_WORD *)v3 + 96) = v6;
  if ( v4 )
  {
    v9 = v4[998];
    v10 = v4[999];
    v35 = v4[1000];
    v37 = v9;
    v36 = v10;
  }
  else
  {
    LOBYTE(v9) = 0;
    v37 = 0;
    LOBYTE(v10) = 0;
    v36 = 0;
    LOBYTE(v35) = 0;
  }
  if ( (v6 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v3, a2, a3);
    v13 = *v3;
    *((_DWORD *)v3 + 356) = 4;
    v5 = 3065;
    if ( _bittest((const signed __int32 *)(v13 + 2592), 9u) )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v3 + 34);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        v12,
        v11,
        (const GUID *)(*v3 + 2412LL),
        *((unsigned __int16 *)v3 + 100),
        v7,
        v6,
        v8,
        249,
        v9,
        v10,
        v35);
    goto LABEL_85;
  }
  if ( (v8 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v3, a2, a3);
    v14 = *v3;
    a1 = 1LL;
    if ( (*(_DWORD *)(*v3 + 44LL) & 0x40) != 0 && (v6 & 0x200) != 0 )
    {
      *((_DWORD *)v3 + 356) = 1;
      v5 = 3017;
    }
    else if ( (v7 & 8) == 0 )
    {
      *((_DWORD *)v3 + 356) = 4;
      v5 = 3065;
    }
    if ( _bittest((const signed __int32 *)(v14 + 2592), 9u) )
    {
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v3 + 34);
      a1 = 1LL;
    }
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        1LL,
        v14,
        (const GUID *)(*v3 + 2412LL),
        *((unsigned __int16 *)v3 + 100),
        v7,
        v6,
        v8,
        v5,
        v37,
        v36,
        v35);
LABEL_121:
    if ( v5 != 3017 )
      goto LABEL_84;
    v16 = 1LL;
LABEL_77:
    if ( (v6 & 1) == 0 )
      goto LABEL_78;
LABEL_85:
    *((_DWORD *)v3 + 2) = v5;
    return v5;
  }
  if ( (v6 & 0x200) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 86;
LABEL_134:
      WPP_RECORDER_SF_(v3[179], 2u, 4u, v15, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
      goto LABEL_135;
    }
    goto LABEL_135;
  }
  if ( (v6 & 0x10) == 0 )
  {
    v16 = 1LL;
    if ( (v6 & 1) == 0 )
    {
      if ( (v6 & 0x1E0) == 0xA0 )
      {
        if ( (v7 & 0x200) != 0 && (v7 & 0x1E0) != 0xA0 )
          goto LABEL_35;
      }
      else
      {
        a1 = 224LL;
        if ( (v6 & 0x1E0) == 0xE0 && (v7 & 0x200) != 0 && (v7 & 0x1E0) != 0xE0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(v3[179], 2u, 4u, 0x59u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
          goto LABEL_35;
        }
      }
    }
    a1 = (unsigned __int16)v6;
    LOWORD(a1) = v6 & 0x1E0;
    if ( (v6 & 0x1E0) == 0x160 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_135;
      v17 = 90;
      goto LABEL_43;
    }
    switch ( (_WORD)a1 )
    {
      case 0x80:
        if ( (v7 & 0x1E0) != 0x80 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_135;
          v17 = 91;
          goto LABEL_43;
        }
LABEL_101:
        if ( (v8 & 1) == 0 && (v6 & 1) == (v7 & 1) )
        {
          if ( (v6 & 1) == 0 )
          {
            if ( (v6 & 2) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v15 = 101;
                goto LABEL_134;
              }
              goto LABEL_135;
            }
            if ( (unsigned __int16)a1 > 0x60u )
              return v5;
            if ( (*(_DWORD *)(*v3 + 40LL) & 0x100000) == 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_135;
              v17 = 103;
              goto LABEL_43;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return v5;
            v25 = 102;
            v26 = (v6 >> 5) & 0xF;
            v27 = 2;
LABEL_92:
            LODWORD(v31) = v26;
            WPP_RECORDER_SF_d(v3[179], v27, 4u, v25, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v31);
            return v5;
          }
          if ( (_WORD)a1 != 160 )
          {
            if ( (v6 & 2) == 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v15 = 105;
                goto LABEL_134;
              }
              goto LABEL_135;
            }
            if ( (unsigned __int16)a1 <= 0x60u || (_WORD)a1 == 256 )
            {
              if ( (v8 & 0x10) == 0 )
              {
                if ( (v7 & 0x1E0) == 0x60 && (_WORD)a1 != 96 )
                {
                  v5 = 3085;
                  goto LABEL_85;
                }
                return v5;
              }
              if ( (_WORD)a1 != 96 )
              {
                v5 = 3073;
                goto LABEL_85;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v15 = 107;
                goto LABEL_134;
              }
              goto LABEL_135;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_135;
            v17 = 106;
LABEL_43:
            WPP_RECORDER_SF_d(
              v3[179],
              2u,
              4u,
              v17,
              (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
              (v6 >> 5) & 0xF);
            goto LABEL_135;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(v3[179], 2u, 4u, 0x68u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
          goto LABEL_116;
        }
LABEL_76:
        v5 = 3017;
        goto LABEL_77;
      case 0x140:
        v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                *v3);
        v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(
                WdfDriverGlobals,
                v18);
        v21 = 0LL;
        if ( !v19 || *(_BYTE *)(*v3 + 240LL) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DD(
              v3[179],
              2u,
              4u,
              0x5Cu,
              (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
              (v6 >> 5) & 0xF,
              v6 & 1);
          if ( _bittest((const signed __int32 *)(*v3 + 2592LL), 8u) )
            HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateCompliance", v3 + 34);
          if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
            McTemplateK0qhhhqhhh_EtwWriteTransfer(
              v20,
              v21,
              (const GUID *)(*v3 + 2412LL),
              *((unsigned __int16 *)v3 + 100),
              v7,
              v6,
              v8,
              245,
              v37,
              v36,
              v35);
          goto LABEL_116;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_116:
          v5 = 3053;
          v28 = *((_DWORD *)v3 + 361) + 1;
          *((_DWORD *)v3 + 361) = v28;
          if ( v28 != 100 * (v28 / 0x64) )
            goto LABEL_85;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v32) = v28;
            WPP_RECORDER_SF_qd(
              v3[179],
              2u,
              4u,
              0x6Cu,
              (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
              v3,
              v32);
          }
          if ( (*(_DWORD *)(*v3 + 2592LL) & 0x800) == 0 )
            goto LABEL_85;
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateErrorResetWatchdog", v3 + 34);
          goto LABEL_121;
        }
        v22 = 93;
        v23 = v6 >> 5;
        break;
      case 0xC0:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DD(
            v3[179],
            2u,
            4u,
            0x5Eu,
            (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
            (v6 >> 5) & 0xF,
            v6 & 1);
        a1 = *(unsigned int *)(*v3 + 2592LL);
        if ( (a1 & 0x20) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateSSInactive", v3 + 34);
        if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
          McTemplateK0qhhhqhhh_EtwWriteTransfer(
            a1,
            1LL,
            (const GUID *)(*v3 + 2412LL),
            *((unsigned __int16 *)v3 + 100),
            v7,
            v6,
            v8,
            245,
            v37,
            v36,
            v35);
        if ( (v8 & 0x80u) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(v3[179], 2u, 4u, 0x5Fu, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
          v16 = 1LL;
          goto LABEL_76;
        }
        _InterlockedOr((volatile signed __int32 *)v3 + 334, 0x80u);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v31) = (v6 >> 5) & 0xF;
          WPP_RECORDER_SF_d(v3[179], 2u, 4u, 0x60u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v31);
        }
        if ( *((_DWORD *)v3 + 2) == 3053 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v5;
          v25 = 97;
          v26 = v6 & 1;
          v27 = 3;
          goto LABEL_92;
        }
        if ( (v6 & 2) != 0 )
        {
          if ( (*(_DWORD *)(*v3 + 40LL) & 0x200000) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v15 = 99;
              goto LABEL_134;
            }
            goto LABEL_135;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_116;
          WPP_RECORDER_SF_(v3[179], 2u, 4u, 0x62u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_116;
        LOBYTE(v23) = v6 >> 5;
        v22 = 100;
        break;
      default:
        goto LABEL_101;
    }
    LODWORD(v32) = v6 & 1;
    LODWORD(v31) = v23 & 0xF;
    WPP_RECORDER_SF_DD(v3[179], 2u, 4u, v22, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v31, v32);
    goto LABEL_116;
  }
  if ( (v6 & 2) != 0 )
  {
    if ( (*(_DWORD *)(*v3 + 40LL) & 0x1000000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 88;
        goto LABEL_134;
      }
LABEL_135:
      v5 = 3077;
      v29 = *(unsigned int *)(*v3 + 2592LL);
      if ( (v29 & 0x10) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", v3 + 34);
      *(_DWORD *)(*v3 + 2596LL) = 1073872896;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
      {
        LODWORD(v30) = *((unsigned __int16 *)v3 + 100);
        McTemplateK0pq_EtwWriteTransfer(
          v29,
          &USBHUB3_ETW_EVENT_HUB_RESET_DUE_TO_PORT_ERROR,
          0LL,
          *(_QWORD *)(*v3 + 248LL),
          v30);
      }
      *(_WORD *)(*v3 + 74LL) = v8;
      *(_WORD *)(*v3 + 72LL) = v6;
      goto LABEL_85;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v3[179], 2u, 4u, 0x57u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
  }
  v16 = 1LL;
  if ( (v6 & 1) != 0 )
  {
    v5 = 3081;
    goto LABEL_85;
  }
  if ( (v8 & 1) == 0 && (v7 & 1) == 0 )
    return v5;
LABEL_35:
  v5 = 3017;
LABEL_78:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v34) = v8;
    LODWORD(v33) = v6;
    LODWORD(v32) = v7;
    LODWORD(v31) = *((unsigned __int16 *)v3 + 100);
    WPP_RECORDER_SF_dDDD(
      v3[179],
      v16,
      4u,
      0x6Du,
      (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
      v31,
      v32,
      v33,
      v34);
  }
  if ( (*(_DWORD *)(*v3 + 2592LL) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", v3 + 34);
  if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
    goto LABEL_85;
  McTemplateK0qhhhqhhh_EtwWriteTransfer(a1, 1LL, 0LL, *((unsigned __int16 *)v3 + 100), v7, v6, v8, 201, v37, v36, v35);
LABEL_84:
  if ( v5 != 3061 )
    goto LABEL_85;
  return v5;
}
