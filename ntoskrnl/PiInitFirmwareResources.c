/*
 * XREFs of PiInitFirmwareResources @ 0x140B6B9C4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     RtlStringFromGUID @ 0x140733E70 (RtlStringFromGUID.c)
 *     IopCreateRegistryKeyEx @ 0x14078BB90 (IopCreateRegistryKeyEx.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall PiInitFirmwareResources(__int64 a1)
{
  int v1; // eax
  const GUID **v2; // rsi
  int v3; // eax
  HANDLE v4; // r14
  int v5; // edi
  const GUID *v6; // r12
  HANDLE v7; // rbx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  HANDLE v12; // [rsp+98h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+50h] BYREF

  v1 = *(_DWORD *)(a1 + 264);
  v12 = 0LL;
  Handle = 0LL;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  GuidString = 0LL;
  if ( (v1 & 1) == 0 )
    return 0;
  v2 = (const GUID **)(a1 + 296);
  if ( *v2 == (const GUID *)v2 )
  {
    return 0;
  }
  else
  {
    ValueName.Buffer = L"\\Registry\\Machine\\HARDWARE\\UEFI";
    *(_DWORD *)&ValueName.Length = 4194366;
    v3 = IopCreateRegistryKeyEx(&v12, 0LL, &ValueName, 0xF003Fu, 0, 0LL);
    v4 = v12;
    v5 = v3;
    if ( v3 >= 0 )
    {
      ValueName.Buffer = L"ESRT";
      *(_DWORD *)&ValueName.Length = 655368;
      v5 = IopCreateRegistryKeyEx(&Handle, v12, &ValueName, 0xF003Fu, 0, 0LL);
      if ( v5 >= 0 )
      {
        v6 = *v2;
        if ( *v2 != (const GUID *)v2 )
        {
          do
          {
            v5 = RtlStringFromGUID(v6 + 1, &GuidString);
            if ( v5 < 0 )
              break;
            v5 = IopCreateRegistryKeyEx(&KeyHandle, Handle, &GuidString, 0xF003Fu, 0, 0LL);
            RtlFreeUnicodeString(&GuidString);
            if ( v5 < 0 )
              break;
            v7 = KeyHandle;
            ValueName.Buffer = (wchar_t *)L"Type";
            *(_DWORD *)&ValueName.Length = 655368;
            ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, (PVOID)&v6[2], 4u);
            *(_DWORD *)&ValueName.Length = 1048590;
            ValueName.Buffer = L"Version";
            ZwSetValueKey(v7, &ValueName, 0, 4u, &v6[2].Data2, 4u);
            *(_DWORD *)&ValueName.Length = 3014700;
            ValueName.Buffer = L"LowestSupportedVersion";
            ZwSetValueKey(v7, &ValueName, 0, 4u, v6[2].Data4, 4u);
            *(_DWORD *)&ValueName.Length = 2490404;
            ValueName.Buffer = (wchar_t *)L"LastAttemptVersion";
            ZwSetValueKey(v7, &ValueName, 0, 4u, (PVOID)&v6[3], 4u);
            *(_DWORD *)&ValueName.Length = 2359330;
            ValueName.Buffer = (wchar_t *)L"LastAttemptStatus";
            ZwSetValueKey(v7, &ValueName, 0, 4u, &v6[3].Data2, 4u);
            ZwClose(v7);
            v6 = *(const GUID **)&v6->Data1;
          }
          while ( v6 != (const GUID *)v2 );
          v4 = v12;
        }
      }
      if ( Handle )
        ZwClose(Handle);
    }
    if ( v4 )
      ZwClose(v4);
  }
  return (unsigned int)v5;
}
