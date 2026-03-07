char __fastcall PopPowerAggregatorDiagTraceHandleIntent(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // rbx
  char result; // al
  int v9; // r9d
  int v10; // r10d
  int v11; // r11d
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  int *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  int *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  int *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  _DWORD *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+D0h] [rbp-30h] BYREF
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  int *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  __int64 *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  int v45; // [rsp+190h] [rbp+90h] BYREF
  int v46; // [rsp+198h] [rbp+98h] BYREF
  int v47; // [rsp+1A0h] [rbp+A0h] BYREF

  v47 = a3;
  v46 = a2;
  v45 = a1;
  v6 = a5;
  UserData.Ptr = (ULONGLONG)&v45;
  *(_QWORD *)&UserData.Size = 4LL;
  v20 = &v46;
  v21 = 4LL;
  v22 = &v47;
  v23 = 4LL;
  v24 = &a6;
  v25 = 4LL;
  v30 = &v17;
  v26 = a4;
  v27 = 4LL;
  v28 = (__int64)a5;
  v29 = 4LL;
  v17 = 0LL;
  v31 = 8LL;
  result = PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_HANDLE_INTENT, 7u, &UserData);
  if ( *a4 != *v6 && a6 >= 0 && (unsigned int)dword_140C03928 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL);
    if ( result )
    {
      v12 = v45;
      v14 = v9;
      v33 = &v12;
      v13 = v47;
      v35 = &v13;
      v37 = &v14;
      v39 = &v15;
      v41 = &v16;
      v43 = &v18;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v15 = v10;
      v40 = 4LL;
      v16 = v11;
      v42 = 4LL;
      v18 = 0x1000000LL;
      v44 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C03928,
               (unsigned __int8 *)word_14003267A,
               0LL,
               0LL,
               8u,
               &v32);
    }
  }
  return result;
}
