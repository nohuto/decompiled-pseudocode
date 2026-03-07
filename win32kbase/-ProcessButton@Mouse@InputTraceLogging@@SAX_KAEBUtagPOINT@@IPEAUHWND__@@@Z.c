void __fastcall InputTraceLogging::Mouse::ProcessButton(__int64 a1, const struct tagPOINT *a2, __int64 a3, HWND a4)
{
  int v4; // r8d
  __int64 v5; // r9
  int *v6; // r10
  __int64 v7; // r11
  int v8; // eax
  int v9; // [rsp+30h] [rbp-49h] BYREF
  int v10; // [rsp+34h] [rbp-45h] BYREF
  int v11; // [rsp+38h] [rbp-41h] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h] BYREF
  __int64 v13; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  int *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  int *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  int *v24; // [rsp+A0h] [rbp+27h]
  int v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+ACh] [rbp+33h]
  __int64 *v27; // [rsp+B0h] [rbp+37h]
  int v28; // [rsp+B8h] [rbp+3Fh]
  int v29; // [rsp+BCh] [rbp+43h]

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    v8 = v6[1];
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v20 = 0;
    v17 = 0;
    v10 = v8;
    v11 = *v6;
    v27 = &v12;
    v24 = &v9;
    v21 = &v10;
    v18 = &v11;
    v15 = &v13;
    v12 = v5;
    v9 = v4;
    v28 = 8;
    v16 = 8;
    v13 = v7;
    v25 = 4;
    v22 = 4;
    v19 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C029DB3D, 0LL, 0LL, 7u, &v14);
  }
}
