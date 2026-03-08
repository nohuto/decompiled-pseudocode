/*
 * XREFs of CmDeleteKeyRecursive @ 0x140A0D158
 * Callers:
 *     CmDeleteKeyRecursive @ 0x140A0D158 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140A0E038 (CmpMoveBiosAliasTable.c)
 *     CmpCreateHardwareProfiles @ 0x140B50B04 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x140413E50 (ZwDeleteKey.c)
 *     CmDeleteKeyRecursive @ 0x140A0D158 (CmDeleteKeyRecursive.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmDeleteKeyRecursive(void *a1, const WCHAR *a2, __int64 a3, int a4, ULONG ResultLength)
{
  NTSTATUS result; // eax
  __int64 v9; // rdx
  wchar_t *Pool2; // rax
  wchar_t *v11; // r14
  __int64 v12; // rdx
  NTSTATUS v13; // edi
  NTSTATUS v14; // ebx
  ULONG Length; // [rsp+20h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    do
    {
      v13 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, (PVOID)a3, a4 - 2, &ResultLength);
      if ( v13 < 0 )
        break;
      v9 = -1LL;
      *(_WORD *)(a3 + 2 * ((unsigned __int64)*(unsigned int *)(a3 + 12) >> 1) + 16) = 0;
      do
        ++v9;
      while ( *(_WORD *)(a3 + 2 * v9 + 16) );
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2 * v9 + 2, 538987843LL);
      v11 = Pool2;
      if ( !Pool2 )
      {
        v13 = -1073741670;
        break;
      }
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)(a3 + 2 * v12 + 16) );
      wcscpy_s(Pool2, v12 + 1, (const wchar_t *)(a3 + 16));
      LOBYTE(Length) = 1;
      v13 = CmDeleteKeyRecursive((int)KeyHandle, (int)v11, a3, a4, Length);
      ExFreePoolWithTag(v11, 0);
    }
    while ( v13 >= 0 );
    v14 = 0;
    if ( v13 != -2147483622 )
      v14 = v13;
    if ( v14 >= 0 )
      v14 = ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    return v14;
  }
  return result;
}
