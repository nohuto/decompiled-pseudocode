NTSTATUS __fastcall PopTraceEsState(__int64 a1, __int64 a2, int a3)
{
  NTSTATUS result; // eax
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-A0h] BYREF
  int *v13; // [rsp+80h] [rbp-80h]
  int v14; // [rsp+88h] [rbp-78h]
  int v15; // [rsp+8Ch] [rbp-74h]
  __int64 *v16; // [rsp+90h] [rbp-70h]
  int v17; // [rsp+98h] [rbp-68h]
  int v18; // [rsp+9Ch] [rbp-64h]
  int *v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A8h] [rbp-58h]
  int v21; // [rsp+ACh] [rbp-54h]
  int *v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+B8h] [rbp-48h]
  int v24; // [rsp+BCh] [rbp-44h]
  int *v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  int v27; // [rsp+CCh] [rbp-34h]
  int *v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D8h] [rbp-28h]
  int v30; // [rsp+DCh] [rbp-24h]
  int *v31; // [rsp+E0h] [rbp-20h]
  int v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+ECh] [rbp-14h]
  __int64 *v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]

  result = (unsigned __int8)PopEsAcOnline;
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v6 = (unsigned __int8)PopEsAcOnline;
    v22 = &v6;
    v25 = &v7;
    v28 = &v8;
    v10 = a2;
    v31 = &v9;
    v4 = PopEsReason;
    v16 = &v10;
    v34 = &v11;
    v13 = &v4;
    v5 = a3;
    v19 = &v5;
    v8 = PopEsLastBatteryThreshold;
    v9 = (unsigned __int8)PopEsLastUserAwaySetting;
    v14 = 4;
    v17 = 8;
    v20 = 4;
    v23 = 4;
    v7 = PopEsMode;
    v26 = 4;
    v29 = 4;
    v32 = 4;
    v11 = 0x1000000LL;
    v35 = 8;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140C03928,
             (unsigned __int8 *)&word_14002EDC6,
             0LL,
             0LL,
             0xAu,
             &v12);
  }
  return result;
}
