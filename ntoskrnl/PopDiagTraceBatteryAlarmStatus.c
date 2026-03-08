/*
 * XREFs of PopDiagTraceBatteryAlarmStatus @ 0x140989974
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceBatteryAlarmStatus(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v3; // rax
  const CHAR *v4; // rsi
  int v5; // ebx
  int v6; // edi
  char v7; // r9
  char *v8; // r10
  __int64 v9; // r11
  __int64 v10; // rbx
  int v11; // r10d
  char v13; // [rsp+38h] [rbp-D0h] BYREF
  char v14; // [rsp+39h] [rbp-CFh] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  int v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+44h] [rbp-C4h] BYREF
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  int v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+54h] [rbp-B4h] BYREF
  int v22; // [rsp+58h] [rbp-B0h] BYREF
  int v23; // [rsp+5Ch] [rbp-ACh] BYREF
  int v24; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25[2]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v26[16]; // [rsp+88h] [rbp-80h] BYREF
  int *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  int *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  int *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  int *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  int *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  int *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  int *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  int *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  int *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  int *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  int *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  int *v49; // [rsp+148h] [rbp+40h]
  __int64 v50; // [rsp+150h] [rbp+48h]

  v3 = *a3;
  if ( (unsigned int)v3 <= 1 )
  {
    v4 = IndexToActionName[v3];
    v5 = dword_140C3CCEC;
    v6 = 0;
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL);
      if ( (_BYTE)v3 )
      {
        tlgCreate1Sz_char((__int64)v26, v4);
        v13 = v7;
        v27 = (int *)&v13;
        v28 = 1LL;
        v29 = &v20;
        v21 = unk_140C3CB80;
        v20 = v5;
        v31 = &v21;
        v14 = *v8;
        v33 = (int *)&v14;
        v22 = *((_DWORD *)v8 + 1);
        v35 = &v22;
        v23 = *((_DWORD *)v8 + 5);
        v37 = &v23;
        v24 = *((_DWORD *)v8 + 2);
        v39 = &v24;
        v15 = *((_DWORD *)v8 + 3);
        v41 = &v15;
        v16 = *((_DWORD *)v8 + 4);
        v43 = &v16;
        v17 = *(_DWORD *)(v9 + 4);
        v45 = &v17;
        v18 = *(_DWORD *)(v9 + 16);
        v47 = &v18;
        v19 = (unsigned __int8)byte_140C3CC80;
        v49 = &v19;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 1LL;
        v36 = 4LL;
        v38 = 4LL;
        v40 = 4LL;
        v42 = 4LL;
        v44 = 4LL;
        v46 = 4LL;
        v48 = 4LL;
        v50 = 4LL;
        LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140C03928,
                       (unsigned __int8 *)&word_14002E336,
                       0LL,
                       0LL,
                       0xFu,
                       v25);
      }
    }
    if ( (unsigned int)dword_140C3CB54 > 1 )
    {
      v10 = qword_140C3CB70;
      v3 = (unsigned __int64)&qword_140C3CB70;
      while ( (__int64 *)v10 != &qword_140C3CB70 )
      {
        ++v6;
        if ( *(_DWORD *)(v10 + 64) )
          v3 = (unsigned __int64)&qword_140C3CB70;
        if ( (unsigned int)dword_140C03928 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
          {
            tlgCreate1Sz_char((__int64)v26, v4);
            v19 = v6;
            v27 = &v19;
            v18 = *(_DWORD *)(v10 + 64);
            v28 = 4LL;
            v29 = &v18;
            v17 = *(_DWORD *)(v10 + 88);
            v31 = &v17;
            v33 = &v16;
            v15 = *(_DWORD *)(v10 + 68);
            v35 = &v15;
            v30 = 4LL;
            v32 = 4LL;
            v16 = v11;
            v34 = 4LL;
            v36 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C03928,
              (unsigned __int8 *)word_14002E2A2,
              0LL,
              0LL,
              8u,
              v25);
          }
          v3 = (unsigned __int64)&qword_140C3CB70;
        }
        v10 = *(_QWORD *)v10;
      }
    }
  }
  return v3;
}
