NTSTATUS __fastcall RtlQueryImageFileKeyOption(
        HANDLE KeyHandle,
        const WCHAR *a2,
        int a3,
        ULONG *a4,
        unsigned int a5,
        ULONG *a6)
{
  NTSTATUS result; // eax
  unsigned int v10; // esi
  __int128 *p_KeyValueInformation; // rdi
  NTSTATUS v12; // ebx
  ULONG Length; // ebx
  __int64 i; // rdx
  void *Pool2; // rax
  void *v16; // r12
  NTSTATUS v17; // eax
  int v18; // ecx
  size_t v19; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  ULONG *v22; // [rsp+48h] [rbp-28h]
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+60h] [rbp-10h]

  v22 = a6;
  ResultLength = 0;
  v24 = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result < 0 )
    return result;
  v10 = a5;
  if ( a5 < 8 )
  {
    p_KeyValueInformation = &KeyValueInformation;
    result = ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
    v12 = result;
    if ( result < 0 )
    {
      if ( result != -2147483643 )
        return result;
      Length = ResultLength;
      goto LABEL_7;
    }
    v16 = 0LL;
LABEL_14:
    if ( !a3 )
    {
      if ( *((_DWORD *)p_KeyValueInformation + 2) > a5 )
      {
        ResultLength = *((_DWORD *)p_KeyValueInformation + 2);
        goto LABEL_31;
      }
      a3 = *((_DWORD *)p_KeyValueInformation + 1);
      v10 = *((_DWORD *)p_KeyValueInformation + 2);
    }
    v18 = *((_DWORD *)p_KeyValueInformation + 1);
    if ( ((v18 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v18 == 4 )
      {
        if ( a3 != 4 )
          goto LABEL_55;
        if ( v10 == 4 && *((_DWORD *)p_KeyValueInformation + 2) == 4 )
        {
          ResultLength = 4;
          if ( a4 )
          {
            *a4 = *((_DWORD *)p_KeyValueInformation + 3);
            goto LABEL_25;
          }
          goto LABEL_31;
        }
LABEL_30:
        v12 = -1073741820;
        goto LABEL_11;
      }
      if ( v18 == 11 )
      {
        if ( a3 == 11 )
        {
          if ( v10 == 8 && *((_DWORD *)p_KeyValueInformation + 2) == 8 )
          {
            ResultLength = 8;
            if ( a4 )
            {
              *(_QWORD *)a4 = *(_QWORD *)((char *)p_KeyValueInformation + 12);
LABEL_25:
              if ( v22 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
                *v22 = ResultLength;
              goto LABEL_11;
            }
LABEL_31:
            v12 = -2147483643;
            goto LABEL_25;
          }
          goto LABEL_30;
        }
LABEL_55:
        v12 = -1073741788;
        goto LABEL_11;
      }
      if ( v18 != 1 )
      {
        v12 = -1073741788;
        goto LABEL_25;
      }
      if ( a3 == 4 )
      {
        if ( v10 == 4 )
        {
          if ( ((unsigned __int8)a4 & 3) == 0 )
          {
            ResultLength = 4;
            if ( a4 )
            {
              DestinationString.Buffer = (wchar_t *)p_KeyValueInformation + 6;
              DestinationString.Length = *((_WORD *)p_KeyValueInformation + 4);
              DestinationString.MaximumLength = *((_WORD *)p_KeyValueInformation + 4);
              v12 = RtlUnicodeStringToInteger(&DestinationString, 0, a4);
              goto LABEL_25;
            }
            goto LABEL_31;
          }
          v12 = -2147483646;
LABEL_11:
          if ( v16 )
            ExFreePoolWithTag(v16, 0);
          return v12;
        }
        goto LABEL_30;
      }
      v19 = *((unsigned int *)p_KeyValueInformation + 2);
      ResultLength = *((_DWORD *)p_KeyValueInformation + 2);
    }
    else
    {
      if ( a3 != v18 )
        goto LABEL_55;
      ResultLength = *((_DWORD *)p_KeyValueInformation + 2);
      if ( !a4 )
        goto LABEL_31;
      v19 = *((unsigned int *)p_KeyValueInformation + 2);
    }
    if ( (unsigned int)v19 <= v10 )
    {
      memmove(a4, (char *)p_KeyValueInformation + 12, v19);
      goto LABEL_25;
    }
    goto LABEL_31;
  }
  Length = a5 + 12;
LABEL_7:
  for ( i = Length; ; i = ResultLength )
  {
    Pool2 = (void *)ExAllocatePool2(65LL, i, 1799976018LL);
    v16 = Pool2;
    if ( !Pool2 )
      break;
    p_KeyValueInformation = (__int128 *)Pool2;
    v17 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, Length, &ResultLength);
    v12 = v17;
    if ( v17 >= 0 )
      goto LABEL_14;
    if ( v17 != -2147483643 )
      goto LABEL_11;
    ExFreePoolWithTag(v16, 0);
    Length = ResultLength;
  }
  return -1073741801;
}
