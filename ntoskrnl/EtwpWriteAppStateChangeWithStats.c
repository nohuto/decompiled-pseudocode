/*
 * XREFs of EtwpWriteAppStateChangeWithStats @ 0x1407E69B4
 * Callers:
 *     EtwTraceAppStateChange @ 0x1407E8520 (EtwTraceAppStateChange.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetProcessStartKey @ 0x1402993E0 (PsGetProcessStartKey.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChangeWithStats()
{
  __int64 v0; // r9
  __int64 v1; // r11
  int v2; // eax
  unsigned __int64 ProcessStartKey; // rax
  __int64 v4; // r9
  unsigned __int8 v5; // cl
  int v6; // r11d
  __int64 v7; // rax
  __int64 v8; // r10
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  char v11; // [rsp+32h] [rbp-CEh] BYREF
  char v12; // [rsp+33h] [rbp-CDh] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+7Ch] [rbp-84h]
  int *v22; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+8Ch] [rbp-74h]
  unsigned __int64 *v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+9Ch] [rbp-64h]
  int *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  char *v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  char *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  char *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  char *v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]
  __int64 v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FCh] [rbp-4h]
  int *v46; // [rsp+100h] [rbp+0h]
  int v47; // [rsp+108h] [rbp+8h]
  int v48; // [rsp+10Ch] [rbp+Ch]
  __int64 *v49; // [rsp+110h] [rbp+10h]
  int v50; // [rsp+118h] [rbp+18h]
  int v51; // [rsp+11Ch] [rbp+1Ch]

  if ( (unsigned int)dword_140C042B8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C042B8, 0x200000000003LL) )
    {
      v2 = *(_DWORD *)(v0 + 1088);
      v21 = 0;
      v24 = 0;
      v13 = v2;
      v19 = v1;
      v22 = &v13;
      v20 = 98;
      v23 = 4;
      ProcessStartKey = PsGetProcessStartKey(v0);
      v5 = *(_BYTE *)(v4 + 2171);
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v16 = ProcessStartKey;
      v25 = &v16;
      v14 = *(_DWORD *)(v4 + 2004);
      v28 = &v14;
      LOBYTE(ProcessStartKey) = (v6 - 3) & (*(_DWORD *)(v4 + 2172) >> 2);
      v26 = v6 + 4;
      v9 = ProcessStartKey;
      v31 = &v9;
      v32 = v6 - 3;
      v10 = v5 & 7;
      v34 = &v10;
      v11 = (v5 >> 3) & 7;
      v35 = v6 - 3;
      v37 = &v11;
      v40 = &v12;
      v15 = *(_DWORD *)(v4 + 1832);
      v46 = &v15;
      v7 = *(_QWORD *)(v4 + 2344);
      v51 = 0;
      v17 = v7 << 12;
      v49 = &v17;
      v38 = v6 - 3;
      v12 = (v6 - 3) & (v5 >> 6);
      v41 = v6 - 3;
      v50 = v6 + 4;
      v29 = v6;
      v43 = v8;
      v44 = 44;
      v47 = v6;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C042B8,
        (unsigned __int8 *)&word_140034CDE,
        0LL,
        0LL,
        0xDu,
        &v18);
    }
  }
}
