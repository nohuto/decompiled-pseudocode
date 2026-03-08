/*
 * XREFs of HUBDTX_ControlTransferComplete @ 0x1C0029900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C000242C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002FBC (WPP_RECORDER_SF_dDDD.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0032FCC (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  int v6; // edi
  unsigned __int8 *v8; // r14
  char v9; // dl
  int v10; // ebp
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // eax
  const EVENT_DESCRIPTOR *v15; // rdx
  char v16; // al
  bool v17; // zf
  unsigned __int16 v18; // r9
  char v19; // al
  char v20; // al
  char v21; // al
  __int64 v22; // rax
  char v23; // dl
  char v24; // al
  __int64 v25; // rax
  int v26; // edi
  __int64 v27; // rax
  __int64 v29; // [rsp+20h] [rbp-78h]
  __int64 v30; // [rsp+28h] [rbp-70h]
  __int64 v31; // [rsp+30h] [rbp-68h]
  unsigned int v32; // [rsp+38h] [rbp-60h]
  __int64 v33; // [rsp+50h] [rbp-48h] BYREF
  int v34; // [rsp+58h] [rbp-40h]
  __int64 v35; // [rsp+5Ch] [rbp-3Ch]
  int v36; // [rsp+64h] [rbp-34h]

  v4 = *(_DWORD *)(a3 + 8);
  v5 = a4;
  v6 = *(_DWORD *)(a4 + 276);
  v8 = *(unsigned __int8 **)(a4 + 2648);
  *(_DWORD *)(a4 + 256) = *(_DWORD *)(a4 + 308);
  *(_DWORD *)(a4 + 408) = 0;
  v9 = *(_BYTE *)(a4 + 400);
  if ( (((unsigned __int8)v9 | ((unsigned __int8)v9 >> 5)) & 3) == 0
    && v9 < 0
    && *(_BYTE *)(a4 + 401) == 26
    && *(_WORD *)(a4 + 402) == 1 )
  {
    *(_DWORD *)(a4 + 2716) = v4;
    *(_DWORD *)(a4 + 2720) = v6;
    *(_OWORD *)(a4 + 1732) = 0LL;
    *(_OWORD *)(a4 + 1748) = 0LL;
  }
  if ( v4 >= 0 )
  {
    v10 = 4012;
    goto LABEL_152;
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
  v13 = *(unsigned __int8 *)(v5 + 401);
  if ( (_BYTE)v13 == 48 )
  {
    if ( (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0xAu,
          (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
          v4,
          v6);
      if ( (*(_DWORD *)(v5 + 2436) & 4) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetSelFailure", v5 + 504);
      *(_DWORD *)(v5 + 2432) = 1073807370;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      {
        LODWORD(v31) = v4;
        LODWORD(v30) = v6;
        LODWORD(v29) = 0;
        McTemplateK0pqqq_EtwWriteTransfer(
          v13,
          &USBHUB3_ETW_EVENT_SET_SEL_FAILURE,
          (const GUID *)(v5 + 1516),
          *(_QWORD *)(v5 + 24),
          v29,
          v30,
          v31);
      }
      v14 = 4008;
      if ( v6 != -1073741820 )
        v14 = 4004;
      v10 = v14;
      goto LABEL_149;
    }
  }
  else if ( (_BYTE)v13 == 3 )
  {
    if ( *(_WORD *)(v5 + 402) == 48 && (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0xBu,
          (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
          v4,
          v6);
      if ( (*(_DWORD *)(v5 + 2436) & 0x2000) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU1EnableFailure", v5 + 504);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
        goto LABEL_149;
      LODWORD(v31) = v4;
      v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_U1_ENABLE_FAILURE;
      LODWORD(v30) = v6;
      LODWORD(v29) = 0;
      goto LABEL_148;
    }
    if ( *(_WORD *)(v5 + 402) == 49 && (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0xCu,
          (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
          v4,
          v6);
      if ( (*(_DWORD *)(v5 + 2436) & 0x4000) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU2EnableFailure", v5 + 504);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
        goto LABEL_149;
      LODWORD(v31) = v4;
      v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_U2_ENABLE_FAILURE;
      LODWORD(v30) = v6;
      LODWORD(v29) = 0;
      goto LABEL_148;
    }
  }
  else if ( (_BYTE)v13 == 6 && (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
  {
    v16 = *(_BYTE *)(v5 + 403);
    if ( v16 == 3 )
      v17 = *(_BYTE *)(v5 + 402) == 0xEE;
    else
      v17 = v16 == 6;
    if ( !v17 && (*(_DWORD *)(v5 + 2436) & 1) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", v5 + 504);
    v13 = (unsigned int)*(unsigned __int8 *)(v5 + 403) - 1;
    if ( *(_BYTE *)(v5 + 403) == 1 )
    {
      *(_DWORD *)(v5 + 2432) = 1073807360;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0xDu,
          (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
          v4,
          v6);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
        goto LABEL_149;
      LODWORD(v31) = v4;
      v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_DESCRIPTOR_FAILURE;
      LODWORD(v30) = v6;
      LODWORD(v29) = 0;
    }
    else
    {
      v13 = (unsigned int)*(unsigned __int8 *)(v5 + 403) - 2;
      if ( *(_BYTE *)(v5 + 403) == 2 )
      {
        *(_DWORD *)(v5 + 2432) = 1073807367;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0xEu,
            (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
            v4,
            v6);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
          goto LABEL_149;
        LODWORD(v31) = v4;
        v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_CONFIG_DESCRIPTOR_FAILURE;
        LODWORD(v30) = v6;
        LODWORD(v29) = 0;
      }
      else
      {
        v13 = (unsigned int)*(unsigned __int8 *)(v5 + 403) - 3;
        if ( *(_BYTE *)(v5 + 403) == 3 )
        {
          v19 = *(_BYTE *)(v5 + 2004);
          if ( v19 && v19 == *(_BYTE *)(v5 + 402) )
          {
            *(_DWORD *)(v5 + 2432) = 1073807373;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                2u,
                5u,
                0x11u,
                (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
                v4,
                v6);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
              goto LABEL_149;
            LODWORD(v31) = v4;
            v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SERIAL_NUMBER_STRING_FAILURE;
            LODWORD(v30) = v6;
            LODWORD(v29) = 0;
          }
          else
          {
            LOBYTE(v13) = *(_BYTE *)(v5 + 402);
            if ( (_BYTE)v13 )
            {
              v20 = *(_BYTE *)(v5 + 2003);
              if ( v20 && v20 == (_BYTE)v13 )
              {
                *(_DWORD *)(v5 + 2432) = 1073807375;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_DD(
                    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                    2u,
                    5u,
                    0x13u,
                    (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
                    v4,
                    v6);
                if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
                  goto LABEL_149;
                LODWORD(v31) = v4;
                v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_PRODUCT_ID_STRING_FAILURE;
                LODWORD(v30) = v6;
                LODWORD(v29) = 0;
              }
              else
              {
                if ( !v8 )
                  goto LABEL_149;
                v21 = *(_BYTE *)(*(_QWORD *)v8 + 3LL);
                if ( v21 && v21 == (_BYTE)v13 )
                {
                  *(_DWORD *)(v5 + 2432) = 1073807375;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_DD(
                      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                      2u,
                      5u,
                      0x14u,
                      (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
                      v4,
                      v6);
                  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) == 0 )
                    goto LABEL_149;
                  LODWORD(v31) = v4;
                  v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_BILLBOARD_STRING_FAILURE;
                  LODWORD(v30) = v6;
                  LODWORD(v29) = 0;
                }
                else
                {
                  v22 = v8[8];
                  if ( (_BYTE)v22 == 0xFF )
                    goto LABEL_149;
                  v23 = *(_BYTE *)(*(_QWORD *)v8 + 4 * v22 + 47);
                  if ( !v23 || v23 != (_BYTE)v13 )
                    goto LABEL_149;
                  *(_DWORD *)(v5 + 2432) = 1073807375;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_DD(
                      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                      2u,
                      5u,
                      0x15u,
                      (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
                      v4,
                      v6);
                  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) == 0 )
                    goto LABEL_149;
                  LODWORD(v31) = v4;
                  v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_ALTERNATE_MODE_STRING_FAILURE;
                  LODWORD(v30) = v6;
                  LODWORD(v29) = 0;
                }
              }
            }
            else
            {
              *(_DWORD *)(v5 + 2432) = 1073807374;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_DD(
                  *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                  2u,
                  5u,
                  0x12u,
                  (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
                  v4,
                  v6);
              if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
                goto LABEL_149;
              LODWORD(v31) = v4;
              v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_LANGUAGE_ID_STRING_FAILURE;
              LODWORD(v30) = v6;
              LODWORD(v29) = 0;
            }
          }
        }
        else
        {
          v13 = (unsigned int)*(unsigned __int8 *)(v5 + 403) - 6;
          if ( *(_BYTE *)(v5 + 403) == 6 )
          {
            *(_DWORD *)(v5 + 2432) = 1073807372;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                2u,
                5u,
                0x10u,
                (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
                v4,
                v6);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
              goto LABEL_149;
            LODWORD(v31) = v4;
            v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_QUALIFIER_DESCRIPTOR_FAILURE;
            LODWORD(v30) = v6;
            LODWORD(v29) = 0;
          }
          else
          {
            if ( *(_BYTE *)(v5 + 403) != 15 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_149;
              v18 = 22;
              goto LABEL_55;
            }
            *(_DWORD *)(v5 + 2432) = 1073807371;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                2u,
                5u,
                0xFu,
                (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
                v4,
                v6);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
              goto LABEL_149;
            LODWORD(v31) = v4;
            v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_BOS_DESCRIPTOR_FAILURE;
            LODWORD(v30) = v6;
            LODWORD(v29) = 0;
          }
        }
      }
    }
    goto LABEL_148;
  }
  v24 = *(_BYTE *)(v5 + 400) & 0x60;
  if ( v24 == 64 && (_BYTE)v13 == *(_BYTE *)(v5 + 2052) )
  {
    v13 = (unsigned int)*(unsigned __int16 *)(v5 + 404) - 4;
    if ( *(_WORD *)(v5 + 404) == 4 )
    {
      *(_DWORD *)(v5 + 2432) = 1073807376;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0x17u,
          (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
          v4,
          v6);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
        goto LABEL_149;
      LODWORD(v31) = v4;
      v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MS_EXT_CONFIG_DESCRIPTOR_FAILURE;
      LODWORD(v30) = v6;
      LODWORD(v29) = 0;
    }
    else
    {
      v13 = (unsigned int)*(unsigned __int16 *)(v5 + 404) - 6;
      if ( *(_WORD *)(v5 + 404) == 6 )
      {
        *(_DWORD *)(v5 + 2432) = 1073807377;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0x18u,
            (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
            v4,
            v6);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
          goto LABEL_149;
        LODWORD(v31) = v4;
        v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MS_CONTAINER_ID_DESCRIPTOR_FAILURE;
        LODWORD(v30) = v6;
        LODWORD(v29) = 0;
      }
      else
      {
        v13 = (unsigned int)*(unsigned __int16 *)(v5 + 404) - 7;
        if ( *(_WORD *)(v5 + 404) == 7 )
        {
          *(_DWORD *)(v5 + 2432) = 1073807388;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
              2u,
              5u,
              0x19u,
              (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
              v4,
              v6);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
            goto LABEL_149;
          LODWORD(v31) = v4;
          v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MSOS20_DESCRIPTOR_FAILURE;
          LODWORD(v30) = v6;
          LODWORD(v29) = 0;
        }
        else
        {
          if ( *(_WORD *)(v5 + 404) != 8 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v18 = 27;
LABEL_55:
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                2u,
                5u,
                v18,
                (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
                v4,
                v6);
            }
LABEL_149:
            if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
            {
              LODWORD(v31) = v4;
              LODWORD(v30) = v6;
              LODWORD(v29) = 0;
              McTemplateK0pqqq_EtwWriteTransfer(
                v13,
                &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR,
                0LL,
                *(_QWORD *)(v5 + 24),
                v29,
                v30,
                v31);
            }
            goto LABEL_152;
          }
          *(_DWORD *)(v5 + 2432) = 1073807390;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
              2u,
              5u,
              0x1Au,
              (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
              v4,
              v6);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) == 0 )
            goto LABEL_149;
          LODWORD(v31) = v4;
          v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_MSOS20_SET_ALT_ENUMERATION_FAILURE;
          LODWORD(v30) = v6;
          LODWORD(v29) = 0;
        }
      }
    }
LABEL_148:
    McTemplateK0pqqq_EtwWriteTransfer(v13, v15, (const GUID *)(v5 + 1516), *(_QWORD *)(v5 + 24), v29, v30, v31);
    goto LABEL_149;
  }
  if ( (_BYTE)v13 == 49 )
  {
    if ( !v24 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0x1Cu,
          (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
          v4,
          v6);
      if ( (*(_DWORD *)(v5 + 2436) & 8) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetIsochDelayFailure", v5 + 504);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
        goto LABEL_149;
      v15 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_ISOCH_DELAY_FAILURE;
      goto LABEL_147;
    }
  }
  else if ( !v24
         && ((_BYTE)v13 == 1 && *(_WORD *)(v5 + 402) == 1
          || (_BYTE)v13 == 3 && !*(_WORD *)(v5 + 402) && !*(_WORD *)(v5 + 404)) )
  {
    goto LABEL_149;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = (*(unsigned __int8 *)(v5 + 400) >> 5) & 3;
    WPP_RECORDER_SF_dDDD(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
      v32,
      5u,
      0x1Du,
      (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
      v4,
      v6,
      v32,
      v13);
  }
  if ( (*(_DWORD *)(v5 + 2436) & 1) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", v5 + 504);
  if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v15 = &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR;
LABEL_147:
    v25 = *(_QWORD *)(v5 + 8);
    LODWORD(v31) = v4;
    LODWORD(v30) = v6;
    v13 = *(unsigned __int16 *)(v25 + 200);
    LODWORD(v29) = *(unsigned __int16 *)(v25 + 200);
    goto LABEL_148;
  }
LABEL_152:
  v35 = 0LL;
  v36 = 0;
  v33 = 24LL;
  v34 = 0;
  v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          a1,
          &v33,
          a4);
  if ( v26 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C006A1E8);
    LODWORD(v30) = v26;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v27 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      v30);
  }
  return HUBSM_AddEvent(v5 + 504, v10);
}
