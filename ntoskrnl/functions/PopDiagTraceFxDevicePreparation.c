char __fastcall PopDiagTraceFxDevicePreparation(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int8 a4)
{
  _UNKNOWN **v4; // rax
  int v6; // esi
  REGHANDLE v7; // rbx
  int v8; // r8d
  __int16 v10; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v13; // [rsp+58h] [rbp-9h]
  int v14; // [rsp+60h] [rbp-1h]
  int v15; // [rsp+64h] [rbp+3h]
  __int16 *v16; // [rsp+68h] [rbp+7h]
  int v17; // [rsp+70h] [rbp+Fh]
  int v18; // [rsp+74h] [rbp+13h]
  __int64 v19; // [rsp+78h] [rbp+17h]
  int v20; // [rsp+80h] [rbp+1Fh]
  int v21; // [rsp+84h] [rbp+23h]
  int *v22; // [rsp+88h] [rbp+27h]
  int v23; // [rsp+90h] [rbp+2Fh]
  int v24; // [rsp+94h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  __int64 v26; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v27; // [rsp+D0h] [rbp+6Fh] BYREF

  v4 = &retaddr;
  v27 = a2;
  v26 = a1;
  v6 = a4;
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_PREPARATION);
    if ( (_BYTE)v4 )
    {
      v8 = *a3;
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v10 = (unsigned __int16)v8 >> 1;
      UserData.Ptr = (ULONGLONG)&v26;
      v13 = &v27;
      v16 = &v10;
      v19 = *((_QWORD *)a3 + 1);
      v22 = &v11;
      UserData.Size = 8;
      v14 = 8;
      v20 = v8;
      v11 = v6;
      v17 = 2;
      v23 = 4;
      LOBYTE(v4) = EtwWrite(v7, &POP_ETW_EVENT_DEVICE_PREPARATION, 0LL, 5u, &UserData);
    }
  }
  return (char)v4;
}
