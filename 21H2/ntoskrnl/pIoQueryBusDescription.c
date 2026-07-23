/*
 * XREFs of pIoQueryBusDescription @ 0x14078B2C4
 * Callers:
 *     IoQueryDeviceDescription @ 0x14078B1B0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14078B2C4 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403D41B0 (wcsncmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IopOpenRegistryKey @ 0x140769C64 (IopOpenRegistryKey.c)
 *     IopGetRegistryKeyInformation @ 0x14076A7A4 (IopGetRegistryKeyInformation.c)
 *     pIoQueryDeviceDescription @ 0x14078AD24 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14078B2C4 (pIoQueryBusDescription.c)
 *     IopGetRegistryValues @ 0x14078B634 (IopGetRegistryValues.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall pIoQueryBusDescription(unsigned int **a1, UNICODE_STRING *a2, void *a3, unsigned int *a4, char a5)
{
  NTSTATUS RegistryValues; // ebx
  NTSTATUS result; // eax
  PVOID v9; // r14
  unsigned int v10; // eax
  ULONG Length; // r12d
  unsigned __int16 *PoolWithTag; // rdi
  ULONG v13; // r13d
  unsigned int *v14; // rcx
  PVOID v15; // r8
  unsigned int *v16; // rcx
  unsigned int v17; // r9d
  unsigned int *v18; // rax
  NTSTATUS DeviceDescription; // eax
  HANDLE Handle; // [rsp+60h] [rbp-61h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-59h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-51h] BYREF
  UNICODE_STRING Destination; // [rsp+80h] [rbp-41h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-31h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-29h] BYREF
  UNICODE_STRING *v26; // [rsp+A8h] [rbp-19h]
  PVOID v27[2]; // [rsp+B0h] [rbp-11h] BYREF
  PVOID v28; // [rsp+C0h] [rbp-1h]

  v26 = a2;
  KeyHandle = a3;
  v28 = 0LL;
  RegistryValues = 0;
  Handle = 0LL;
  P[0] = 0LL;
  ResultLength = 0;
  Source = 0LL;
  Destination = 0LL;
  *(_OWORD *)v27 = 0LL;
  result = IopGetRegistryKeyInformation(a3, P);
  if ( result >= 0 )
  {
    v9 = P[0];
    v10 = *((_DWORD *)P[0] + 6);
    Length = v10 + 32;
    if ( v10 + 32 < v10 )
    {
      return -1073741675;
    }
    else
    {
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length, 0x424B6F49u);
      ExFreePoolWithTag(v9, 0);
      if ( PoolWithTag )
      {
        v13 = 0;
        do
        {
          v14 = a1[1];
          if ( v14 && *v14 == *a4 )
            break;
          RegistryValues = ZwEnumerateKey(KeyHandle, v13, KeyBasicInformation, PoolWithTag, Length, &ResultLength);
          if ( RegistryValues < 0 )
            break;
          if ( !a5
            || !wcsncmp(
                  PoolWithTag + 8,
                  L"MultifunctionAdapter",
                  (unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1)
            || !wcsncmp(PoolWithTag + 8, L"EisaAdapter", (unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1)
            || !wcsncmp(PoolWithTag + 8, L"TcAdapter", (unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1) )
          {
            Source.Buffer = PoolWithTag + 8;
            Source.Length = PoolWithTag[6];
            Source.MaximumLength = PoolWithTag[6];
            if ( IopOpenRegistryKey(&Handle, KeyHandle, &Source, 0x20019u, 0) >= 0 )
            {
              Destination = *v26;
              RtlAppendUnicodeToString(&Destination, L"\\");
              RtlAppendUnicodeStringToString(&Destination, &Source);
              if ( a5 )
                goto LABEL_21;
              RegistryValues = IopGetRegistryValues(Handle);
              if ( RegistryValues >= 0 )
              {
                v15 = v27[1];
                if ( v27[1] )
                {
                  if ( *((_DWORD *)v27[1] + 3) )
                  {
                    if ( *(_DWORD *)((char *)v27[1] + *((unsigned int *)v27[1] + 2)) == **a1 )
                    {
                      v17 = *a4 + 1;
                      *a4 = v17;
                      v18 = a1[1];
                      if ( !v18 || *v18 == v17 )
                      {
                        if ( a1[2] )
                        {
                          *(UNICODE_STRING *)P = Destination;
                          DeviceDescription = pIoQueryDeviceDescription(a1, P, (__int64)v15, v17, (__int64)v27);
                        }
                        else
                        {
                          DeviceDescription = ((__int64 (__fastcall *)(unsigned int *, UNICODE_STRING *, _QWORD))a1[6])(
                                                a1[7],
                                                &Destination,
                                                **a1);
                        }
                        v15 = v27[1];
                        RegistryValues = DeviceDescription;
                      }
                    }
                  }
                }
                if ( v27[0] )
                {
                  ExFreePoolWithTag(v27[0], 0);
                  v15 = v27[1];
                  v27[0] = 0LL;
                }
                if ( v15 )
                {
                  ExFreePoolWithTag(v15, 0);
                  v27[1] = 0LL;
                }
                if ( v28 )
                {
                  ExFreePoolWithTag(v28, 0);
                  v28 = 0LL;
                }
              }
              v16 = a1[1];
              if ( !v16 || *v16 != *a4 )
              {
LABEL_21:
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
        ExFreePoolWithTag(PoolWithTag, 0);
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
