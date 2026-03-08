/*
 * XREFs of PspIsDfssEnabled @ 0x140812B34
 * Callers:
 *     PsBootPhaseComplete @ 0x140812760 (PsBootPhaseComplete.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     PspReadDfssConfigurationValues @ 0x1405A12D4 (PspReadDfssConfigurationValues.c)
 *     RtlUnicodeStringToInteger @ 0x140751D60 (RtlUnicodeStringToInteger.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char PspIsDfssEnabled()
{
  ULONG v0; // r15d
  char v1; // r14
  unsigned int v2; // r12d
  HANDLE v3; // r13
  NTSTATUS inited; // ebx
  __int128 *p_KeyValueInformation; // rdi
  NTSTATUS v6; // eax
  ULONG Length; // ebx
  void *Pool2; // rax
  void *v10; // rsi
  NTSTATUS v11; // eax
  int v12; // ecx
  ULONG ResultLength; // [rsp+38h] [rbp-49h] BYREF
  ULONG Value[3]; // [rsp+3Ch] [rbp-45h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-21h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+Fh] BYREF
  int v19; // [rsp+A0h] [rbp+1Fh]

  v0 = 0;
  KeyHandle = 0LL;
  v1 = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v2 = 0;
  Value[0] = 0;
  while ( 1 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames[2 * v2];
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0 )
    {
LABEL_7:
      if ( !v1 )
        return v1;
LABEL_29:
      PspReadDfssConfigurationValues();
      return v1;
    }
    v3 = KeyHandle;
    ResultLength = 0;
    v19 = 0;
    DestinationString = 0LL;
    KeyValueInformation = 0LL;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"EnableCpuQuota");
    if ( inited >= 0 )
    {
      p_KeyValueInformation = &KeyValueInformation;
      v6 = ZwQueryValueKey(
             v3,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
      inited = v6;
      if ( v6 < 0 )
      {
        if ( v6 == -2147483643 )
        {
          while ( 1 )
          {
            Length = ResultLength;
            Pool2 = (void *)ExAllocatePool2(65LL, ResultLength, 1799976018LL);
            v10 = Pool2;
            if ( !Pool2 )
              break;
            p_KeyValueInformation = (__int128 *)Pool2;
            v11 = ZwQueryValueKey(v3, &DestinationString, KeyValuePartialInformation, Pool2, Length, &ResultLength);
            inited = v11;
            if ( v11 >= 0 )
              goto LABEL_11;
            if ( v11 != -2147483643 )
              goto LABEL_15;
            ExFreePoolWithTag(v10, 0);
          }
          inited = -1073741801;
        }
        goto LABEL_6;
      }
      v10 = 0LL;
LABEL_11:
      v12 = *((_DWORD *)p_KeyValueInformation + 1);
      if ( ((v12 - 3) & 0xFFFFFFFB) == 0 )
        goto LABEL_14;
      if ( v12 == 4 )
      {
        if ( *((_DWORD *)p_KeyValueInformation + 2) == 4 )
        {
          ResultLength = 4;
          v0 = *((_DWORD *)p_KeyValueInformation + 3);
          Value[0] = v0;
        }
        else
        {
          inited = -1073741820;
        }
      }
      else
      {
        if ( v12 != 1 )
        {
LABEL_14:
          inited = -1073741788;
          goto LABEL_15;
        }
        if ( ((unsigned __int8)Value & 3) != 0 )
        {
          inited = -2147483646;
        }
        else
        {
          ResultLength = 4;
          DestinationString.Buffer = (wchar_t *)p_KeyValueInformation + 6;
          DestinationString.Length = *((_WORD *)p_KeyValueInformation + 4);
          DestinationString.MaximumLength = *((_WORD *)p_KeyValueInformation + 4);
          inited = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
          v0 = Value[0];
        }
      }
LABEL_15:
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
LABEL_6:
    ZwClose(KeyHandle);
    if ( inited < 0 )
      goto LABEL_7;
    if ( !v0 )
      return 0;
    ++v2;
    v1 = 1;
    if ( v2 >= 2 )
      goto LABEL_29;
  }
}
