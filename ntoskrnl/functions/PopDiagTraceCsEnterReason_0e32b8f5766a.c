char __fastcall PopDiagTraceCsEnterReason(int a1)
{
  char result; // al
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // r14d
  int v6; // r15d
  REGHANDLE v7; // r12
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+4Ch] [rbp-B4h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  int *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  int *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  __int64 *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  int *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  int *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  int *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]

  result = PopWnfCsEnterScenarioId;
  v2 = a1;
  v3 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v4 = (unsigned __int8)PopLidOpened;
  v5 = PopCsConsumption;
  v6 = dword_140CF7958;
  v12 = a1;
  v18 = PopWnfCsEnterScenarioId;
  v10 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v11 = (unsigned __int8)PopLidOpened;
  v9 = PopCsConsumption;
  v8 = dword_140CF7958;
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_ENTER_REASON);
    if ( result )
    {
      if ( PopPlatformAoAc )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v12;
        v22 = 4LL;
        v21 = &v11;
        v24 = 4LL;
        v23 = &v10;
        v26 = 1LL;
        v25 = &v18;
        v28 = 4LL;
        v27 = &v9;
        v29 = &v8;
        v31 = &PopWnfCsEnterScenarioId;
        v33 = 0xFFFFF780000002C4uLL;
        v30 = 4LL;
        v32 = 8LL;
        v34 = 4LL;
        result = EtwWrite(v7, &POP_ETW_EVENT_CS_ENTER_REASON, 0LL, 8u, &UserData);
        v6 = v8;
        v5 = v9;
        v3 = v10;
        v4 = v11;
        v2 = v12;
      }
    }
  }
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL);
    if ( result )
    {
      v19 = PopWnfCsEnterScenarioId;
      v37 = 8LL;
      v36 = &v19;
      v13 = v2;
      v38 = &v13;
      v39 = 4LL;
      v40 = &v14;
      v42 = &v15;
      v44 = &v16;
      v46 = &v17;
      v14 = v4;
      v41 = 4LL;
      v15 = v3;
      v43 = 4LL;
      v16 = v5;
      v45 = 4LL;
      v17 = v6;
      v47 = 4LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C03928,
               (unsigned __int8 *)byte_14002F56D,
               0LL,
               0LL,
               8u,
               &v35);
    }
  }
  return result;
}
