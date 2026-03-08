/*
 * XREFs of ExLogTimeZoneInformation @ 0x1403AB740
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140244050 (_tlgCreate1Sz_wchar_t.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

int ExLogTimeZoneInformation()
{
  __int64 CurrentServerSilo; // rax
  _QWORD *v1; // r10
  __int64 v2; // r10
  int v3; // eax
  int *v4; // r10
  char v5; // cl
  int v6; // r11d
  char v8; // [rsp+30h] [rbp-D0h] BYREF
  char v9; // [rsp+31h] [rbp-CFh] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-A0h] BYREF
  int *v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+8Ch] [rbp-74h]
  int *v21; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+9Ch] [rbp-64h]
  int *v24; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+ACh] [rbp-54h]
  char *v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+BCh] [rbp-44h]
  __int64 *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  _BYTE v33[16]; // [rsp+D0h] [rbp-30h] BYREF
  char *v34; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+ECh] [rbp-14h]
  int *v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]
  int *v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+108h] [rbp+8h]
  int v42; // [rsp+10Ch] [rbp+Ch]
  int *v43; // [rsp+110h] [rbp+10h]
  int v44; // [rsp+118h] [rbp+18h]
  int v45; // [rsp+11Ch] [rbp+1Ch]
  int *v46; // [rsp+120h] [rbp+20h]
  int v47; // [rsp+128h] [rbp+28h]
  int v48; // [rsp+12Ch] [rbp+2Ch]
  int *v49; // [rsp+130h] [rbp+30h]
  int v50; // [rsp+138h] [rbp+38h]
  int v51; // [rsp+13Ch] [rbp+3Ch]

  CurrentServerSilo = PsGetCurrentServerSilo();
  v1 = &PspHostSiloGlobals;
  if ( CurrentServerSilo )
    v1 = *(_QWORD **)(CurrentServerSilo + 1488);
  if ( (unsigned int)dword_140C06760 > 5 )
  {
    v2 = v1[157];
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v3 = *(_DWORD *)(v2 + 1000);
    v29 = 0;
    v32 = 0;
    v10 = v3;
    v18 = &v10;
    v11 = *(_DWORD *)(v2 + 436);
    v21 = &v11;
    v12 = *(_DWORD *)(v2 + 432);
    v24 = &v12;
    v8 = ExpRealTimeIsUniversal;
    v27 = &v8;
    v16 = *(_QWORD *)(v2 + 992);
    v30 = &v16;
    v19 = 4;
    v22 = 4;
    v25 = 4;
    v28 = 1;
    v31 = 8;
    tlgCreate1Sz_wchar_t((__int64)v33, (const size_t *)(v2 + 172));
    v5 = *((_BYTE *)v4 + 428);
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v48 = 0;
    v51 = 0;
    v34 = &v9;
    v13 = *v4;
    v37 = &v13;
    v14 = v4[21];
    v40 = &v14;
    v15 = v4[42];
    v43 = &v15;
    v46 = v4 + 17;
    v9 = v5;
    v49 = v4 + 38;
    v47 = 16;
    v50 = 16;
    v35 = v6;
    v38 = 4;
    v41 = 4;
    v44 = 4;
    LODWORD(CurrentServerSilo) = tlgWriteTransfer_EtwWriteTransfer(
                                   (__int64)&dword_140C06760,
                                   (unsigned __int8 *)&byte_140035EC7,
                                   0LL,
                                   0LL,
                                   0xEu,
                                   &v17);
  }
  return CurrentServerSilo;
}
