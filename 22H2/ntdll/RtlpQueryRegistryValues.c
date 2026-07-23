/*
 * XREFs of RtlpQueryRegistryValues @ 0x180045B3C
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x180046F54 (RtlpFindRegTziForCurrentYear.c)
 *     RtlQueryRegistryValuesEx @ 0x180047110 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckPortableOperatingSystem @ 0x180047C50 (RtlCheckPortableOperatingSystem.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x180047EA4 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlQueryRegistryValues @ 0x1800EE750 (RtlQueryRegistryValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpGetRegistryHandle @ 0x18004591C (RtlpGetRegistryHandle.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180045F2C (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180045FC4 (RtlpCallQueryRegistryRoutine.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenKey @ 0x18009D720 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18009D740 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x18009D7C0 (NtQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x18009EFB0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpQueryRegistryValues(int a1, const WCHAR *a2, __int64 a3, __int64 a4, PVOID Environment, char a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rdi
  NTSTATUS v14; // ebx
  ULONG Length; // r13d
  int v16; // eax
  const WCHAR *v17; // rdx
  int v18; // r14d
  int v19; // eax
  int v20; // eax
  int v21; // r15d
  ULONG i; // r14d
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  unsigned __int32 v26; // [rsp+48h] [rbp-49h]
  NTSTATUS v27; // [rsp+48h] [rbp-49h]
  NTSTATUS v28; // [rsp+48h] [rbp-49h]
  ULONG ResultLength; // [rsp+4Ch] [rbp-45h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-41h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-31h] BYREF
  _UNICODE_STRING ValueName; // [rsp+68h] [rbp-29h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF

  v6 = a4;
  result = RtlpGetRegistryHandle(a1, a2, 0, &Handle);
  v26 = result;
  if ( (int)result >= 0 )
  {
    v11 = a1 & 0x40000000;
    if ( v11 )
    {
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, a2);
    }
    RegionSize = 4096LL;
    v12 = RtlpAllocDeallocQueryBuffer(&RegionSize);
    v13 = v12;
    if ( v12 )
    {
      v14 = v26;
      *(_DWORD *)(v12 + 8) = 0;
      Length = RegionSize - 2;
      KeyHandle = Handle;
LABEL_6:
      if ( *(_QWORD *)a3 || (*(_BYTE *)(a3 + 8) & 0x21) != 0 )
      {
        v16 = *(_DWORD *)(a3 + 8);
        if ( (v16 & 0x20) == 0 || *(_QWORD *)(a3 + 16) && (v16 & 1) == 0 && !*(_QWORD *)a3 )
        {
          if ( (v16 & 3) != 0 && KeyHandle != Handle )
          {
            NtClose(KeyHandle);
            KeyHandle = Handle;
            v16 = *(_DWORD *)(a3 + 8);
          }
          v17 = *(const WCHAR **)(a3 + 16);
          if ( (v16 & 1) == 0 )
          {
            if ( v17 )
            {
              RtlInitUnicodeString(&ValueName, v17);
              v18 = 0;
              while ( 1 )
              {
                v19 = v18++;
                if ( v19 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1276);
                  goto LABEL_28;
                }
                v14 = NtQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, (PVOID)v13, Length, &ResultLength);
                if ( v14 == -2147483643 )
                  v14 = -1073741789;
                v27 = v14;
                if ( v14 < 0 )
                {
                  if ( v14 == -1073741772 )
                  {
                    *(_DWORD *)(v13 + 4) = 0;
                    *(_DWORD *)(v13 + 12) = 0;
                    ResultLength = Length;
                    v14 = RtlpCallQueryRegistryRoutine((int)KeyHandle, a3, v13, (int)&ResultLength, v6, Environment, a6);
                    v27 = v14;
                  }
                  if ( v14 != -1073741789 )
                    goto LABEL_26;
                }
                else
                {
                  if ( *(_DWORD *)(v13 + 4) == 7 )
                  {
                    *(_WORD *)(ResultLength + v13) = 0;
                    *(_DWORD *)(v13 + 12) += 2;
                  }
                  ResultLength = Length;
                  v20 = RtlpCallQueryRegistryRoutine((int)KeyHandle, a3, v13, (int)&ResultLength, v6, Environment, a6);
                  v27 = v20;
                  v14 = v20;
                  if ( v20 != -1073741789 )
                  {
                    if ( v20 < 0 )
                      goto LABEL_28;
                    if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                      ZwDeleteValueKey(KeyHandle, &ValueName);
LABEL_26:
                    if ( v14 >= 0 )
                    {
                      a3 += 56LL;
                      goto LABEL_6;
                    }
                    goto LABEL_28;
                  }
                }
                RegionSize = ResultLength + 10LL;
                v23 = RtlpAllocDeallocQueryBuffer(&RegionSize);
                v14 = v27;
                v13 = v23;
                if ( !v23 )
                  goto LABEL_28;
                *(_DWORD *)(v23 + 8) = 0;
                Length = RegionSize - 2;
              }
            }
            if ( (v16 & 8) != 0 )
            {
              v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      v6,
                      *(_QWORD *)(a3 + 24));
              goto LABEL_26;
            }
            goto LABEL_42;
          }
          if ( v17 )
          {
            RtlInitUnicodeString(&DestinationString, v17);
            ObjectAttributes.RootDirectory = Handle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v14 = NtOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
            if ( v14 < 0 )
              goto LABEL_28;
            if ( !*(_QWORD *)a3 )
              goto LABEL_26;
LABEL_42:
            v21 = 0;
            for ( i = 0; ; ++i )
            {
              v14 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v13, Length, &ResultLength);
              if ( v14 == -2147483643 )
                v14 = -1073741789;
              v28 = v14;
              if ( v14 == -2147483622 )
              {
                if ( i || (v14 = -1073741772, (*(_BYTE *)(a3 + 8) & 4) == 0) )
                  v14 = 0;
                goto LABEL_49;
              }
              if ( v14 >= 0 )
              {
                ResultLength = Length;
                v14 = RtlpCallQueryRegistryRoutine((int)KeyHandle, a3, v13, (int)&ResultLength, a4, Environment, a6);
                v28 = v14;
              }
              if ( v14 == -1073741789 )
              {
                RegionSize = ResultLength + 10LL;
                v24 = RtlpAllocDeallocQueryBuffer(&RegionSize);
                v13 = v24;
                if ( !v24 )
                {
                  v14 = v28;
                  goto LABEL_49;
                }
                *(_DWORD *)(v24 + 8) = 0;
                --i;
                v25 = v21;
                Length = RegionSize - 2;
                ++v21;
                if ( v25 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
                  v14 = v28;
LABEL_49:
                  v6 = a4;
                  goto LABEL_26;
                }
              }
              else
              {
                if ( v14 < 0 )
                  goto LABEL_28;
                v21 = 0;
                if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                {
                  ValueName.Buffer = (wchar_t *)(v13 + 20);
                  ValueName.Length = *(_WORD *)(v13 + 16);
                  ValueName.MaximumLength = *(_WORD *)(v13 + 16);
                  if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
                    --i;
                }
              }
            }
          }
        }
        v14 = -1073741811;
      }
LABEL_28:
      if ( Handle && !v11 )
        NtClose(Handle);
      if ( KeyHandle )
      {
        if ( KeyHandle != Handle )
          NtClose(KeyHandle);
      }
      RtlpAllocDeallocQueryBuffer(0LL);
      return (unsigned int)v14;
    }
    else
    {
      if ( !v11 )
        NtClose(Handle);
      return v26;
    }
  }
  return result;
}
