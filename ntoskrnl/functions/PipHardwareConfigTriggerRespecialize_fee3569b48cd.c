__int64 __fastcall PipHardwareConfigTriggerRespecialize(HANDLE a1)
{
  HANDLE v1; // rbx
  int v2; // eax
  unsigned int v3; // edi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+50h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+18h] BYREF

  Data = 0;
  v1 = 0LL;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  if ( !a1 )
  {
    ValueName.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\Setup";
    *(_DWORD *)&ValueName.Length = 4063292;
    v2 = IopCreateRegistryKeyEx(&KeyHandle, 0LL, &ValueName, 0xF003Fu, 0, 0LL);
    v1 = KeyHandle;
    v3 = v2;
    if ( v2 < 0 )
      goto LABEL_5;
    a1 = KeyHandle;
  }
  Data = 1;
  ValueName.Buffer = L"Respecialize";
  *(_DWORD *)&ValueName.Length = 1703960;
  v3 = ZwSetValueKey(a1, &ValueName, 0, 4u, &Data, 4u);
LABEL_5:
  if ( v1 )
    ZwClose(v1);
  return v3;
}
