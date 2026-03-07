char VslpIumInitializeTelemetry()
{
  char result; // al
  unsigned int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // rax
  int v4; // edx
  int *v5; // rcx
  int v6; // ecx
  int v7; // edx
  REGHANDLE v8; // rcx
  int v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  int *v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh] BYREF
  int v19; // [rsp+8Ch] [rbp+23h]
  int *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  int *v23; // [rsp+A0h] [rbp+37h]
  int v24; // [rsp+A8h] [rbp+3Fh]
  int v25; // [rsp+ACh] [rbp+43h]

  result = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C06210, 0LL, 0LL);
  if ( (*(_DWORD *)(KeLoaderBlock_0 + 264) & 1) != 0 )
  {
    if ( (unsigned int)dword_140C06210 <= 5 )
      goto LABEL_8;
    result = tlgKeywordOn((__int64)&dword_140C06210, 0x400000000000LL);
    if ( result )
    {
      v3 = *(_QWORD *)(v2 + 240);
      v4 = *(unsigned __int16 *)(v3 + 2784);
      v5 = *(int **)(v3 + 2792);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = (__int64 *)&v18;
      v20 = &v9;
      v17 = v5;
      v18 = v4;
      v9 = (v1 >> 2) & 1;
      v15 = 2;
      v21 = 4;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140C06210,
                 (unsigned __int8 *)byte_14002B12B,
                 0LL,
                 0LL,
                 5u,
                 v13);
    }
  }
  if ( (unsigned int)dword_140C06210 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C06210, 0x400000000000LL);
    if ( result )
    {
      v16 = 0;
      v19 = 0;
      v14 = &v12;
      v9 = (unsigned __int8)VslVsmEnabled;
      v17 = &v9;
      v12 = 0x1000000LL;
      v15 = 8;
      v18 = 4;
      v6 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2888LL);
      v22 = 0;
      v20 = &v10;
      v10 = v6;
      v21 = 4;
      v7 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2892LL);
      v25 = 0;
      v23 = &v11;
      v11 = v7;
      v24 = 4;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140C06210,
                 (unsigned __int8 *)&byte_14002B167,
                 0LL,
                 0LL,
                 6u,
                 v13);
    }
  }
LABEL_8:
  if ( !VslVsmEnabled )
  {
    v8 = qword_140C06230;
    qword_140C06230 = 0LL;
    dword_140C06210 = 0;
    return EtwUnregister(v8);
  }
  return result;
}
