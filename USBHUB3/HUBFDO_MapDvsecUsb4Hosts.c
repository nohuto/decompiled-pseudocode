int __fastcall HUBFDO_MapDvsecUsb4Hosts(_QWORD *a1)
{
  __int64 v1; // rdx
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  unsigned __int16 v8; // r9
  unsigned __int8 *v9; // r12
  unsigned int v10; // r15d
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // dl
  _QWORD *i; // rax
  _QWORD *v14; // r13
  unsigned __int16 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  unsigned __int16 v20; // r9
  int v22; // [rsp+20h] [rbp-69h]
  __int64 *v23; // [rsp+28h] [rbp-61h]
  int *v24; // [rsp+30h] [rbp-59h]
  int v25; // [rsp+40h] [rbp-49h] BYREF
  int v26; // [rsp+44h] [rbp-45h] BYREF
  __int64 v27; // [rsp+48h] [rbp-41h] BYREF
  __int64 v28; // [rsp+50h] [rbp-39h] BYREF
  __int64 v29; // [rsp+58h] [rbp-31h] BYREF
  __int128 v30; // [rsp+60h] [rbp-29h] BYREF
  __int64 v31; // [rsp+70h] [rbp-19h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-11h] BYREF
  __int64 v33; // [rsp+88h] [rbp-1h] BYREF
  _OWORD v34[2]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+27h]

  v1 = a1[343];
  v33 = 0LL;
  LODWORD(v31) = 0;
  v30 = 0LL;
  v26 = 0;
  v25 = 0;
  v27 = 0LL;
  DestinationString = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(WdfDriverGlobals, v1, 0LL);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 112))(WdfDriverGlobals, a1[342]);
  LODWORD(v4) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                  WdfDriverGlobals,
                  a1[343]);
  if ( v3 )
    goto LABEL_46;
  v5 = a1[2];
  *((_QWORD *)&v30 + 1) = &DEVPKEY_PciDevice_SerialNumber;
  *(_QWORD *)&v30 = 24LL;
  v31 = 0LL;
  LODWORD(v4) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64, __int64 *, int *, int *))(WdfFunctions_01015 + 3464))(
                  WdfDriverGlobals,
                  v5,
                  &v30,
                  8LL,
                  &v33,
                  &v26,
                  &v25);
  if ( (int)v4 < 0 )
  {
    if ( (_DWORD)v4 == -1073741772 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v6 = 25;
LABEL_13:
    LODWORD(v23) = v4;
    LODWORD(v4) = WPP_RECORDER_SF_d(a1[315], 2u, 3u, v6, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids, v23);
    goto LABEL_46;
  }
  v7 = a1[2];
  *((_QWORD *)&v30 + 1) = &DEVPKEY_PciDevice_UsbDvsecPortSpecificAttributes;
  v24 = &v25;
  *(_QWORD *)&v30 = 24LL;
  v23 = &v29;
  v31 = 0LL;
  v22 = 0;
  LODWORD(v4) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64))(WdfFunctions_01015 + 3472))(
                  WdfDriverGlobals,
                  v7,
                  &v30,
                  1LL);
  if ( (_DWORD)v4 == -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v8 = 26;
    goto LABEL_9;
  }
  if ( (int)v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v6 = 27;
    goto LABEL_13;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         v29,
         &v27);
  v9 = (unsigned __int8 *)v4;
  if ( !v4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v8 = 28;
LABEL_9:
    LODWORD(v4) = WPP_RECORDER_SF_(a1[315], 2u, 3u, v8, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
    goto LABEL_46;
  }
  *(_DWORD *)&DestinationString.Length = 2621440;
  v35 = 0LL;
  v10 = 1;
  DestinationString.Buffer = (wchar_t *)v34;
  LODWORD(v4) = 2 * v27;
  memset(v34, 0, sizeof(v34));
  if ( !(2 * v27) )
    goto LABEL_46;
  while ( 1 )
  {
    v11 = *v9;
    if ( (v10 & 1) == 0 )
    {
      ++v9;
      v11 >>= 4;
    }
    v12 = v11 & 7;
    if ( v12 != 7 )
    {
      for ( i = (_QWORD *)a1[295]; ; i = (_QWORD *)*i )
      {
        v14 = i - 31;
        if ( a1 + 295 == i )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_28;
          v15 = 29;
          goto LABEL_27;
        }
        if ( *((unsigned __int16 *)v14 + 100) == v10 )
          break;
      }
      if ( *((_DWORD *)v14 + 52) != 768 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = 30;
LABEL_27:
          LODWORD(v23) = v10;
          WPP_RECORDER_SF_d(a1[315], 2u, 3u, v15, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids, v23);
          goto LABEL_28;
        }
        goto LABEL_28;
      }
      LODWORD(v4) = RtlUnicodeStringPrintf(&DestinationString, L"%I64x_%d", v33, v12);
      if ( (int)v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_46;
        v20 = 31;
        goto LABEL_45;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dS(a1[315], v16, v17, v18, v22, v10, DestinationString.Buffer);
      LODWORD(v4) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, struct _UNICODE_STRING *, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
                      WdfDriverGlobals,
                      &DestinationString,
                      0LL,
                      &v28);
      if ( (int)v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_46;
        v20 = 33;
LABEL_45:
        LODWORD(v24) = v4;
        LODWORD(v23) = v10;
        LODWORD(v4) = WPP_RECORDER_SF_DD(
                        a1[315],
                        2u,
                        3u,
                        v20,
                        (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
                        v23,
                        v24);
        goto LABEL_46;
      }
      v19 = TUNNEL_RegisterUsb4HostForPort(a1, v28, v14);
      if ( v19 < 0 )
        break;
    }
LABEL_28:
    LODWORD(v4) = ++v10;
    if ( v10 > (unsigned __int64)(2 * v27) )
      goto LABEL_46;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v19;
    LODWORD(v23) = v10;
    WPP_RECORDER_SF_DD(a1[315], 2u, 3u, 0x22u, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids, v23, v24);
  }
  LODWORD(v4) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(
                  WdfDriverGlobals,
                  v28);
LABEL_46:
  if ( v29 )
    LODWORD(v4) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v4;
}
