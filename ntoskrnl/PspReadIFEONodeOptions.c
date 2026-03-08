/*
 * XREFs of PspReadIFEONodeOptions @ 0x140796300
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     RtlUnicodeStringToInteger @ 0x140751D60 (RtlUnicodeStringToInteger.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PspReadIFEONodeOptions(__int64 a1, void *a2, __int64 *a3)
{
  ULONG v5; // ebx
  __int128 *p_KeyValueInformation; // rsi
  NTSTATUS v8; // eax
  NTSTATUS v9; // edi
  ULONG Length; // edi
  void *Pool2; // rax
  void *v12; // r14
  NTSTATUS v13; // eax
  int v14; // ecx
  __int64 v15; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  ULONG Value[3]; // [rsp+34h] [rbp-3Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+60h] [rbp-10h]

  ResultLength = 0;
  v20 = 0;
  v5 = 0;
  Value[0] = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, L"NodeOptions") < 0 )
    return;
  p_KeyValueInformation = &KeyValueInformation;
  v8 = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = 0LL;
LABEL_11:
    v14 = *((_DWORD *)p_KeyValueInformation + 1);
    if ( ((v14 - 3) & 0xFFFFFFFB) == 0 )
      goto LABEL_14;
    if ( v14 == 4 )
    {
      if ( *((_DWORD *)p_KeyValueInformation + 2) == 4 )
      {
        ResultLength = 4;
        v5 = *((_DWORD *)p_KeyValueInformation + 3);
      }
      else
      {
        v9 = -1073741820;
      }
      goto LABEL_7;
    }
    if ( v14 == 1 )
    {
      if ( ((unsigned __int8)Value & 3) != 0 )
      {
        v9 = -2147483646;
      }
      else
      {
        ResultLength = 4;
        DestinationString.Buffer = (wchar_t *)p_KeyValueInformation + 6;
        DestinationString.Length = *((_WORD *)p_KeyValueInformation + 4);
        DestinationString.MaximumLength = *((_WORD *)p_KeyValueInformation + 4);
        v9 = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
        v5 = Value[0];
      }
    }
    else
    {
LABEL_14:
      v9 = -1073741788;
    }
LABEL_7:
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    if ( v9 >= 0 )
    {
      if ( (_BYTE)v5 )
      {
        if ( (unsigned __int8)v5 == 1 && v5 >> 8 < (unsigned __int16)KeNumberNodes && !*a3 )
        {
          v15 = KeNodeBlock[(unsigned __int64)v5 >> 8];
          if ( *(_DWORD *)(v15 + 16) )
            *a3 = v15;
        }
      }
      else if ( (v5 & 0xFFFFFF00) != 0 )
      {
        *(_DWORD *)(a1 + 1120) |= 0x100000u;
      }
    }
    return;
  }
  if ( v8 == -2147483643 )
  {
    while ( 1 )
    {
      Length = ResultLength;
      Pool2 = (void *)ExAllocatePool2(65LL, ResultLength, 1799976018LL);
      v12 = Pool2;
      if ( !Pool2 )
        break;
      p_KeyValueInformation = (__int128 *)Pool2;
      v13 = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, Pool2, Length, &ResultLength);
      v9 = v13;
      if ( v13 >= 0 )
        goto LABEL_11;
      if ( v13 != -2147483643 )
        goto LABEL_7;
      ExFreePoolWithTag(v12, 0);
    }
  }
}
