NTSTATUS __fastcall PspReadIFEOPerfOptions(HANDLE KeyHandle, __int64 a2)
{
  ULONG v2; // r12d
  __int128 *p_KeyValueInformation; // rsi
  NTSTATUS v6; // eax
  NTSTATUS v7; // edi
  void *Pool2; // r14
  int v9; // ecx
  NTSTATUS v10; // eax
  ULONG Length; // edi
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  ULONG Value[3]; // [rsp+34h] [rbp-3Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+60h] [rbp-10h]

  v2 = 0;
  Value[0] = 0;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"IoPriority", 4, (ULONG *)(a2 + 8), 4u, 0LL) >= 0 )
    *(_DWORD *)a2 |= 1u;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"PagePriority", 4, (ULONG *)(a2 + 12), 4u, 0LL) >= 0 )
    *(_DWORD *)a2 |= 2u;
  if ( RtlQueryImageFileKeyOption(KeyHandle, L"CpuPriorityClass", 4, (ULONG *)(a2 + 16), 4u, 0LL) >= 0 )
    *(_DWORD *)a2 |= 4u;
  ResultLength = 0;
  v17 = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, L"WorkingSetLimitInKB") >= 0 )
  {
    p_KeyValueInformation = &KeyValueInformation;
    v6 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength);
    v7 = v6;
    if ( v6 >= 0 )
    {
      Pool2 = 0LL;
LABEL_10:
      v9 = *((_DWORD *)p_KeyValueInformation + 1);
      if ( ((v9 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v9 == 4 )
        {
          if ( *((_DWORD *)p_KeyValueInformation + 2) == 4 )
          {
            ResultLength = 4;
            v2 = *((_DWORD *)p_KeyValueInformation + 3);
          }
          else
          {
            v7 = -1073741820;
          }
          goto LABEL_27;
        }
        if ( v9 == 1 )
        {
          if ( ((unsigned __int8)Value & 3) != 0 )
          {
            v7 = -2147483646;
          }
          else
          {
            ResultLength = 4;
            DestinationString.Buffer = (wchar_t *)p_KeyValueInformation + 6;
            DestinationString.Length = *((_WORD *)p_KeyValueInformation + 4);
            DestinationString.MaximumLength = *((_WORD *)p_KeyValueInformation + 4);
            v7 = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
            v2 = Value[0];
          }
          goto LABEL_27;
        }
      }
      v7 = -1073741788;
LABEL_27:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      if ( v7 >= 0 )
      {
        *(_DWORD *)(a2 + 4) |= 1u;
        *(_QWORD *)(a2 + 24) = (unsigned __int64)v2 >> 2;
      }
      goto LABEL_31;
    }
    if ( v6 == -2147483643 )
    {
      while ( 1 )
      {
        Length = ResultLength;
        Pool2 = (void *)ExAllocatePool2(65LL, ResultLength, 1799976018LL);
        if ( !Pool2 )
          break;
        p_KeyValueInformation = (__int128 *)Pool2;
        v10 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, Length, &ResultLength);
        v7 = v10;
        if ( v10 >= 0 )
          goto LABEL_10;
        if ( v10 != -2147483643 )
          goto LABEL_27;
        ExFreePoolWithTag(Pool2, 0);
      }
    }
  }
LABEL_31:
  result = RtlQueryImageFileKeyOption(KeyHandle, L"ExpectedConcurrencyCount", 4, (ULONG *)(a2 + 32), 4u, 0LL);
  if ( result >= 0 )
    *(_DWORD *)(a2 + 4) |= 2u;
  return result;
}
