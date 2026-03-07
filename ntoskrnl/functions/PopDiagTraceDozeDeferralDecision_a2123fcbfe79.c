void __fastcall PopDiagTraceDozeDeferralDecision(
        unsigned __int8 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  int v7; // edi
  __int64 v9; // r9
  const size_t *v10; // r10
  const size_t *v11; // r11
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+31h] [rbp-CFh] BYREF
  char v14; // [rsp+32h] [rbp-CEh] BYREF
  char v15; // [rsp+33h] [rbp-CDh] BYREF
  char v16; // [rsp+34h] [rbp-CCh] BYREF
  char v17; // [rsp+35h] [rbp-CBh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp-A0h] BYREF
  int *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int64 *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  __int64 *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  _BYTE v38[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v39[16]; // [rsp+F0h] [rbp-10h] BYREF
  char *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  char *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  char *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  int *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  char *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  char *v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  char *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]

  v7 = a1;
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v18 = v7;
      v26 = &v18;
      v27 = 4LL;
      v28 = &v19;
      v22 = qword_140C3CE20;
      v30 = &v22;
      v32 = &v23;
      v24 = a5;
      v34 = &v24;
      v20 = PopDozeDeferralMaxSeconds;
      v36 = &v20;
      v19 = a2;
      v29 = 4LL;
      v31 = 8LL;
      v23 = v9;
      v33 = 8LL;
      v35 = 8LL;
      v37 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v38, v10);
      tlgCreate1Sz_wchar_t((__int64)v39, v11);
      v40 = &v12;
      v13 = a7;
      v12 = a6;
      v42 = &v13;
      v14 = PopPlatformRole;
      v44 = &v14;
      v21 = (unsigned __int8)byte_140C3D6F4;
      v46 = &v21;
      v15 = byte_140C3D6F3;
      v48 = &v15;
      v16 = BYTE8(xmmword_140C3D710);
      v50 = &v16;
      v17 = qword_140C3D720;
      v52 = &v17;
      v41 = 1LL;
      v43 = 1LL;
      v45 = 1LL;
      v47 = 4LL;
      v49 = 1LL;
      v51 = 1LL;
      v53 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)word_14002DD82,
        0LL,
        0LL,
        0x11u,
        &v25);
    }
  }
}
