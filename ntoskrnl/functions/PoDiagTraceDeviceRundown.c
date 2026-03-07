NTSTATUS __fastcall PoDiagTraceDeviceRundown(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3, char a4)
{
  int v4; // ecx
  unsigned __int16 v5; // ax
  int v6; // ecx
  ULONG v7; // r9d
  char v9; // [rsp+30h] [rbp-29h] BYREF
  __int16 v10; // [rsp+34h] [rbp-25h] BYREF
  __int16 v11; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  char *v13; // [rsp+50h] [rbp-9h]
  __int64 v14; // [rsp+58h] [rbp-1h]
  __int16 *v15; // [rsp+60h] [rbp+7h]
  __int64 v16; // [rsp+68h] [rbp+Fh]
  __int64 v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  __int16 *v20; // [rsp+80h] [rbp+27h]
  __int64 v21; // [rsp+88h] [rbp+2Fh]
  __int64 v22; // [rsp+90h] [rbp+37h]
  int v23; // [rsp+98h] [rbp+3Fh]
  int v24; // [rsp+9Ch] [rbp+43h]
  __int64 v25; // [rsp+C0h] [rbp+67h] BYREF

  v25 = a1;
  v4 = *a2;
  UserData.Ptr = (ULONGLONG)&v25;
  v18 = v4;
  v13 = &v9;
  v5 = v4;
  v9 = a4 - 1;
  v6 = *a3;
  v7 = 5;
  v10 = v5 >> 1;
  v15 = &v10;
  v17 = *((_QWORD *)a2 + 1);
  v11 = (unsigned __int16)v6 >> 1;
  v20 = &v11;
  *(_QWORD *)&UserData.Size = 8LL;
  v14 = 1LL;
  v16 = 2LL;
  v19 = 0;
  v21 = 2LL;
  if ( (_WORD)v6 )
  {
    v7 = 6;
    v22 = *((_QWORD *)a3 + 1);
    v23 = v6;
    v24 = 0;
  }
  return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_RUNDOWN, 0LL, v7, &UserData);
}
