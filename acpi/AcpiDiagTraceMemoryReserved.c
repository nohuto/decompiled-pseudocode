char AcpiDiagTraceMemoryReserved(char a1, char a2, char a3, ...)
{
  _UNKNOWN **v3; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-59h] BYREF
  char *v6; // [rsp+48h] [rbp-49h]
  int v7; // [rsp+50h] [rbp-41h]
  int v8; // [rsp+54h] [rbp-3Dh]
  char *v9; // [rsp+58h] [rbp-39h]
  int v10; // [rsp+60h] [rbp-31h]
  int v11; // [rsp+64h] [rbp-2Dh]
  va_list v12; // [rsp+68h] [rbp-29h]
  int v13; // [rsp+70h] [rbp-21h]
  int v14; // [rsp+74h] [rbp-1Dh]
  va_list v15; // [rsp+78h] [rbp-19h]
  int v16; // [rsp+80h] [rbp-11h]
  int v17; // [rsp+84h] [rbp-Dh]
  va_list v18; // [rsp+88h] [rbp-9h]
  int v19; // [rsp+90h] [rbp-1h]
  int v20; // [rsp+94h] [rbp+3h]
  va_list v21; // [rsp+98h] [rbp+7h]
  int v22; // [rsp+A0h] [rbp+Fh]
  int v23; // [rsp+A4h] [rbp+13h]
  va_list v24; // [rsp+A8h] [rbp+17h]
  int v25; // [rsp+B0h] [rbp+1Fh]
  int v26; // [rsp+B4h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+3Fh] BYREF
  char v28; // [rsp+D8h] [rbp+47h] BYREF
  char v29; // [rsp+E0h] [rbp+4Fh] BYREF
  char v30; // [rsp+E8h] [rbp+57h] BYREF
  __int64 v31; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+5Fh]
  __int64 v33; // [rsp+F8h] [rbp+67h] BYREF
  va_list va1; // [rsp+F8h] [rbp+67h]
  __int64 v35; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+100h] [rbp+6Fh]
  __int64 v37; // [rsp+108h] [rbp+77h] BYREF
  va_list va3; // [rsp+108h] [rbp+77h]
  va_list va4; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v31 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v33 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v35 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v37 = va_arg(va4, _QWORD);
  v3 = &retaddr;
  v30 = a3;
  v29 = a2;
  v28 = a1;
  if ( AcpiDiagHandle )
  {
    LOBYTE(v3) = EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_MEMORY_RESERVED);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      UserData.Ptr = (unsigned __int64)&v28;
      v6 = &v29;
      v9 = &v30;
      va_copy(v12, va);
      va_copy(v15, va1);
      va_copy(v18, va2);
      va_copy(v21, va3);
      va_copy(v24, va4);
      UserData.Size = 1;
      v7 = 1;
      v10 = 1;
      v13 = 8;
      v16 = 8;
      v19 = 8;
      v22 = 8;
      v25 = 8;
      LOBYTE(v3) = EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_MEMORY_RESERVED, 0LL, 8u, &UserData);
    }
  }
  return (char)v3;
}
