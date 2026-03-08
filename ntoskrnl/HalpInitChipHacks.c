/*
 * XREFs of HalpInitChipHacks @ 0x140B35648
 * Callers:
 *     HalpErrataInitSystem @ 0x140A87AA0 (HalpErrataInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcstoul @ 0x1403D6370 (wcstoul.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x140412570 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x1404125D0 (ZwQueryKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 HalpInitChipHacks()
{
  __int64 Pool2; // r14
  NTSTATUS v1; // esi
  ULONG v2; // r15d
  NTSTATUS v3; // eax
  __int128 v4; // xmm0
  __int16 v5; // ax
  __int64 v6; // rbx
  ULONG Length; // [rsp+38h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-59h] BYREF
  wchar_t *EndPtr; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-39h] BYREF
  _OWORD KeyInformation[2]; // [rsp+98h] [rbp-9h] BYREF
  __int128 v15; // [rsp+B8h] [rbp+17h]
  wchar_t Str[8]; // [rsp+C8h] [rbp+27h] BYREF
  __int16 v17; // [rsp+D8h] [rbp+37h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ResultLength = 0;
  EndPtr = 0LL;
  v12[1] = L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\HAL";
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
  v12[0] = 7209068LL;
  HalpErrataChipHacksInitialized = 1;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  KeyHandle = 0LL;
  Pool2 = 0LL;
  Length = 0;
  v15 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v1 < 0 )
    goto LABEL_16;
  v1 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v1 < 0 )
    goto LABEL_16;
  HalpChipHackCount = v15;
  if ( !(_DWORD)v15 )
    goto LABEL_16;
  HalpChipHacksTable = ExAllocatePool2(256LL, 8LL * (unsigned int)v15, 0x456C6148u);
  if ( !HalpChipHacksTable )
  {
LABEL_23:
    v1 = -1073741670;
    goto LABEL_16;
  }
  v2 = 0;
  if ( !HalpChipHackCount )
    goto LABEL_16;
  while ( 1 )
  {
    v3 = ZwEnumerateValueKey(KeyHandle, v2, KeyValueFullInformation, (PVOID)Pool2, Length, &Length);
    v1 = v3;
    if ( v3 < 0 )
      break;
    if ( Pool2 && Length >= 0x14 && *(_DWORD *)(Pool2 + 12) == 4 && *(_DWORD *)(Pool2 + 16) >= 0x10u )
    {
      v4 = *(_OWORD *)(Pool2 + 20);
      v17 = 0;
      *(_OWORD *)Str = v4;
      v5 = wcstoul(&Str[4], &EndPtr, 16);
      v6 = HalpChipHacksTable;
      *(_WORD *)(HalpChipHacksTable + 8LL * v2 + 2) = v5;
      Str[4] = 0;
      *(_WORD *)(v6 + 8LL * v2) = wcstoul(Str, &EndPtr, 16);
      *(_DWORD *)(v6 + 8LL * v2 + 4) = *(_DWORD *)(*(unsigned int *)(Pool2 + 8) + Pool2);
    }
    ++v2;
LABEL_13:
    if ( v2 >= HalpChipHackCount )
      goto LABEL_14;
  }
  if ( v3 == -1073741789 || v3 == -2147483643 )
  {
    if ( Pool2 )
      ExFreePoolWithTag((PVOID)Pool2, 0);
    Pool2 = ExAllocatePool2(256LL, Length, 0x456C6148u);
    if ( !Pool2 )
      goto LABEL_23;
    goto LABEL_13;
  }
LABEL_14:
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_16:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v1;
}
