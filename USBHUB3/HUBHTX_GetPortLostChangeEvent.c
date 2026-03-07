__int64 __fastcall HUBHTX_GetPortLostChangeEvent(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *v3; // rax
  int v4; // ebx
  __int64 v5; // r14
  int v6; // esi
  int v7; // edi
  __int16 v8; // r15
  __int16 v9; // r12
  __int64 v10; // rdx
  unsigned int v11; // ebp
  char v12; // r13
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int16 v23; // [rsp+B0h] [rbp+18h]

  v3 = *(_WORD **)(a1 + 1328);
  v4 = *(unsigned __int16 *)(a1 + 184);
  v5 = a1;
  v6 = *(unsigned __int16 *)(a1 + 192);
  v7 = *(unsigned __int16 *)(a1 + 186);
  *(_WORD *)(a1 + 192) = v4;
  if ( v3 )
  {
    a3 = (unsigned __int16)v3[1000];
    v8 = v3[998];
    v9 = v3[999];
    v23 = v3[1000];
  }
  else
  {
    LOBYTE(v8) = 0;
    LOBYTE(v23) = 0;
    LOBYTE(v9) = 0;
  }
  v10 = (unsigned __int16)v4;
  LOWORD(v10) = v4 & 1;
  v11 = 3013;
  if ( (_WORD)v10 == (v6 & 1) )
  {
    if ( (v4 & 8) != 0 )
    {
      a1 = 3LL;
      if ( (((unsigned __int16)v6 | (unsigned __int16)v7) & 8) == 0 )
      {
        HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)v5, v10, a3);
        v16 = *(_QWORD *)v5;
        v11 = 3065;
        *(_DWORD *)(v5 + 1424) = 4;
        if ( (*(_DWORD *)(v16 + 2592) & 0x200) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v5 + 272);
        v12 = v23;
        if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
          McTemplateK0qhhhqhhh_EtwWriteTransfer(
            a1,
            v15,
            (const GUID *)(*(_QWORD *)v5 + 2412LL),
            *(unsigned __int16 *)(v5 + 200),
            v6,
            v4,
            v7,
            249,
            v8,
            v9,
            v23);
        v10 = v4 & 1;
        goto LABEL_8;
      }
    }
    else if ( (v6 & 8) != 0 && (v7 & 8) == 0 )
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)a1, v10, a3);
      v18 = *(_QWORD *)v5;
      v11 = 3069;
      *(_DWORD *)(v5 + 1424) = 0;
      if ( (*(_DWORD *)(v18 + 2592) & 0x200) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v5 + 272);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0qhhhqhhh_EtwWriteTransfer(
          a1,
          v17,
          (const GUID *)(*(_QWORD *)v5 + 2412LL),
          *(unsigned __int16 *)(v5 + 200),
          v6,
          v4,
          v7,
          253,
          v8,
          v9,
          v23);
      v10 = v4 & 1;
      goto LABEL_7;
    }
    if ( (v4 & 2) == 0 && (v6 & 2) != 0 && (v7 & 2) == 0 )
    {
      v11 = 3029;
      goto LABEL_7;
    }
    if ( (v4 & 4) != 0 )
      goto LABEL_7;
    v12 = v23;
    if ( (v6 & 4) != 0 && (v7 & 4) == 0 )
      v11 = 3085;
  }
  else
  {
    if ( (v7 & 1) == 0 )
    {
      v11 = 3017;
LABEL_7:
      v12 = v23;
      goto LABEL_8;
    }
    if ( *(_BYTE *)(a1 + 1457) )
      goto LABEL_7;
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)a1 + 16LL),
            0LL,
            0LL,
            3718,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    v10 = v4 & 1;
    v12 = v23;
    if ( v14 >= 0 )
      *(_BYTE *)(v5 + 1457) = 1;
  }
LABEL_8:
  *(_DWORD *)(v5 + 8) = v11;
  if ( v11 == 3017 && !(_WORD)v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = v7;
      LODWORD(v21) = v4;
      LODWORD(v20) = v6;
      LODWORD(v19) = *(unsigned __int16 *)(v5 + 200);
      WPP_RECORDER_SF_dDDD(
        *(_QWORD *)(v5 + 1432),
        v10,
        4u,
        0x55u,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v19,
        v20,
        v21,
        v22);
    }
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 2592LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", v5 + 272);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        a1,
        v10,
        (const GUID *)(*(_QWORD *)v5 + 2412LL),
        *(unsigned __int16 *)(v5 + 200),
        v6,
        v4,
        v7,
        201,
        v8,
        v9,
        v12);
  }
  return v11;
}
