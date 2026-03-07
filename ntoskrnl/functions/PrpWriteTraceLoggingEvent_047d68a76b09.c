void PrpWriteTraceLoggingEvent()
{
  int *v0; // r9
  char v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  int v4; // [rsp+3Ch] [rbp-C4h] BYREF
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+44h] [rbp-BCh] BYREF
  int v7; // [rsp+48h] [rbp-B8h] BYREF
  int v8; // [rsp+4Ch] [rbp-B4h] BYREF
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  int v10; // [rsp+54h] [rbp-ACh] BYREF
  int v11; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+70h] [rbp-90h] BYREF
  int *v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  int *v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  int *v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  int *v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  int *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  int *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  int *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  int *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  char *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  int *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  int *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  __int64 *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]

  if ( (unsigned int)dword_140C06798 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C06798, 0x800000000000LL) )
    {
      v2 = *v0;
      v22 = &v6;
      v14 = &v2;
      v3 = v0[1];
      v16 = &v3;
      v4 = v0[2];
      v18 = &v4;
      v5 = v0[3];
      v20 = &v5;
      v6 = v0[5];
      v7 = v6;
      v24 = &v7;
      v8 = v0[6];
      v26 = &v8;
      v9 = v0[7];
      v28 = &v9;
      v1 = *((_BYTE *)v0 + 32);
      v30 = &v1;
      v10 = v0[9];
      v32 = &v10;
      v11 = v0[10];
      v34 = &v11;
      v36 = &v12;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 1LL;
      v33 = 4LL;
      v35 = 4LL;
      v12 = 0x2000000LL;
      v37 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C06798,
        (unsigned __int8 *)byte_140036388,
        0LL,
        0LL,
        0xEu,
        &v13);
    }
  }
}
