/*
 * XREFs of PopGetBitlockerKeyLocation @ 0x140A9D6A0
 * Callers:
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcsstr @ 0x1403D6020 (wcsstr.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopGetBitlockerKeyLocation(__int64 *a1)
{
  NTSTATUS v2; // ebx
  ULONG Length; // ebx
  __int64 Pool2; // rdi
  NTSTATUS v5; // eax
  void *v6; // r8
  wchar_t *v7; // rax
  unsigned __int16 *v8; // rdx
  __int64 i; // rcx
  unsigned __int16 v10; // ax
  ULONG ResultLength; // [rsp+30h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-41h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+17h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  ResultLength = 0;
  KeyValueInformation = 0LL;
  KeyHandle = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"SystemStartOptions");
    v2 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength);
    if ( (int)(v2 + 0x80000000) < 0 || v2 == -2147483643 )
    {
      if ( DWORD1(KeyValueInformation) == 1 )
      {
        Length = ResultLength;
        Pool2 = ExAllocatePool2(64LL, ResultLength + 2LL, 1718968931LL);
        if ( Pool2 )
        {
          v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, (PVOID)Pool2, Length, &ResultLength);
          v6 = (void *)Pool2;
          v2 = v5;
          if ( v5 >= 0 )
          {
            *(_WORD *)(*(unsigned int *)(Pool2 + 8) + Pool2 + 12) = 0;
            v7 = wcsstr((const wchar_t *)(Pool2 + 12), L"FVEBOOT=");
            v6 = (void *)Pool2;
            if ( v7 )
            {
              v8 = v7 + 8;
              for ( i = 0LL; ; i = v10 + 2 * (5 * i - 24) )
              {
                v10 = *v8;
                if ( *v8 < 0x30u )
                  break;
                if ( v10 > 0x39u )
                  goto LABEL_17;
                ++v8;
              }
              if ( v10 && v10 != 32 )
              {
LABEL_17:
                v2 = -1073741823;
                goto LABEL_19;
              }
              *a1 = i;
            }
            else
            {
              v2 = -1073741823;
            }
          }
LABEL_19:
          ExFreePoolWithTag(v6, 0x66756263u);
        }
        else
        {
          v2 = -1073741801;
        }
      }
      else
      {
        v2 = -1073741811;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
