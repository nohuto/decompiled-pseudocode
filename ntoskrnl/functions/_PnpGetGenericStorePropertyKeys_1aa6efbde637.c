signed int __fastcall PnpGetGenericStorePropertyKeys(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  char v7; // bl
  const WCHAR *v8; // rdi
  __int64 v9; // r11
  signed int result; // eax
  int i; // r13d
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r15d
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // edi
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // [rsp+28h] [rbp-D8h]
  unsigned int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Value; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v31; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v34; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h]
  GUID Guid; // [rsp+90h] [rbp-70h] BYREF
  WCHAR v38[16]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR SourceString[40]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v40[176]; // [rsp+110h] [rbp+10h] BYREF

  v7 = 0;
  v34 = a3;
  v8 = a3;
  *a7 = 0;
  v9 = a2;
  v36 = a5;
  KeyHandle = 0LL;
  v31 = 0LL;
  Handle = 0LL;
  v28 = 0;
  Value = 0;
  Guid = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (result = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength), result >= 0) )
  {
    result = PnpOpenPropertiesKey(a1, v9, 0LL, 9, 0, v25, &KeyHandle);
    if ( result == -1073741772 )
      return 0;
    if ( result >= 0 )
    {
      for ( i = 0; ; i = pcchLength )
      {
        while ( 1 )
        {
          do
          {
            v27 = 39;
            v13 = RegRtlEnumKey(KeyHandle);
            LODWORD(pcchLength) = ++i;
          }
          while ( v13 == -1073741789 );
          if ( v13 )
          {
            ZwClose(KeyHandle);
            return a6 < *a7 ? 0xC0000023 : 0;
          }
          if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
            && RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
          {
            v14 = 0LL;
            if ( a1 )
              v14 = *(_QWORD *)(a1 + 224);
            if ( (int)SysCtxRegOpenKey(v14, (__int64)KeyHandle, (__int64)SourceString, 0, 9u, (__int64)&v31) >= 0 )
              break;
          }
        }
        v15 = 0;
        while ( 1 )
        {
          do
          {
            v27 = 9;
            v16 = RegRtlEnumKey(v31);
            ++v15;
          }
          while ( v16 == -1073741789 );
          if ( v16 )
            break;
          if ( RtlInitUnicodeStringEx(&DestinationString, v38) >= 0
            && RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) >= 0 )
          {
            v17 = 0LL;
            if ( a1 )
              v17 = *(_QWORD *)(a1 + 224);
            if ( (int)SysCtxRegOpenKey(v17, (__int64)v31, (__int64)v38, 0, 1u, (__int64)&Handle) >= 0 )
            {
              if ( a4 )
              {
                v19 = 0;
                do
                {
                  v27 = 85;
                  v20 = PnpCtxRegEnumValue(v18, Handle, v19++, v40, &v27, &v28, 0LL, 0LL);
                }
                while ( v20 == -1073741789 );
                v8 = v34;
                v21 = v20 == 0;
              }
              else
              {
                v27 = 0;
                v24 = RegRtlQueryValue(Handle, v8, &v28, 0LL, &v27);
                if ( !v24 )
                {
LABEL_27:
                  v7 = 1;
                  goto LABEL_28;
                }
                v21 = v24 == -1073741789;
              }
              if ( v21 )
                goto LABEL_27;
LABEL_28:
              ZwClose(Handle);
              v21 = v7 == 0;
              v7 = 0;
              if ( !v21 )
              {
                v22 = *a7;
                if ( (unsigned int)v22 < a6 )
                {
                  v23 = v36;
                  *(GUID *)(v36 + 20 * v22) = Guid;
                  *(_DWORD *)(v23 + 20LL * *a7 + 16) = Value;
                }
                ++*a7;
                v7 = 0;
              }
            }
          }
        }
        ZwClose(v31);
      }
    }
  }
  return result;
}
