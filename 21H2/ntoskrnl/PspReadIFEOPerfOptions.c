/*
 * XREFs of PspReadIFEOPerfOptions @ 0x14060D5B0
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlUnicodeStringToInteger @ 0x1405DE4B0 (RtlUnicodeStringToInteger.c)
 *     RtlQueryImageFileKeyOption @ 0x14060D7A0 (RtlQueryImageFileKeyOption.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PspReadIFEOPerfOptions(HANDLE KeyHandle, __int64 a2)
{
  ULONG v2; // r12d
  NTSTATUS inited; // ebx
  __int128 *p_KeyValueInformation; // rsi
  NTSTATUS v7; // eax
  void *v8; // r14
  int v9; // ecx
  ULONG Length; // ebx
  PVOID PoolWithQuotaTag; // rax
  NTSTATUS v12; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  ULONG Value[3]; // [rsp+34h] [rbp-3Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+60h] [rbp-10h]

  v2 = 0;
  Value[0] = 0;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 1u;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 2u;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 4u;
  ResultLength = 0;
  v17 = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, L"WorkingSetLimitInKB");
  if ( inited < 0 )
    goto LABEL_10;
  p_KeyValueInformation = &KeyValueInformation;
  v7 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x14u,
         &ResultLength);
  inited = v7;
  if ( v7 >= 0 )
  {
    v8 = 0LL;
LABEL_14:
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
          inited = -1073741820;
        }
LABEL_21:
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        goto LABEL_10;
      }
      if ( v9 != 1 )
      {
LABEL_24:
        inited = -1073741788;
        goto LABEL_21;
      }
      if ( ((unsigned __int8)Value & 3) != 0 )
      {
        inited = -2147483646;
        goto LABEL_21;
      }
      ResultLength = 4;
      DestinationString.Buffer = (wchar_t *)p_KeyValueInformation + 6;
      DestinationString.Length = *((_WORD *)p_KeyValueInformation + 4);
      DestinationString.MaximumLength = *((_WORD *)p_KeyValueInformation + 4);
      inited = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
    }
    else
    {
      if ( v9 != 4 )
        goto LABEL_24;
      ResultLength = *((_DWORD *)p_KeyValueInformation + 2);
      if ( *((_DWORD *)p_KeyValueInformation + 2) > 4u )
      {
        inited = -2147483643;
        goto LABEL_21;
      }
      memmove(Value, (char *)p_KeyValueInformation + 12, *((unsigned int *)p_KeyValueInformation + 2));
    }
    v2 = Value[0];
    goto LABEL_21;
  }
  if ( v7 != -2147483643 )
  {
LABEL_10:
    if ( inited >= 0 )
    {
      *(_DWORD *)(a2 + 4) |= 1u;
      *(_QWORD *)(a2 + 24) = (unsigned __int64)v2 >> 2;
    }
    return;
  }
  while ( 1 )
  {
    Length = ResultLength;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
    v8 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      break;
    p_KeyValueInformation = (__int128 *)PoolWithQuotaTag;
    v12 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            PoolWithQuotaTag,
            Length,
            &ResultLength);
    inited = v12;
    if ( v12 >= 0 )
      goto LABEL_14;
    if ( v12 != -2147483643 )
      goto LABEL_21;
    ExFreePoolWithTag(v8, 0);
  }
}
