__int64 __fastcall HUBFDO_IoctlGetDescriptorFromNodeConnection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v8; // r13d
  unsigned int v9; // ebx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  int v12; // r12d
  __int64 v13; // rcx
  __int64 i; // r8
  unsigned __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rsi
  _DWORD *v20; // r14
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned __int16 *v24; // rdx
  char v25; // al
  unsigned __int16 v26; // r10
  size_t v27; // r8
  _DWORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  _DWORD *v32; // rax
  __int64 v33; // rbx
  __int64 v35; // [rsp+20h] [rbp-79h]
  _DWORD *v36; // [rsp+30h] [rbp-69h] BYREF
  __int64 v37; // [rsp+38h] [rbp-61h]
  __int64 v38; // [rsp+40h] [rbp-59h]
  __int64 v39; // [rsp+48h] [rbp-51h]
  _QWORD v40[9]; // [rsp+50h] [rbp-49h] BYREF
  __int128 v41; // [rsp+98h] [rbp-1h] BYREF

  v37 = a2;
  v38 = a1;
  v36 = 0LL;
  memset(v40, 0, sizeof(v40));
  v41 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v10,
                    off_1C006A198);
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, _DWORD **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v36,
          0LL);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(v11[315], 2u, 3u, 0x3Fu, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids, v12);
    return HUBFDO_CompleteGetDescriptorRequest((__int64)v11, v8, v37, v12, v9);
  }
  v12 = HUBFDO_IoctlValidateParameters((__int64)v11, 4uLL, a4, v36, 0xDuLL, a3);
  if ( v12 >= 0 )
  {
    v8 = *(unsigned __int16 *)v36;
    if ( a3 != 12 )
      memset(v36 + 3, 0, a3 - 12);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v37);
      v13 = (int)HUBMISC_GetActivityIdIrp() >= 0;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        LOBYTE(v13) = -(char)v13;
        LODWORD(v35) = v8;
        McTemplateK0pq_EtwWriteTransfer(
          v13,
          &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_START,
          (const GUID *)((unsigned __int64)&v41 & -(__int64)((_BYTE)v13 != 0)),
          v11[31],
          v35);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v11[2]);
    for ( i = 0LL; ; i = v18 )
    {
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v11[2],
              i,
              1LL);
      v18 = v17;
      if ( !v17
        || v17 != v11[332]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v17,
                                   off_1C006A0F8)
                               + 48) == v8 )
      {
        break;
      }
    }
    if ( !v18
      || (v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v18,
                  off_1C006A0F8),
          (v19 = *(_QWORD *)(v39 + 24)) == 0)
      || (*(_DWORD *)(v19 + 1636) & 2) == 0 )
    {
      v12 = -1073741810;
      goto LABEL_48;
    }
    v20 = v36;
    v15 = *((unsigned __int8 *)v36 + 7);
    v21 = *((unsigned __int8 *)v36 + 7);
    *((_WORD *)v36 + 2) = 1664;
    v22 = v21 - 1;
    if ( !v22 )
    {
      v24 = (unsigned __int16 *)(v19 + 1988);
      v9 = a3 - 12;
      if ( (unsigned __int64)(unsigned int)a3 - 12 > 0x12 )
        v9 = 18;
      goto LABEL_46;
    }
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 == 13 )
      {
        v24 = *(unsigned __int16 **)(v19 + 2056);
        if ( v24 )
        {
LABEL_22:
          if ( v24[1] >= (unsigned __int64)(unsigned int)a3 - 12 )
            v9 = a3 - 12;
          else
            v9 = v24[1];
LABEL_46:
          v28 = v36 + 3;
          v27 = v9;
          goto LABEL_41;
        }
      }
    }
    else
    {
      v24 = *(unsigned __int16 **)(v19 + 2016);
      if ( v24 && !*((_BYTE *)v20 + 6) )
        goto LABEL_22;
    }
    if ( (_BYTE)v15 != 3 )
      goto LABEL_43;
    v25 = *((_BYTE *)v20 + 6);
    if ( !v25 || v25 != *(_BYTE *)(v19 + 2004) || *((_WORD *)v20 + 4) != 1033 )
      goto LABEL_43;
    if ( (*(_DWORD *)(v19 + 1632) & 0x40) == 0 )
    {
      v12 = -1073741823;
      goto LABEL_48;
    }
    v9 = a3 - 12;
    v26 = (*(_DWORD *)(v19 + 1636) & 0x800) != 0 ? 0xC : 0;
    v15 = (unsigned int)a3 - 12LL;
    if ( (unsigned __int16)(*(_WORD *)(v19 + 2148) - v26) < v15 )
      v9 = (unsigned __int16)(*(_WORD *)(v19 + 2148) - v26);
    if ( v9 > *((unsigned __int16 *)v20 + 5) )
    {
LABEL_43:
      v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              v38,
              off_1C006A290);
      *(_QWORD *)(v29 + 152) = *(_QWORD *)(v20 + 1);
      v30 = v29 + 24;
      *(_QWORD *)(v29 + 32) = *(_QWORD *)(*(_QWORD *)(v39 + 24) + 24LL);
      v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v19);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v31,
        "User Mode FDO Request",
        4501LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v11[2]);
      *(_DWORD *)v30 = 3276936;
      *(_DWORD *)(v30 + 36) = a3 - 12;
      *(_DWORD *)(v30 + 32) = 11;
      v32 = v36;
      *(_QWORD *)(v30 + 48) = 0LL;
      *(_QWORD *)(v30 + 40) = v32 + 3;
      *(_DWORD *)(v30 + 56) = 5000;
      v40[1] = v30;
      v33 = v37;
      LOBYTE(v40[0]) = 15;
      LODWORD(v40[3]) = 2228227;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
        WdfDriverGlobals,
        v37,
        v40);
      *(_QWORD *)(v19 + 496) = v33;
      return HUBSM_AddDsmEvent(v19, 4051LL);
    }
    v16 = v36;
    if ( (_BYTE)v9 )
      *((_BYTE *)v36 + 12) = v9;
    if ( (unsigned __int8)v9 > 1u )
      *((_BYTE *)v16 + 13) = 3;
    if ( (unsigned __int8)v9 <= 2u )
      goto LABEL_48;
    v27 = (unsigned int)(unsigned __int8)v9 - 2;
    v24 = (unsigned __int16 *)(*(_QWORD *)(v19 + 2152) + 2 * ((unsigned __int64)v26 >> 1));
    v28 = (_DWORD *)((char *)v16 + 14);
LABEL_41:
    memmove(v28, v24, v27);
LABEL_48:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, unsigned __int64, _DWORD *))(WdfFunctions_01015 + 1088))(
      WdfDriverGlobals,
      v11[2],
      v15,
      v16);
  }
  return HUBFDO_CompleteGetDescriptorRequest((__int64)v11, v8, v37, v12, v9);
}
