BOOLEAN __fastcall EtwpTraceSavePersistedLoggerStop(unsigned __int16 *a1, int a2, int a3, int a4, char a5, int a6)
{
  REGHANDLE v6; // rdi
  const EVENT_DESCRIPTOR *v7; // rbx
  BOOLEAN result; // al
  ULONGLONG v10; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-49h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-39h]
  int v13; // [rsp+50h] [rbp-31h]
  int v14; // [rsp+54h] [rbp-2Dh]
  int *v15; // [rsp+58h] [rbp-29h]
  int v16; // [rsp+60h] [rbp-21h]
  int v17; // [rsp+64h] [rbp-1Dh]
  int *v18; // [rsp+68h] [rbp-19h]
  int v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+74h] [rbp-Dh]
  int *v21; // [rsp+78h] [rbp-9h]
  int v22; // [rsp+80h] [rbp-1h]
  int v23; // [rsp+84h] [rbp+3h]
  int *v24; // [rsp+88h] [rbp+7h]
  int v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+94h] [rbp+13h]
  char *v27; // [rsp+98h] [rbp+17h]
  int v28; // [rsp+A0h] [rbp+1Fh]
  int v29; // [rsp+A4h] [rbp+23h]
  int v30; // [rsp+E0h] [rbp+5Fh] BYREF
  int v31; // [rsp+E8h] [rbp+67h] BYREF
  int v32; // [rsp+F0h] [rbp+6Fh] BYREF

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v6 = EtwpEventTracingProvRegHandle;
  v7 = (const EVENT_DESCRIPTOR *)ETW_EVENT_SAVE_PERSISTED_LOGGER_STOP;
  if ( a6 < 0 )
    v7 = &ETW_EVENT_SAVE_PERSISTED_LOGGER_ERROR;
  result = EtwEventEnabled(EtwpEventTracingProvRegHandle, v7);
  if ( result )
  {
    v10 = *((_QWORD *)a1 + 1);
    UserData.Reserved = 0;
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    UserData.Ptr = v10;
    UserData.Size = *a1;
    v12 = &EtwpNull;
    v15 = &v30;
    v18 = &v31;
    v21 = &v32;
    v24 = &a6;
    v27 = &a5;
    v16 = 4;
    v19 = 4;
    v22 = 4;
    v25 = 4;
    v28 = 4;
    v13 = 2;
    return EtwWrite(v6, v7, 0LL, 7u, &UserData);
  }
  return result;
}
