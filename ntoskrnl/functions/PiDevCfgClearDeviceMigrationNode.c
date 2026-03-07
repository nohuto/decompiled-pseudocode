__int64 __fastcall PiDevCfgClearDeviceMigrationNode(__int64 *a1, const WCHAR *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  int v6; // eax
  int RegistryValues; // r14d
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  void *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  wchar_t *Buffer; // rbx
  __int64 *v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v29; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v32; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v33[28]; // [rsp+80h] [rbp-80h] BYREF

  v3 = a1[1];
  Handle = 0LL;
  KeyHandle = 0LL;
  v32 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v29.Length = 0LL;
  v29.Buffer = 0LL;
  v27 = 0;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v5 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
  else
    v5 = 0LL;
  v6 = SysCtxRegOpenKey(v5, v3, (__int64)a2, 0, 0x20019u, (__int64)&Handle);
  RegistryValues = v6;
  if ( v6 == -1073741772 )
  {
LABEL_5:
    RegistryValues = 0;
    goto LABEL_59;
  }
  if ( v6 >= 0 )
  {
    memset(v33, 0, sizeof(v33));
    v33[2] = L"ClassGuid";
    LODWORD(v33[4]) = 0x1000000;
    LODWORD(v33[1]) = 288;
    v33[3] = &UnicodeString;
    LODWORD(v33[15]) = 288;
    v33[9] = L"LocationPaths";
    LODWORD(v33[11]) = 117440512;
    v33[10] = &v29;
    v33[16] = L"Persist";
    v33[17] = &v27;
    LODWORD(v33[8]) = 304;
    LODWORD(v33[18]) = 0x4000000;
    RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, v33, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( !UnicodeString.Length && UnicodeString.Buffer )
        RtlFreeUnicodeString(&UnicodeString);
      if ( v29.Buffer && !PnpValidateMultiSzData(v29.Buffer, v29.Length) )
        RtlFreeUnicodeString(&v29);
      if ( v27 )
        goto LABEL_5;
      ZwClose(Handle);
      v9 = a1[1];
      Handle = 0LL;
      if ( *(_QWORD *)&PiPnpRtlCtx && (v10 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v11 = *(_QWORD *)(v10 + 8);
      else
        v11 = 0LL;
      LOBYTE(v8) = 1;
      RegRtlDeletePathInternal(v9, a2, v8, v11);
      v12 = (void *)a1[3];
      if ( v12 )
      {
        DestinationString = 0LL;
        if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
          ZwDeleteValueKey(v12, &DestinationString);
      }
      v13 = a1[2];
      if ( v13 && UnicodeString.Buffer )
      {
        v14 = 0LL;
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v14 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
        if ( (int)SysCtxRegOpenKey(v14, v13, (__int64)UnicodeString.Buffer, 0, 0xF003Fu, (__int64)&KeyHandle) >= 0 )
        {
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
            ZwDeleteValueKey(KeyHandle, &DestinationString);
          ZwClose(KeyHandle);
        }
        if ( *(_QWORD *)&PiPnpRtlCtx && (v15 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
          v16 = *(_QWORD *)(v15 + 8);
        else
          v16 = 0LL;
        RegRtlDeletePathInternal(a1[2], UnicodeString.Buffer, 0LL, v16);
      }
      Buffer = v29.Buffer;
      if ( v29.Buffer )
      {
        v18 = a1 + 4;
        if ( !a1[4] )
        {
          v19 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v19 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
          v20 = SysCtxRegOpenKey(v19, *a1, (__int64)L"Locations", 0, 0xF003Fu, (__int64)(a1 + 4));
          if ( v20 == -1073741772 )
          {
            *v18 = 0LL;
          }
          else if ( v20 < 0 )
          {
            RegistryValues = v20;
            goto LABEL_59;
          }
          Buffer = v29.Buffer;
          if ( !*v18 )
            goto LABEL_59;
        }
        while ( *Buffer )
        {
          v21 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v21 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
          if ( (int)SysCtxRegOpenKey(v21, *v18, (__int64)Buffer, 0, 0xF003Fu, (__int64)&v32) >= 0 )
          {
            DestinationString = 0LL;
            if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
              ZwDeleteValueKey(v32, &DestinationString);
            ZwClose(v32);
          }
          if ( *(_QWORD *)&PiPnpRtlCtx && (v22 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
            v23 = *(_QWORD *)(v22 + 8);
          else
            v23 = 0LL;
          RegRtlDeletePathInternal(*v18, Buffer, 0LL, v23);
          v24 = -1LL;
          do
            ++v24;
          while ( Buffer[v24] );
          Buffer += v24 + 1;
        }
      }
    }
  }
LABEL_59:
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v29);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegistryValues;
}
