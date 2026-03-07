char CarEtwCrashEvent()
{
  char result; // al
  __int64 v1; // rdx
  unsigned int v2; // r9d
  __int64 v3; // r11
  const CHAR *v4; // r10
  int *v5; // r11
  int v6; // ecx
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-B0h] BYREF
  int *v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+7Ch] [rbp-84h]
  int *v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+8Ch] [rbp-74h]
  int *v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+9Ch] [rbp-64h]
  char *v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  _BYTE v26[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v27[16]; // [rsp+C0h] [rbp-40h] BYREF
  int *v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D8h] [rbp-28h]
  int v30; // [rsp+DCh] [rbp-24h]
  int *v31; // [rsp+E0h] [rbp-20h]
  int v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+ECh] [rbp-14h]
  __int64 v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]

  result = CarLogInitialized;
  if ( CarLogInitialized )
  {
    if ( dword_140C09378 )
    {
      result = tlgKeywordOn((__int64)&dword_140C09378, 0x800000000000LL);
      if ( result )
      {
        if ( v2 > 5 )
        {
          result = tlgKeywordOn((__int64)&dword_140C09378, v1);
          if ( result )
          {
            v8 = 0;
            v16 = 0;
            v19 = 0;
            v22 = 0;
            v25 = 0;
            v14 = &v8;
            v9 = *(_DWORD *)(v3 + 56);
            v17 = &v9;
            v10 = CarTipTag;
            v20 = &v10;
            v23 = &v7;
            v15 = 4;
            v18 = 4;
            v21 = 4;
            v7 = 0;
            v24 = 1;
            tlgCreate1Sz_wchar_t((__int64)v26, (const size_t *)L"POSTMORTEM");
            tlgCreate1Sz_char((__int64)v27, v4);
            v6 = *v5;
            v30 = 0;
            v33 = 0;
            v36 = 0;
            v28 = &v11;
            v12 = v5[2];
            v31 = &v12;
            v34 = *((_QWORD *)v5 + 5);
            v11 = v6;
            v29 = 4;
            v32 = 4;
            v35 = 8;
            return tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140C09378,
                     (unsigned __int8 *)&word_1400340E6,
                     0LL,
                     0LL,
                     0xBu,
                     &v13);
          }
        }
      }
    }
  }
  return result;
}
