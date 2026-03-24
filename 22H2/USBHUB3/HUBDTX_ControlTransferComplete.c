/*
 * XREFs of HUBDTX_ControlTransferComplete @ 0x1C0026B60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0001DEC (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002984 (WPP_RECORDER_SF_dDDD.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002FCD4 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // r15
  unsigned __int8 *v8; // r14
  char v9; // dl
  int v10; // ebp
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  __int16 v14; // dx
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int8 v16; // cl
  unsigned __int16 v17; // r9
  char v18; // al
  char v19; // al
  char v20; // al
  __int64 v21; // rax
  char v22; // dl
  char v23; // al
  __int64 v24; // rax
  int v25; // edi
  __int64 v26; // rax
  __int64 v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+30h] [rbp-68h]
  unsigned int v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+50h] [rbp-48h] BYREF
  int v33; // [rsp+58h] [rbp-40h]
  __int64 v34; // [rsp+5Ch] [rbp-3Ch]
  int v35; // [rsp+64h] [rbp-34h]

  v4 = *(_DWORD *)(a3 + 8);
  v5 = a4;
  v6 = *(_DWORD *)(a4 + 276);
  v7 = a1;
  v8 = *(unsigned __int8 **)(a4 + 2640);
  *(_DWORD *)(a4 + 256) = *(_DWORD *)(a4 + 308);
  *(_DWORD *)(a4 + 408) = 0;
  v9 = *(_BYTE *)(a4 + 400);
  if ( (((unsigned __int8)v9 | ((unsigned __int8)v9 >> 5)) & 3) == 0
    && v9 < 0
    && *(_BYTE *)(a4 + 401) == 26
    && *(_WORD *)(a4 + 402) == 1 )
  {
    *(_DWORD *)(a4 + 2708) = v4;
    *(_DWORD *)(a4 + 2712) = v6;
    *(_OWORD *)(a4 + 1732) = 0LL;
    *(_OWORD *)(a4 + 1748) = 0LL;
  }
  if ( v4 >= 0 )
  {
    v10 = 4012;
    goto LABEL_149;
  }
  v10 = 4004;
  LOBYTE(a4) = 96;
  if ( *(_BYTE *)(v5 + 401) == 9 && *(_WORD *)(v5 + 402) && (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
  {
    v11 = -1073733632;
    v12 = -1073741823;
  }
  else
  {
    v11 = v6;
    v12 = v4;
  }
  *(_DWORD *)(v5 + 1560) = v12;
  *(_DWORD *)(v5 + 1564) = v11;
  a1 = *(unsigned __int8 *)(v5 + 401);
  if ( (_BYTE)a1 != 48 )
  {
    if ( (_BYTE)a1 == 3 )
    {
      v14 = *(_WORD *)(v5 + 402);
      if ( v14 != 48 || (*(_BYTE *)(v5 + 400) & 0x60) != 0 )
      {
        if ( v14 != 49 || (*(_BYTE *)(v5 + 400) & 0x60) != 0 )
          goto LABEL_101;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0xCu,
            (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
            v4,
            v6);
        if ( (*(_DWORD *)(v5 + 2436) & 0x4000) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU2EnableFailure", v5 + 504);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
          goto LABEL_149;
        LODWORD(v30) = v4;
        v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_U2_ENABLE_FAILURE;
        LODWORD(v29) = v6;
        LODWORD(v28) = 0;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0xBu,
            (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
            v4,
            v6);
        if ( (*(_DWORD *)(v5 + 2436) & 0x2000) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU1EnableFailure", v5 + 504);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
          goto LABEL_149;
        LODWORD(v30) = v4;
        v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_U1_ENABLE_FAILURE;
        LODWORD(v29) = v6;
        LODWORD(v28) = 0;
      }
    }
    else
    {
      if ( (_BYTE)a1 != 6 || (*(_BYTE *)(v5 + 400) & 0x60) != 0 )
        goto LABEL_101;
      v16 = *(_BYTE *)(v5 + 403);
      if ( (v16 != 3 || *(_BYTE *)(v5 + 402) != 0xEE) && v16 != 6 && (*(_DWORD *)(v5 + 2436) & 1) != 0 )
      {
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", v5 + 504);
        v16 = *(_BYTE *)(v5 + 403);
      }
      a1 = (unsigned int)v16 - 1;
      if ( (_DWORD)a1 )
      {
        a1 = (unsigned int)(a1 - 1);
        if ( (_DWORD)a1 )
        {
          a1 = (unsigned int)(a1 - 1);
          if ( (_DWORD)a1 )
          {
            a1 = (unsigned int)(a1 - 3);
            if ( (_DWORD)a1 )
            {
              if ( (_DWORD)a1 != 9 )
              {
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_149;
                v17 = 22;
LABEL_109:
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                  2u,
                  5u,
                  v17,
                  (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
                  v4,
                  v6);
                goto LABEL_149;
              }
              *(_DWORD *)(v5 + 2432) = 1073807371;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                  2u,
                  5u,
                  0xFu,
                  (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
                  v4,
                  v6);
              if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
                goto LABEL_149;
              LODWORD(v30) = v4;
              v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_BOS_DESCRIPTOR_FAILURE;
              LODWORD(v29) = v6;
              LODWORD(v28) = 0;
            }
            else
            {
              *(_DWORD *)(v5 + 2432) = 1073807372;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                  2u,
                  5u,
                  0x10u,
                  (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
                  v4,
                  v6);
              if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
                goto LABEL_149;
              LODWORD(v30) = v4;
              v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_QUALIFIER_DESCRIPTOR_FAILURE;
              LODWORD(v29) = v6;
              LODWORD(v28) = 0;
            }
          }
          else
          {
            v18 = *(_BYTE *)(v5 + 2004);
            if ( v18 && v18 == *(_BYTE *)(v5 + 402) )
            {
              *(_DWORD *)(v5 + 2432) = 1073807373;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                  2u,
                  5u,
                  0x11u,
                  (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
                  v4,
                  v6);
              if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
                goto LABEL_149;
              LODWORD(v30) = v4;
              v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SERIAL_NUMBER_STRING_FAILURE;
              LODWORD(v29) = v6;
              LODWORD(v28) = 0;
            }
            else
            {
              LOBYTE(a1) = *(_BYTE *)(v5 + 402);
              if ( (_BYTE)a1 )
              {
                v19 = *(_BYTE *)(v5 + 2003);
                if ( v19 && v19 == (_BYTE)a1 )
                {
                  *(_DWORD *)(v5 + 2432) = 1073807375;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_dD(
                      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                      2u,
                      5u,
                      0x13u,
                      (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
                      v4,
                      v6);
                  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
                    goto LABEL_149;
                  LODWORD(v30) = v4;
                  v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_PRODUCT_ID_STRING_FAILURE;
                  LODWORD(v29) = v6;
                  LODWORD(v28) = 0;
                }
                else
                {
                  if ( !v8 )
                    goto LABEL_149;
                  v20 = *(_BYTE *)(*(_QWORD *)v8 + 3LL);
                  if ( v20 && v20 == (_BYTE)a1 )
                  {
                    *(_DWORD *)(v5 + 2432) = 1073807375;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_dD(
                        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                        2u,
                        5u,
                        0x14u,
                        (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
                        v4,
                        v6);
                    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) == 0 )
                      goto LABEL_149;
                    LODWORD(v30) = v4;
                    v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_BILLBOARD_STRING_FAILURE;
                    LODWORD(v29) = v6;
                    LODWORD(v28) = 0;
                  }
                  else
                  {
                    v21 = v8[8];
                    if ( (_BYTE)v21 == 0xFF )
                      goto LABEL_149;
                    v22 = *(_BYTE *)(*(_QWORD *)v8 + 4 * v21 + 47);
                    if ( !v22 || v22 != (_BYTE)a1 )
                      goto LABEL_149;
                    *(_DWORD *)(v5 + 2432) = 1073807375;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_dD(
                        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                        2u,
                        5u,
                        0x15u,
                        (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
                        v4,
                        v6);
                    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) == 0 )
                      goto LABEL_149;
                    LODWORD(v30) = v4;
                    v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_ALTERNATE_MODE_STRING_FAILURE;
                    LODWORD(v29) = v6;
                    LODWORD(v28) = 0;
                  }
                }
              }
              else
              {
                *(_DWORD *)(v5 + 2432) = 1073807374;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_dD(
                    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                    2u,
                    5u,
                    0x12u,
                    (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
                    v4,
                    v6);
                if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
                  goto LABEL_149;
                LODWORD(v30) = v4;
                v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_LANGUAGE_ID_STRING_FAILURE;
                LODWORD(v29) = v6;
                LODWORD(v28) = 0;
              }
            }
          }
        }
        else
        {
          *(_DWORD *)(v5 + 2432) = 1073807367;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
              2u,
              5u,
              0xEu,
              (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
              v4,
              v6);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
            goto LABEL_149;
          LODWORD(v30) = v4;
          v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_CONFIG_DESCRIPTOR_FAILURE;
          LODWORD(v29) = v6;
          LODWORD(v28) = 0;
        }
      }
      else
      {
        *(_DWORD *)(v5 + 2432) = 1073807360;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0xDu,
            (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
            v4,
            v6);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
          goto LABEL_149;
        LODWORD(v30) = v4;
        v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_DESCRIPTOR_FAILURE;
        LODWORD(v29) = v6;
        LODWORD(v28) = 0;
      }
    }
LABEL_147:
    McTemplateK0pqqq_EtwWriteTransfer(a1, v15, (const GUID *)(v5 + 1516), *(_QWORD *)(v5 + 24), v28, v29, v30);
    goto LABEL_149;
  }
  if ( (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
        2u,
        5u,
        0xAu,
        (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
        v4,
        v6);
    if ( (*(_DWORD *)(v5 + 2436) & 4) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetSelFailure", v5 + 504);
    *(_DWORD *)(v5 + 2432) = 1073807370;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    {
      LODWORD(v30) = v4;
      LODWORD(v29) = v6;
      LODWORD(v28) = 0;
      McTemplateK0pqqq_EtwWriteTransfer(
        a1,
        &USBHUB3_ETW_EVENT_SET_SEL_FAILURE,
        (const GUID *)(v5 + 1516),
        *(_QWORD *)(v5 + 24),
        v28,
        v29,
        v30);
    }
    v13 = 4008;
    if ( v6 != -1073741820 )
      v13 = 4004;
    v10 = v13;
    goto LABEL_149;
  }
LABEL_101:
  v23 = *(_BYTE *)(v5 + 400) & 0x60;
  if ( v23 != 64 || (_BYTE)a1 != *(_BYTE *)(v5 + 2052) )
  {
    if ( (_BYTE)a1 == 49 )
    {
      if ( !v23 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0x1Cu,
            (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
            v4,
            v6);
        if ( (*(_DWORD *)(v5 + 2436) & 8) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetIsochDelayFailure", v5 + 504);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
          goto LABEL_149;
        v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_ISOCH_DELAY_FAILURE;
        goto LABEL_146;
      }
    }
    else if ( !v23
           && ((_BYTE)a1 == 1 && *(_WORD *)(v5 + 402) == 1
            || (_BYTE)a1 == 3 && !*(_WORD *)(v5 + 402) && !*(_WORD *)(v5 + 404)) )
    {
      goto LABEL_149;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = (*(unsigned __int8 *)(v5 + 400) >> 5) & 3;
      WPP_RECORDER_SF_dDDD(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
        v31,
        5u,
        0x1Du,
        (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
        v4,
        v6,
        v31,
        a1);
    }
    if ( (*(_DWORD *)(v5 + 2436) & 1) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", v5 + 504);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      goto LABEL_149;
    v15 = &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR;
LABEL_146:
    v24 = *(_QWORD *)(v5 + 8);
    LODWORD(v30) = v4;
    LODWORD(v29) = v6;
    a1 = *(unsigned __int16 *)(v24 + 200);
    LODWORD(v28) = *(unsigned __int16 *)(v24 + 200);
    goto LABEL_147;
  }
  a1 = (unsigned int)*(unsigned __int16 *)(v5 + 404) - 4;
  if ( *(_WORD *)(v5 + 404) == 4 )
  {
    *(_DWORD *)(v5 + 2432) = 1073807376;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
        2u,
        5u,
        0x17u,
        (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
        v4,
        v6);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    {
      LODWORD(v30) = v4;
      v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MS_EXT_CONFIG_DESCRIPTOR_FAILURE;
      LODWORD(v29) = v6;
      LODWORD(v28) = 0;
      goto LABEL_147;
    }
  }
  else
  {
    a1 = (unsigned int)*(unsigned __int16 *)(v5 + 404) - 6;
    if ( *(_WORD *)(v5 + 404) == 6 )
    {
      *(_DWORD *)(v5 + 2432) = 1073807377;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0x18u,
          (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
          v4,
          v6);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      {
        LODWORD(v30) = v4;
        v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MS_CONTAINER_ID_DESCRIPTOR_FAILURE;
        LODWORD(v29) = v6;
        LODWORD(v28) = 0;
        goto LABEL_147;
      }
    }
    else
    {
      a1 = (unsigned int)*(unsigned __int16 *)(v5 + 404) - 7;
      if ( *(_WORD *)(v5 + 404) == 7 )
      {
        *(_DWORD *)(v5 + 2432) = 1073807388;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0x19u,
            (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
            v4,
            v6);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        {
          LODWORD(v30) = v4;
          v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MSOS20_DESCRIPTOR_FAILURE;
          LODWORD(v29) = v6;
          LODWORD(v28) = 0;
          goto LABEL_147;
        }
      }
      else
      {
        if ( *(_WORD *)(v5 + 404) != 8 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_149;
          v17 = 27;
          goto LABEL_109;
        }
        *(_DWORD *)(v5 + 2432) = 1073807390;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0x1Au,
            (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids,
            v4,
            v6);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
        {
          LODWORD(v30) = v4;
          v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MSOS20_SET_ALT_ENUMERATION_FAILURE;
          LODWORD(v29) = v6;
          LODWORD(v28) = 0;
          goto LABEL_147;
        }
      }
    }
  }
LABEL_149:
  if ( v4 < 0 && (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    LODWORD(v30) = v4;
    LODWORD(v29) = v6;
    LODWORD(v28) = 0;
    McTemplateK0pqqq_EtwWriteTransfer(
      a1,
      &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR,
      0LL,
      *(_QWORD *)(v5 + 24),
      v28,
      v29,
      v30);
  }
  v34 = 0LL;
  v35 = 0;
  v32 = 24LL;
  v33 = 0;
  v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          v7,
          &v32,
          a4);
  if ( v25 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C00661C0);
    LODWORD(v29) = v25;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v26 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids,
      v29);
  }
  return HUBSM_AddEvent(v5 + 504, v10);
}
