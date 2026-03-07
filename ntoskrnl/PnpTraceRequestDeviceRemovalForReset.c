void __fastcall PnpTraceRequestDeviceRemovalForReset(__int64 a1, int a2, int a3)
{
  unsigned __int16 *v5; // r9
  unsigned __int16 *v6; // r10
  int v7; // r11d
  int v8; // [rsp+30h] [rbp-79h] BYREF
  int v9; // [rsp+34h] [rbp-75h] BYREF
  int v10; // [rsp+38h] [rbp-71h] BYREF
  __int64 v11; // [rsp+40h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-59h] BYREF
  __int64 *v13; // [rsp+70h] [rbp-39h]
  int v14; // [rsp+78h] [rbp-31h]
  int v15; // [rsp+7Ch] [rbp-2Dh]
  _DWORD *v16; // [rsp+80h] [rbp-29h]
  int v17; // [rsp+88h] [rbp-21h]
  int v18; // [rsp+8Ch] [rbp-1Dh]
  __int64 v19; // [rsp+90h] [rbp-19h]
  _DWORD v20[2]; // [rsp+98h] [rbp-11h] BYREF
  _DWORD *v21; // [rsp+A0h] [rbp-9h]
  int v22; // [rsp+A8h] [rbp-1h]
  int v23; // [rsp+ACh] [rbp+3h]
  __int64 v24; // [rsp+B0h] [rbp+7h]
  _DWORD v25[2]; // [rsp+B8h] [rbp+Fh] BYREF
  int *v26; // [rsp+C0h] [rbp+17h]
  int v27; // [rsp+C8h] [rbp+1Fh]
  int v28; // [rsp+CCh] [rbp+23h]
  int *v29; // [rsp+D0h] [rbp+27h]
  int v30; // [rsp+D8h] [rbp+2Fh]
  int v31; // [rsp+DCh] [rbp+33h]
  int *v32; // [rsp+E0h] [rbp+37h]
  int v33; // [rsp+E8h] [rbp+3Fh]
  int v34; // [rsp+ECh] [rbp+43h]

  if ( (unsigned int)dword_140C038F0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C038F0, 0x400000000000LL) )
    {
      v15 = 0;
      v18 = 0;
      v20[1] = 0;
      v23 = 0;
      v25[1] = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v13 = &v11;
      v16 = v20;
      v19 = *((_QWORD *)v5 + 1);
      v20[0] = *v5;
      v21 = v25;
      v24 = *((_QWORD *)v6 + 1);
      v25[0] = *v6;
      v26 = &v8;
      v29 = &v9;
      v32 = &v10;
      v17 = 2;
      v22 = 2;
      v27 = 4;
      v30 = 4;
      v33 = 4;
      v11 = 0x1000000LL;
      v14 = 8;
      v8 = v7;
      v9 = a2;
      v10 = a3;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C038F0,
        (unsigned __int8 *)&word_14002C82E,
        0LL,
        0LL,
        0xAu,
        &v12);
    }
  }
}
