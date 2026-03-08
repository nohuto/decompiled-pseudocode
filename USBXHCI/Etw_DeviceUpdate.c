/*
 * XREFs of Etw_DeviceUpdate @ 0x1C001D724
 * Callers:
 *     UsbDevice_UcxEvtHubInfo @ 0x1C001D220 (UsbDevice_UcxEvtHubInfo.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001D43C (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     XilUsbDevice_QueryAttributes @ 0x1C00481C4 (XilUsbDevice_QueryAttributes.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x1C004B0B8 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x1C004BCA0 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1C004BCD4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004BD00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall Etw_DeviceUpdate(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int8 v4; // si
  __int64 v5; // rdx
  int v6; // r9d
  char v7; // [rsp+E8h] [rbp-80h] BYREF
  char v8; // [rsp+E9h] [rbp-7Fh] BYREF
  unsigned __int8 v9; // [rsp+EAh] [rbp-7Eh] BYREF
  char v10; // [rsp+EBh] [rbp-7Dh] BYREF
  char v11; // [rsp+ECh] [rbp-7Ch] BYREF
  char v12; // [rsp+EDh] [rbp-7Bh] BYREF
  char v13; // [rsp+EEh] [rbp-7Ah] BYREF
  char v14; // [rsp+EFh] [rbp-79h] BYREF
  char v15; // [rsp+F0h] [rbp-78h] BYREF
  char v16; // [rsp+F1h] [rbp-77h] BYREF
  char v17; // [rsp+F2h] [rbp-76h] BYREF
  char v18; // [rsp+F3h] [rbp-75h] BYREF
  char v19; // [rsp+F4h] [rbp-74h] BYREF
  char v20; // [rsp+F5h] [rbp-73h] BYREF
  char v21; // [rsp+F6h] [rbp-72h] BYREF
  char v22; // [rsp+F7h] [rbp-71h] BYREF
  char v23; // [rsp+F8h] [rbp-70h] BYREF
  char v24; // [rsp+F9h] [rbp-6Fh] BYREF
  __int16 v25; // [rsp+FCh] [rbp-6Ch] BYREF
  __int16 v26; // [rsp+100h] [rbp-68h] BYREF
  __int16 v27; // [rsp+104h] [rbp-64h] BYREF
  __int16 v28; // [rsp+108h] [rbp-60h] BYREF
  __int16 v29; // [rsp+10Ch] [rbp-5Ch] BYREF
  __int16 v30; // [rsp+110h] [rbp-58h] BYREF
  __int16 v31; // [rsp+114h] [rbp-54h] BYREF
  __int16 v32; // [rsp+118h] [rbp-50h] BYREF
  int v33; // [rsp+11Ch] [rbp-4Ch] BYREF
  int v34; // [rsp+120h] [rbp-48h] BYREF
  int v35; // [rsp+124h] [rbp-44h] BYREF
  int v36; // [rsp+128h] [rbp-40h] BYREF
  int v37; // [rsp+12Ch] [rbp-3Ch] BYREF
  __int64 v38; // [rsp+130h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+138h] [rbp-30h] BYREF
  __int64 *v40; // [rsp+158h] [rbp-10h]
  __int64 v41; // [rsp+160h] [rbp-8h]
  int *v42; // [rsp+168h] [rbp+0h]
  __int64 v43; // [rsp+170h] [rbp+8h]
  int *v44; // [rsp+178h] [rbp+10h]
  __int64 v45; // [rsp+180h] [rbp+18h]
  __int64 v46; // [rsp+188h] [rbp+20h]
  __int64 v47; // [rsp+190h] [rbp+28h]
  char *v48; // [rsp+198h] [rbp+30h]
  __int64 v49; // [rsp+1A0h] [rbp+38h]
  char *v50; // [rsp+1A8h] [rbp+40h]
  __int64 v51; // [rsp+1B0h] [rbp+48h]
  __int16 *v52; // [rsp+1B8h] [rbp+50h]
  __int64 v53; // [rsp+1C0h] [rbp+58h]
  char *v54; // [rsp+1C8h] [rbp+60h]
  __int64 v55; // [rsp+1D0h] [rbp+68h]
  char *v56; // [rsp+1D8h] [rbp+70h]
  __int64 v57; // [rsp+1E0h] [rbp+78h]
  char *v58; // [rsp+1E8h] [rbp+80h]
  __int64 v59; // [rsp+1F0h] [rbp+88h]
  char *v60; // [rsp+1F8h] [rbp+90h]
  __int64 v61; // [rsp+200h] [rbp+98h]
  __int16 *v62; // [rsp+208h] [rbp+A0h]
  __int64 v63; // [rsp+210h] [rbp+A8h]
  __int16 *v64; // [rsp+218h] [rbp+B0h]
  __int64 v65; // [rsp+220h] [rbp+B8h]
  __int16 *v66; // [rsp+228h] [rbp+C0h]
  __int64 v67; // [rsp+230h] [rbp+C8h]
  char *v68; // [rsp+238h] [rbp+D0h]
  __int64 v69; // [rsp+240h] [rbp+D8h]
  char *v70; // [rsp+248h] [rbp+E0h]
  __int64 v71; // [rsp+250h] [rbp+E8h]
  char *v72; // [rsp+258h] [rbp+F0h]
  __int64 v73; // [rsp+260h] [rbp+F8h]
  char *v74; // [rsp+268h] [rbp+100h]
  __int64 v75; // [rsp+270h] [rbp+108h]
  char *v76; // [rsp+278h] [rbp+110h]
  __int64 v77; // [rsp+280h] [rbp+118h]
  char *v78; // [rsp+288h] [rbp+120h]
  __int64 v79; // [rsp+290h] [rbp+128h]
  char *v80; // [rsp+298h] [rbp+130h]
  __int64 v81; // [rsp+2A0h] [rbp+138h]
  int *v82; // [rsp+2A8h] [rbp+140h]
  __int64 v83; // [rsp+2B0h] [rbp+148h]
  char *v84; // [rsp+2B8h] [rbp+150h]
  __int64 v85; // [rsp+2C0h] [rbp+158h]
  char *v86; // [rsp+2C8h] [rbp+160h]
  __int64 v87; // [rsp+2D0h] [rbp+168h]
  unsigned __int8 *v88; // [rsp+2D8h] [rbp+170h]
  __int64 v89; // [rsp+2E0h] [rbp+178h]
  char *v90; // [rsp+2E8h] [rbp+180h]
  __int64 v91; // [rsp+2F0h] [rbp+188h]
  _OWORD *v92; // [rsp+2F8h] [rbp+190h]
  __int64 v93; // [rsp+300h] [rbp+198h]
  _OWORD *v94; // [rsp+308h] [rbp+1A0h]
  __int64 v95; // [rsp+310h] [rbp+1A8h]
  int *v96; // [rsp+318h] [rbp+1B0h]
  __int64 v97; // [rsp+320h] [rbp+1B8h]
  int *v98; // [rsp+328h] [rbp+1C0h]
  __int64 v99; // [rsp+330h] [rbp+1C8h]
  __int16 *v100; // [rsp+338h] [rbp+1D0h]
  __int64 v101; // [rsp+340h] [rbp+1D8h]
  __int16 *v102; // [rsp+348h] [rbp+1E0h]
  __int64 v103; // [rsp+350h] [rbp+1E8h]
  __int16 *v104; // [rsp+358h] [rbp+1F0h]
  __int64 v105; // [rsp+360h] [rbp+1F8h]
  __int16 *v106; // [rsp+368h] [rbp+200h]
  __int64 v107; // [rsp+370h] [rbp+208h]
  char *v108; // [rsp+378h] [rbp+210h]
  __int64 v109; // [rsp+380h] [rbp+218h]
  _BYTE v110[16]; // [rsp+388h] [rbp+220h] BYREF
  _BYTE v111[16]; // [rsp+398h] [rbp+230h] BYREF
  _BYTE v112[16]; // [rsp+3A8h] [rbp+240h] BYREF
  _OWORD v113[2]; // [rsp+3B8h] [rbp+250h] BYREF
  _OWORD v114[2]; // [rsp+3D8h] [rbp+270h] BYREF
  _UNKNOWN *retaddr; // [rsp+430h] [rbp+2C8h] BYREF

  result = &retaddr;
  v4 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( *(_BYTE *)(a2 + 656) )
  {
    result = (_UNKNOWN **)XilUsbDevice_QueryAttributes(
                            a2,
                            (unsigned int)&v7,
                            (unsigned int)&v8,
                            (unsigned int)&v9,
                            (__int64)v114,
                            (__int64)&v10,
                            (__int64)v113);
    if ( (unsigned int)dword_1C0063748 > 5
      && (result = (_UNKNOWN **)tlgKeywordOn(&dword_1C0063748, 0x400000000000LL), (_BYTE)result) )
    {
      v38 = 33556480LL;
      v40 = &v38;
      v33 = *(_DWORD *)(a2 + 20);
      v42 = &v33;
      v34 = *(_DWORD *)(a2 + 36);
      v44 = &v34;
      v46 = a2 + 44;
      v11 = *(_BYTE *)(a2 + 116);
      v48 = &v11;
      v12 = *(_BYTE *)(a2 + 117);
      v50 = &v12;
      v25 = *(_WORD *)(a2 + 118);
      v52 = &v25;
      v13 = *(_BYTE *)(a2 + 120);
      v54 = &v13;
      v14 = *(_BYTE *)(a2 + 121);
      v56 = &v14;
      v15 = *(_BYTE *)(a2 + 122);
      v58 = &v15;
      v16 = *(_BYTE *)(a2 + 123);
      v60 = &v16;
      v26 = *(_WORD *)(a2 + 124);
      v62 = &v26;
      v27 = *(_WORD *)(a2 + 126);
      v64 = &v27;
      v28 = *(_WORD *)(a2 + 128);
      v66 = &v28;
      v17 = *(_BYTE *)(a2 + 130);
      v68 = &v17;
      v18 = *(_BYTE *)(a2 + 131);
      v70 = &v18;
      v19 = *(_BYTE *)(a2 + 132);
      v72 = &v19;
      v41 = 8LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 24LL;
      v49 = 1LL;
      v51 = 1LL;
      v53 = 2LL;
      v55 = 1LL;
      v57 = 1LL;
      v59 = 1LL;
      v61 = 1LL;
      v63 = 2LL;
      v65 = 2LL;
      v67 = 2LL;
      v69 = 1LL;
      v71 = 1LL;
      v5 = *(_QWORD *)(a2 + 8);
      v4 = v9;
      v20 = *(_BYTE *)(a2 + 133);
      v74 = &v20;
      v21 = *(_BYTE *)(a2 + 570);
      v76 = &v21;
      v22 = *(_BYTE *)(a2 + 571);
      v78 = &v22;
      v23 = *(_BYTE *)(a2 + 572);
      v80 = &v23;
      v35 = *(_DWORD *)(a2 + 576);
      v82 = &v35;
      v84 = &v7;
      v86 = &v8;
      v88 = &v9;
      v90 = &v10;
      v92 = v114;
      v94 = v113;
      v73 = 1LL;
      v75 = 1LL;
      v77 = 1LL;
      v79 = 1LL;
      v81 = 1LL;
      v83 = 4LL;
      v85 = 1LL;
      v87 = 1LL;
      v89 = 1LL;
      v91 = 1LL;
      v93 = 32LL;
      v95 = 32LL;
      v36 = *(_DWORD *)(v5 + 244);
      v96 = &v36;
      v97 = 4LL;
      v37 = *(_DWORD *)(v5 + 260);
      v98 = &v37;
      v99 = 4LL;
      v29 = *(_WORD *)(v5 + 264);
      v100 = &v29;
      v101 = 2LL;
      v30 = *(_WORD *)(v5 + 268);
      v102 = &v30;
      v103 = 2LL;
      v31 = *(_WORD *)(v5 + 248);
      v104 = &v31;
      v105 = 2LL;
      v32 = *(_WORD *)(v5 + 252);
      v106 = &v32;
      v107 = 2LL;
      v24 = *(_BYTE *)(v5 + 256);
      v108 = &v24;
      v109 = 1LL;
      tlgCreate1Sz_char(v110, v5 + 304);
      tlgCreate1Sz_char(v111, *(_QWORD *)(a2 + 8) + 309LL);
      tlgCreate1Sz_char(v112, *(_QWORD *)(a2 + 8) + 314LL);
      result = (_UNKNOWN **)tlgWriteTransfer_EtwWriteTransfer(
                              (int)&dword_1C0063748,
                              (int)&dword_1C0057791,
                              (int)&v39,
                              v6,
                              0x28u,
                              &v39);
    }
    else
    {
      v4 = v9;
    }
  }
  else
  {
    memset(v114, 0, sizeof(v114));
    memset(v113, 0, sizeof(v113));
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return (_UNKNOWN **)McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
                          v4,
                          (unsigned int)&USBXHCI_ETW_EVENT_DEVICE_UPDATE_V3,
                          0,
                          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
                          *(_QWORD *)(a2 + 24),
                          *(_QWORD *)a2,
                          *(_DWORD *)(a2 + 20),
                          *(_DWORD *)(a2 + 36),
                          a2 + 44,
                          *(_BYTE *)(a2 + 135),
                          *(_BYTE *)(a2 + 136) != 0,
                          *(_DWORD *)(a2 + 140),
                          *(_DWORD *)(a2 + 144));
  return result;
}
