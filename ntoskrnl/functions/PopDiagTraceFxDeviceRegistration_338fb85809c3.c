NTSTATUS __fastcall PopDiagTraceFxDeviceRegistration(
        PCEVENT_DESCRIPTOR EventDescriptor,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned __int16 *a6,
        char a7,
        __int64 a8)
{
  unsigned __int16 v8; // ax
  char v10; // [rsp+30h] [rbp-69h] BYREF
  __int16 v11; // [rsp+34h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-59h] BYREF
  __int64 *v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h]
  char *v15; // [rsp+60h] [rbp-39h]
  __int64 v16; // [rsp+68h] [rbp-31h]
  char *v17; // [rsp+70h] [rbp-29h]
  __int64 v18; // [rsp+78h] [rbp-21h]
  __int16 *v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  __int64 v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+9Ch] [rbp+3h]
  char *v24; // [rsp+A0h] [rbp+7h]
  __int64 v25; // [rsp+A8h] [rbp+Fh]
  __int64 v26; // [rsp+B0h] [rbp+17h]
  __int64 v27; // [rsp+B8h] [rbp+1Fh]
  __int64 v28; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v29; // [rsp+F0h] [rbp+57h] BYREF

  v29 = a3;
  v28 = a2;
  v16 = 1LL;
  v10 = a4 - 1;
  *(_QWORD *)&UserData.Size = 8LL;
  v14 = 8LL;
  v18 = 4LL;
  v8 = *a6;
  v22 = *a6;
  v11 = v8 >> 1;
  UserData.Ptr = (ULONGLONG)&v28;
  v13 = &v29;
  v15 = &v10;
  v17 = &a5;
  v19 = &v11;
  v21 = *((_QWORD *)a6 + 1);
  v24 = &a7;
  v26 = a8;
  v20 = 2LL;
  v23 = 0;
  v25 = 4LL;
  v27 = 12LL;
  return EtwWrite(PopDiagHandle, EventDescriptor, 0LL, 8u, &UserData);
}
