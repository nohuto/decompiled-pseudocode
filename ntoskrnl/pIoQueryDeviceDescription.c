__int64 __fastcall pIoQueryDeviceDescription(unsigned int **a1, _OWORD *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  NTSTATUS appended; // ebx
  ULONG *v9; // rax
  ULONG v10; // esi
  unsigned int v11; // r12d
  __int128 v12; // xmm7
  ULONG *v13; // rax
  ULONG v14; // edi
  unsigned int v15; // r15d
  __int128 v16; // xmm6
  int v18; // [rsp+28h] [rbp-E0h]
  char v19; // [rsp+28h] [rbp-E0h]
  _QWORD Destination[3]; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  __int64 v23; // [rsp+88h] [rbp-80h]
  UNICODE_STRING String; // [rsp+90h] [rbp-78h] BYREF
  PVOID v25; // [rsp+A0h] [rbp-68h]
  PVOID P; // [rsp+A8h] [rbp-60h]
  PVOID v27[2]; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v28; // [rsp+C0h] [rbp-48h]
  PVOID v29[2]; // [rsp+C8h] [rbp-40h] BYREF
  PVOID v30; // [rsp+D8h] [rbp-30h]
  char v31; // [rsp+E0h] [rbp-28h] BYREF

  v5 = a5;
  *(_OWORD *)&Destination[1] = *a2;
  v28 = 0LL;
  v30 = 0LL;
  v23 = a5;
  String.MaximumLength = 28;
  Handle = 0LL;
  String.Buffer = (wchar_t *)&v31;
  KeyHandle = 0LL;
  P = 0LL;
  v25 = 0LL;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  *(_OWORD *)v27 = 0LL;
  *(_OWORD *)v29 = 0LL;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], CmTypeString[*a1[2]]);
    if ( appended >= 0 )
    {
      v9 = a1[3];
      if ( v9 )
      {
        v10 = *v9;
        v11 = *v9 + 1;
      }
      else
      {
        v19 = 0;
        appended = IopOpenRegistryKey(&Handle, 0LL, &Destination[1], 131097LL, v19);
        if ( appended < 0 )
          return (unsigned int)appended;
        appended = IopGetRegistryKeyInformation(Handle);
        ZwClose(Handle);
        Handle = 0LL;
        if ( appended < 0 )
          return (unsigned int)appended;
        v10 = 0;
        v11 = *((_DWORD *)P + 5);
        ExFreePoolWithTag(P, 0);
      }
      v12 = *(_OWORD *)&Destination[1];
      if ( v10 < v11 )
      {
        while ( 1 )
        {
          *(_OWORD *)&Destination[1] = v12;
          String.Length = 26;
          appended = RtlIntegerToUnicodeString(v10, 0xAu, &String);
          if ( appended < 0 )
            return (unsigned int)appended;
          appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
          if ( appended < 0 )
            return (unsigned int)appended;
          appended = RtlAppendUnicodeStringToString((PUNICODE_STRING)&Destination[1], &String);
          if ( appended < 0 )
            return (unsigned int)appended;
          LOBYTE(v18) = 0;
          appended = IopOpenRegistryKey(&Handle, 0LL, &Destination[1], 131097LL, v18);
          if ( appended >= 0 )
          {
            appended = IopGetRegistryValues(Handle);
            ZwClose(Handle);
            Handle = 0LL;
            if ( appended >= 0 )
              break;
          }
LABEL_30:
          if ( ++v10 >= v11 )
            return (unsigned int)appended;
        }
        if ( !a1[4] )
        {
          appended = ((__int64 (__fastcall *)(unsigned int *, _QWORD *, _QWORD, _QWORD, __int64, _DWORD, ULONG, PVOID *, _DWORD, _DWORD, _QWORD))a1[6])(
                       a1[7],
                       &Destination[1],
                       **a1,
                       a4,
                       v5,
                       *a1[2],
                       v10,
                       v27,
                       0,
                       0,
                       0LL);
          goto LABEL_23;
        }
        appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], CmTypeString[*a1[4]]);
          if ( appended >= 0 )
          {
            v13 = a1[5];
            if ( v13 )
            {
              v14 = *v13;
              v15 = *v13 + 1;
            }
            else
            {
              LOBYTE(v18) = 0;
              if ( (int)IopOpenRegistryKey(&KeyHandle, 0LL, &Destination[1], 131097LL, v18) < 0
                || (appended = IopGetRegistryKeyInformation(KeyHandle), ZwClose(KeyHandle),
                                                                        KeyHandle = 0LL,
                                                                        appended < 0) )
              {
                appended = 0;
                goto LABEL_23;
              }
              v14 = 0;
              v15 = *((_DWORD *)v25 + 5);
              ExFreePoolWithTag(v25, 0);
              v25 = 0LL;
            }
            v16 = *(_OWORD *)&Destination[1];
            while ( v14 < v15 )
            {
              *(_OWORD *)&Destination[1] = v16;
              String.Length = 26;
              appended = RtlIntegerToUnicodeString(v14, 0xAu, &String);
              if ( appended < 0 )
                break;
              appended = RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L"\\");
              if ( appended < 0 )
                break;
              appended = RtlAppendUnicodeStringToString((PUNICODE_STRING)&Destination[1], &String);
              if ( appended < 0 )
                break;
              LOBYTE(v18) = 0;
              appended = IopOpenRegistryKey(&KeyHandle, 0LL, &Destination[1], 131097LL, v18);
              if ( appended >= 0 )
              {
                appended = IopGetRegistryValues(KeyHandle);
                ZwClose(KeyHandle);
                KeyHandle = 0LL;
                if ( appended >= 0 )
                {
                  appended = ((__int64 (__fastcall *)(unsigned int *, _QWORD *, _QWORD, _QWORD, __int64, _DWORD, ULONG, PVOID *, _DWORD, ULONG, PVOID *))a1[6])(
                               a1[7],
                               &Destination[1],
                               **a1,
                               a4,
                               v23,
                               *a1[2],
                               v10,
                               v27,
                               *a1[4],
                               v14,
                               v29);
                  if ( v29[0] )
                  {
                    ExFreePoolWithTag(v29[0], 0);
                    v29[0] = 0LL;
                  }
                  if ( v29[1] )
                  {
                    ExFreePoolWithTag(v29[1], 0);
                    v29[1] = 0LL;
                  }
                  if ( v30 )
                  {
                    ExFreePoolWithTag(v30, 0);
                    v30 = 0LL;
                  }
                  if ( appended < 0 )
                    break;
                }
              }
              ++v14;
            }
            v5 = v23;
          }
        }
LABEL_23:
        if ( v27[0] )
        {
          ExFreePoolWithTag(v27[0], 0);
          v27[0] = 0LL;
        }
        if ( v27[1] )
        {
          ExFreePoolWithTag(v27[1], 0);
          v27[1] = 0LL;
        }
        if ( v28 )
        {
          ExFreePoolWithTag(v28, 0);
          v28 = 0LL;
        }
        if ( appended < 0 )
          return (unsigned int)appended;
        goto LABEL_30;
      }
    }
  }
  return (unsigned int)appended;
}
