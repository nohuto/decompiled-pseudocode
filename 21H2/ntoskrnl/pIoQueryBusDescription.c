/*
 * XREFs of pIoQueryBusDescription @ 0x1406DE494
 * Callers:
 *     IoQueryDeviceDescription @ 0x1406DDED0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1406DE494 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopGetRegistryKeyInformation @ 0x14067A3F4 (IopGetRegistryKeyInformation.c)
 *     pIoQueryDeviceDescription @ 0x1406DE008 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1406DE494 (pIoQueryBusDescription.c)
 *     IopOpenRegistryKey @ 0x1406DE960 (IopOpenRegistryKey.c)
 *     IopGetRegistryValues @ 0x1406DE9B8 (IopGetRegistryValues.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall pIoQueryBusDescription(unsigned int **a1, UNICODE_STRING *a2, void *a3, unsigned int *a4, char a5)
{
  NTSTATUS RegistryValues; // ebx
  NTSTATUS result; // eax
  PVOID v9; // r14
  unsigned int v10; // eax
  ULONG v11; // r13d
  unsigned __int16 *Pool2; // rdi
  ULONG v13; // r12d
  unsigned int *v14; // rcx
  PVOID v15; // r8
  unsigned int *v16; // rcx
  unsigned int v17; // r9d
  unsigned int *v18; // rax
  NTSTATUS DeviceDescription; // eax
  int Length; // [rsp+20h] [rbp-A1h]
  HANDLE Handle; // [rsp+60h] [rbp-61h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-59h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-51h] BYREF
  UNICODE_STRING Destination; // [rsp+80h] [rbp-41h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-31h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-29h] BYREF
  UNICODE_STRING *v27; // [rsp+A8h] [rbp-19h]
  PVOID v28[2]; // [rsp+B0h] [rbp-11h] BYREF
  PVOID v29; // [rsp+C0h] [rbp-1h]

  v27 = a2;
  KeyHandle = a3;
  v29 = 0LL;
  RegistryValues = 0;
  Handle = 0LL;
  P[0] = 0LL;
  ResultLength = 0;
  Source = 0LL;
  Destination = 0LL;
  *(_OWORD *)v28 = 0LL;
  result = IopGetRegistryKeyInformation(a3, P);
  if ( result >= 0 )
  {
    v9 = P[0];
    v10 = *((_DWORD *)P[0] + 6);
    v11 = v10 + 32;
    if ( v10 + 32 < v10 )
    {
      return -1073741675;
    }
    else
    {
      Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, v11, 1112239945LL);
      ExFreePoolWithTag(v9, 0);
      if ( Pool2 )
      {
        v13 = 0;
        do
        {
          v14 = a1[1];
          if ( v14 && *v14 == *a4 )
            break;
          RegistryValues = ZwEnumerateKey(KeyHandle, v13, KeyBasicInformation, Pool2, v11, &ResultLength);
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
              Destination = *v27;
              RtlAppendUnicodeToString(&Destination, L"\\");
              RtlAppendUnicodeStringToString(&Destination, &Source);
              if ( a5 )
                goto LABEL_27;
              RegistryValues = IopGetRegistryValues(Handle);
              if ( RegistryValues >= 0 )
              {
                v15 = v28[1];
                if ( v28[1] )
                {
                  if ( *((_DWORD *)v28[1] + 3) )
                  {
                    if ( *(_DWORD *)((char *)v28[1] + *((unsigned int *)v28[1] + 2)) == **a1 )
                    {
                      v17 = *a4 + 1;
                      *a4 = v17;
                      v18 = a1[1];
                      if ( !v18 || *v18 == v17 )
                      {
                        if ( a1[2] )
                        {
                          *(UNICODE_STRING *)P = Destination;
                          DeviceDescription = pIoQueryDeviceDescription(a1, P, (__int64)v15, v17, (__int64)v28);
                        }
                        else
                        {
                          DeviceDescription = ((__int64 (__fastcall *)(unsigned int *, UNICODE_STRING *, _QWORD))a1[6])(
                                                a1[7],
                                                &Destination,
                                                **a1);
                        }
                        v15 = v28[1];
                        RegistryValues = DeviceDescription;
                      }
                    }
                  }
                }
                if ( v28[0] )
                {
                  ExFreePoolWithTag(v28[0], 0);
                  v15 = v28[1];
                  v28[0] = 0LL;
                }
                if ( v15 )
                {
                  ExFreePoolWithTag(v15, 0);
                  v28[1] = 0LL;
                }
                if ( v29 )
                {
                  ExFreePoolWithTag(v29, 0);
                  v29 = 0LL;
                }
              }
              v16 = a1[1];
              if ( !v16 || *v16 != *a4 )
              {
LABEL_27:
                *(UNICODE_STRING *)P = Destination;
                RegistryValues = pIoQueryBusDescription(
                                   (_DWORD)a1,
                                   (unsigned int)P,
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
          ++v13;
        }
        while ( RegistryValues >= 0 );
        ExFreePoolWithTag(Pool2, 0);
        return RegistryValues;
      }
      else
      {
        return -1073741670;
      }
    }
  }
  return result;
}
