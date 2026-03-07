void __fastcall PopDiagTracePowerButtonBugcheck(int a1)
{
  unsigned __int8 *v1; // rdx
  int v2; // r9d
  ULONG v3; // [rsp+20h] [rbp-E0h]
  char v4; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v5[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v12; // [rsp+4Ch] [rbp-B4h] BYREF
  int v13; // [rsp+54h] [rbp-ACh] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+80h] [rbp-80h] BYREF
  int *v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  int *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  int *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  char *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  __int64 *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  int *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  __int64 *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  int *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  char *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  int *v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  int *v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]
  int *v46; // [rsp+170h] [rbp+70h]
  __int64 v47; // [rsp+178h] [rbp+78h]
  int *v48; // [rsp+180h] [rbp+80h]
  __int64 v49; // [rsp+188h] [rbp+88h]
  __int64 *v50; // [rsp+190h] [rbp+90h]
  __int64 v51; // [rsp+198h] [rbp+98h]

  if ( a1 == 7000 )
  {
    PopRecordLongPowerButtonPressDetected(1, 1);
    if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v6 = 7000;
      v20 = &v6;
      v1 = (unsigned __int8 *)byte_14002F929;
      v7 = dword_140C39C28;
      v22 = &v7;
      v8 = dword_140C39C24;
      v24 = &v8;
      v4 = byte_140C39C88;
      v26 = &v4;
      v16 = qword_140C39C30;
      v28 = &v16;
      v9 = dword_140C39C38;
      v30 = &v9;
      v10 = dword_140C39C3C;
      v32 = (unsigned __int64 *)&v10;
      v17 = qword_140C39C40;
      v34 = &v17;
      v11 = dword_140C39C8C;
      v36 = &v11;
      v5[0] = word_140C39C98;
      v38 = v5;
      v12 = qword_140C39C90;
      v40 = &v12;
      v42 = (int *)&v12 + 1;
      v13 = HIDWORD(qword_140C39CA4);
      v44 = &v13;
      v14 = dword_140C39C9C;
      v46 = &v14;
      v15 = qword_140C39CA4;
      v48 = &v15;
      v3 = 17;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 1LL;
      v29 = 8LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 8LL;
      v37 = 4LL;
LABEL_9:
      v41 = 4LL;
      v39 = 1LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, v1, 0LL, 0LL, v3, &v19);
    }
  }
  else if ( a1 == 15000
         && (unsigned int)dword_140C03928 > 5
         && tlgKeywordOn((__int64)&dword_140C03928, 0x800000000000LL) )
  {
    v15 = v2;
    v20 = &v15;
    v1 = (unsigned __int8 *)&dword_14002F7B4;
    v14 = dword_140C39C28;
    v22 = &v14;
    v13 = dword_140C39C24;
    v24 = &v13;
    v5[0] = byte_140C39C88;
    v26 = v5;
    v17 = qword_140C39C30;
    v28 = &v17;
    v30 = (int *)&v12 + 1;
    v12 = __PAIR64__(dword_140C39C38, dword_140C39C3C);
    v32 = &v12;
    v16 = qword_140C39C40;
    v34 = &v16;
    v11 = dword_140C39C8C;
    v36 = &v11;
    v4 = word_140C39C98;
    v38 = &v4;
    v10 = qword_140C39C90;
    v40 = (unsigned __int64 *)&v10;
    v9 = HIDWORD(qword_140C39C90);
    v42 = &v9;
    v8 = HIDWORD(qword_140C39CA4);
    v44 = &v8;
    v7 = dword_140C39C9C;
    v46 = &v7;
    v6 = qword_140C39CA4;
    v48 = &v6;
    v50 = &v18;
    v3 = 18;
    v21 = 4LL;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 1LL;
    v29 = 8LL;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 8LL;
    v37 = 4LL;
    v18 = 0x1000000LL;
    v51 = 8LL;
    goto LABEL_9;
  }
}
