/*
 * XREFs of CmpSetSystemBiosInformation @ 0x140A594A0
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x140A58C04 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14024FB10 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwMapViewOfSection @ 0x1403F9F20 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1403F9F60 (ZwUnmapViewOfSection.c)
 *     ZwSetValueKey @ 0x1403FA620 (ZwSetValueKey.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     RtlCompareUnicodeString @ 0x1405EE320 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406F6920 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     CmpGetBiosVersion @ 0x140A597C0 (CmpGetBiosVersion.c)
 *     CmpGetBiosDate @ 0x140A59980 (CmpGetBiosDate.c)
 *     CmpGetAcpiBiosVersion @ 0x140A59B9C (CmpGetAcpiBiosVersion.c)
 *     CmpGetRegistryValue @ 0x140A59C2C (CmpGetRegistryValue.c)
 */

void __fastcall CmpSetSystemBiosInformation(__int64 a1, void *a2, void *a3)
{
  unsigned int v4; // r13d
  __int64 v5; // r9
  _WORD *v6; // rsi
  __int64 v7; // r9
  _WORD *v8; // r14
  __int64 v9; // r12
  int i; // edi
  __int64 v11; // rdx
  PVOID v12; // rcx
  HANDLE v13; // r12
  unsigned int v14; // ebx
  char *v15; // rbx
  unsigned __int16 v16; // di
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h]
  UNICODE_STRING String2; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-50h]
  PVOID Data; // [rsp+B8h] [rbp-48h]
  HANDLE KeyHandle; // [rsp+C0h] [rbp-40h]
  CHAR SourceString[128]; // [rsp+D0h] [rbp-30h] BYREF

  v25 = a1;
  KeyHandle = a3;
  P = 0LL;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  BaseAddress = 0LL;
  ViewSize = 0x10000LL;
  SectionOffset.QuadPart = 983040LL;
  DestinationString = 0LL;
  v4 = 0;
  UnicodeString = 0LL;
  ValueName = 0LL;
  if ( ZwMapViewOfSection(
         a2,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0x10000uLL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0,
         4u) >= 0 )
  {
    Data = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
    LOBYTE(v5) = 1;
    v6 = Data;
    if ( (unsigned __int8)CmpGetBiosDate((char *)BaseAddress + 65525, 8LL, SourceString, v5) )
    {
      RtlInitAnsiString(&DestinationString, SourceString);
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"SystemBiosDate");
        if ( (int)CmpGetRegistryValue(a3) >= 0 )
        {
          v15 = (char *)P;
          if ( P )
          {
            String2.MaximumLength = *((_WORD *)P + 4);
            v16 = String2.MaximumLength - 2;
            String2.Buffer = (wchar_t *)((char *)P + 12);
            String2.Length = String2.MaximumLength - 2;
            if ( RtlCompareUnicodeString(&UnicodeString, &String2, 1u) )
            {
              RtlInitUnicodeString(&ValueName, L"OldSystemBiosDate");
              ZwSetValueKey(a3, &ValueName, 0, 1u, v15 + 12, v16 + 2);
            }
            ExFreePoolWithTag(v15, 0);
          }
        }
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    LOBYTE(v7) = 1;
    if ( (unsigned __int8)CmpGetBiosDate(BaseAddress, 0x10000LL, SourceString, v7) )
    {
      RtlInitUnicodeString(&ValueName, L"SystemBiosDate");
      RtlInitAnsiString(&DestinationString, SourceString);
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      {
        ZwSetValueKey(a3, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    v8 = v6;
    if ( v6 )
    {
      v9 = v25;
      for ( i = 0; ; ++i )
      {
        if ( i )
        {
          v11 = 0x10000LL;
          v12 = 0LL;
          if ( i == 1 )
            v12 = BaseAddress;
          else
            v11 = 0LL;
          if ( !(unsigned __int8)CmpGetBiosVersion(v12, v11, SourceString) )
          {
LABEL_16:
            v6 = Data;
            v13 = KeyHandle;
            if ( v4 )
            {
              *v8 = 0;
              RtlInitUnicodeString(&ValueName, L"SystemBiosVersion");
              ZwSetValueKey(v13, &ValueName, 0, 7u, v6, v4 + 2);
            }
            break;
          }
        }
        else if ( !(unsigned __int8)CmpGetAcpiBiosVersion(v9, SourceString) )
        {
          continue;
        }
        RtlInitAnsiString(&DestinationString, SourceString);
        if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
        {
          v14 = UnicodeString.Length + 2;
          memmove(v8, UnicodeString.Buffer, v14);
          v4 += v14;
          RtlFreeAnsiString(&UnicodeString);
          if ( (unsigned __int64)v4 + 260 > 0x1000 )
            goto LABEL_16;
          v8 = (_WORD *)((char *)v8 + v14);
        }
      }
    }
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
}
