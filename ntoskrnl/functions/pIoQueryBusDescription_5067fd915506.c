__int64 __fastcall pIoQueryBusDescription(unsigned int **a1, UNICODE_STRING *a2, void *a3, unsigned int *a4, char a5)
{
  __int64 result; // rax
  PVOID v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  ULONG v11; // r14d
  unsigned __int16 *Pool2; // rsi
  ULONG v13; // r12d
  NTSTATUS RegistryValues; // ebx
  unsigned int *v15; // rcx
  PVOID v16; // r8
  unsigned int *v17; // rcx
  unsigned int v18; // r9d
  unsigned int *v19; // rax
  NTSTATUS v20; // eax
  int Length; // [rsp+20h] [rbp-B1h]
  HANDLE Handle; // [rsp+60h] [rbp-71h] BYREF
  PVOID P; // [rsp+68h] [rbp-69h]
  ULONG ResultLength[4]; // [rsp+70h] [rbp-61h] BYREF
  UNICODE_STRING Destination; // [rsp+80h] [rbp-51h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-41h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-39h] BYREF
  UNICODE_STRING *v28; // [rsp+A8h] [rbp-29h]
  UNICODE_STRING v29; // [rsp+B0h] [rbp-21h] BYREF
  PVOID v30[2]; // [rsp+C0h] [rbp-11h] BYREF
  PVOID v31; // [rsp+D0h] [rbp-1h]

  v28 = a2;
  KeyHandle = a3;
  v31 = 0LL;
  Handle = 0LL;
  P = 0LL;
  ResultLength[0] = 0;
  Source = 0LL;
  Destination = 0LL;
  *(_OWORD *)v30 = 0LL;
  result = IopGetRegistryKeyInformation(a3);
  if ( (int)result >= 0 )
  {
    v8 = P;
    v9 = *((_DWORD *)P + 6);
    v10 = v9 + 32;
    if ( v9 + 32 < v9 )
    {
      return 3221225621LL;
    }
    else
    {
      v11 = v9 + 32;
      P = (PVOID)v10;
      Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, v10, 1112239945LL);
      ExFreePoolWithTag(v8, 0);
      if ( Pool2 )
      {
        v13 = 0;
        RegistryValues = 0;
        do
        {
          v15 = a1[1];
          if ( v15 && *v15 == *a4 )
            break;
          RegistryValues = ZwEnumerateKey(KeyHandle, v13, KeyBasicInformation, Pool2, v11, ResultLength);
          if ( RegistryValues < 0 )
            break;
          if ( !a5
            || !wcsncmp(Pool2 + 8, L"MultifunctionAdapter", (unsigned __int64)*((unsigned int *)Pool2 + 3) >> 1)
            || !wcsncmp(Pool2 + 8, L"EisaAdapter", (unsigned __int64)*((unsigned int *)Pool2 + 3) >> 1)
            || !wcsncmp(Pool2 + 8, L"TcAdapter", (unsigned __int64)*((unsigned int *)Pool2 + 3) >> 1) )
          {
            Source.Buffer = Pool2 + 8;
            Source.Length = Pool2[6];
            Source.MaximumLength = Pool2[6];
            LOBYTE(Length) = 0;
            if ( (int)IopOpenRegistryKey(&Handle, KeyHandle, &Source, 131097LL, Length) >= 0 )
            {
              Destination = *v28;
              RtlAppendUnicodeToString(&Destination, L"\\");
              RtlAppendUnicodeStringToString(&Destination, &Source);
              if ( a5 )
                goto LABEL_27;
              RegistryValues = IopGetRegistryValues(Handle);
              if ( RegistryValues >= 0 )
              {
                v16 = v30[1];
                if ( v30[1] )
                {
                  if ( *((_DWORD *)v30[1] + 3) )
                  {
                    if ( *(_DWORD *)((char *)v30[1] + *((unsigned int *)v30[1] + 2)) == **a1 )
                    {
                      v18 = *a4 + 1;
                      *a4 = v18;
                      v19 = a1[1];
                      if ( !v19 || *v19 == v18 )
                      {
                        if ( a1[2] )
                        {
                          v29 = Destination;
                          v20 = pIoQueryDeviceDescription(a1, &v29, (__int64)v16, v18, (__int64)v30);
                        }
                        else
                        {
                          v20 = ((__int64 (__fastcall *)(unsigned int *, UNICODE_STRING *, _QWORD))a1[6])(
                                  a1[7],
                                  &Destination,
                                  **a1);
                        }
                        v16 = v30[1];
                        RegistryValues = v20;
                      }
                    }
                  }
                }
                if ( v30[0] )
                {
                  ExFreePoolWithTag(v30[0], 0);
                  v16 = v30[1];
                  v30[0] = 0LL;
                }
                if ( v16 )
                {
                  ExFreePoolWithTag(v16, 0);
                  v30[1] = 0LL;
                }
                if ( v31 )
                {
                  ExFreePoolWithTag(v31, 0);
                  v31 = 0LL;
                }
              }
              v17 = a1[1];
              if ( !v17 || *v17 != *a4 )
              {
LABEL_27:
                v29 = Destination;
                RegistryValues = pIoQueryBusDescription(
                                   (_DWORD)a1,
                                   (unsigned int)&v29,
                                   (_DWORD)Handle,
                                   (_DWORD)a4,
                                   a5 == 0);
                if ( RegistryValues == -2147483622 )
                  RegistryValues = 0;
              }
              ZwClose(Handle);
              Handle = 0LL;
            }
          }
          v11 = (unsigned int)P;
          ++v13;
        }
        while ( RegistryValues >= 0 );
        ExFreePoolWithTag(Pool2, 0);
        return (unsigned int)RegistryValues;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
