void __fastcall UsbhGetRegUsbClassFlags(__int64 a1, __int64 a2)
{
  unsigned __int8 *v3; // rax
  unsigned int v4; // edi
  int v5; // esi
  int v6; // r12d
  wchar_t *Pool2; // rax
  wchar_t *v8; // rbx
  int v9; // r14d
  unsigned int v10; // esi
  wchar_t *v11; // rax
  wchar_t **v12; // rdi
  wchar_t **v13; // r12
  void (__fastcall *SystemRoutineAddress)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  wchar_t *v15; // rax
  wchar_t **v16; // r14
  void (__fastcall *v17)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  wchar_t *i; // rax
  int v19; // eax
  void (__fastcall *v20)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  int v21; // [rsp+28h] [rbp-59h]
  __int64 v22; // [rsp+28h] [rbp-59h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-49h] BYREF
  __int64 (__fastcall *v24)(int, int, int, int, __int64, __int64); // [rsp+48h] [rbp-39h] BYREF
  int v25; // [rsp+50h] [rbp-31h]
  wchar_t *v26; // [rsp+58h] [rbp-29h]
  wchar_t **v27; // [rsp+60h] [rbp-21h]
  int v28; // [rsp+68h] [rbp-19h]
  __int64 v29; // [rsp+70h] [rbp-11h]
  int v30; // [rsp+78h] [rbp-9h]
  __int64 v31; // [rsp+80h] [rbp-1h]
  int v32; // [rsp+88h] [rbp+7h]
  __int64 v33; // [rsp+90h] [rbp+Fh]
  int v34; // [rsp+E8h] [rbp+67h]

  v3 = (unsigned __int8 *)PdoExt(a2);
  v4 = v3[2438];
  v5 = v3[2439];
  v6 = v3[2440];
  if ( (unsigned __int8)(v4 - 1) <= 0xFDu )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, 84LL, 1112885333LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      v9 = v5;
      v34 = v5;
      v21 = v5;
      v10 = v4;
      if ( (RtlStringCbPrintfW(Pool2, 0x54uLL, L"usbflags\\CLASS_%02X_SUBCLASS_%02X_PROTOCOL_%02X", v4, v21, v6) & 0xC0000000) != 0xC0000000 )
      {
        v11 = GlobalClassValues;
        v12 = &GlobalClassValues;
        v13 = &GlobalClassValues;
        if ( GlobalClassValues )
        {
          do
          {
            v26 = v11;
            v28 = *((_DWORD *)v13 + 2);
            DestinationString = 0LL;
            v24 = UsbhQueryGlobalDeviceValue;
            v25 = 0;
            v27 = v13;
            v29 = 0LL;
            v30 = 0;
            v31 = 0LL;
            v32 = 0;
            v33 = 0LL;
            RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
            SystemRoutineAddress = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
            if ( !SystemRoutineAddress )
              SystemRoutineAddress = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
            SystemRoutineAddress(2LL, v8, &v24, a2, 0LL);
            v13 += 3;
            v11 = *v13;
          }
          while ( *v13 );
          v9 = v34;
        }
        LODWORD(v22) = v9;
        if ( (RtlStringCbPrintfW(v8, 0x54uLL, L"usbflags\\CLASS_%02X_SUBCLASS_%02X", v10, v22) & 0xC0000000) != 0xC0000000 )
        {
          v15 = GlobalClassValues;
          v16 = &GlobalClassValues;
          if ( GlobalClassValues )
          {
            do
            {
              v26 = v15;
              v28 = *((_DWORD *)v16 + 2);
              DestinationString = 0LL;
              v24 = UsbhQueryGlobalDeviceValue;
              v25 = 0;
              v27 = v16;
              v29 = 0LL;
              v30 = 0;
              v31 = 0LL;
              v32 = 0;
              v33 = 0LL;
              RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
              v17 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
              if ( !v17 )
                v17 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
              v17(2LL, v8, &v24, a2, 0LL);
              v16 += 3;
              v15 = *v16;
            }
            while ( *v16 );
          }
          if ( (RtlStringCbPrintfW(v8, 0x54uLL, L"usbflags\\CLASS_%02X", v10) & 0xC0000000) != 0xC0000000 )
          {
            for ( i = GlobalClassValues; i; i = *v12 )
            {
              v26 = i;
              v19 = *((_DWORD *)v12 + 2);
              v24 = UsbhQueryGlobalDeviceValue;
              v25 = 0;
              v27 = v12;
              v28 = v19;
              v29 = 0LL;
              v30 = 0;
              v31 = 0LL;
              v32 = 0;
              v33 = 0LL;
              DestinationString = 0LL;
              RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
              v20 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
              if ( !v20 )
                v20 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
              v20(2LL, v8, &v24, a2, 0LL);
              v12 += 3;
            }
          }
        }
      }
      ExFreePoolWithTag(v8, 0);
    }
  }
}
