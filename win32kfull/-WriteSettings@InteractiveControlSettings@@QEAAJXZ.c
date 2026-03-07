__int64 __fastcall InteractiveControlSettings::WriteSettings(InteractiveControlSettings *this, __int64 a2, __int64 a3)
{
  int v4; // esi
  const wchar_t **v5; // rbx
  __int64 v6; // rbp
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  v4 = InteractiveControlSettings::_OpenDeviceKey(this, 0x20006u, a3, &KeyHandle);
  if ( v4 >= 0 )
  {
    v5 = (const wchar_t **)&InteractiveControlSettings::m_Value;
    v6 = 29LL;
    do
    {
      if ( *v5 )
      {
        RtlInitUnicodeString(&DestinationString, *v5);
        if ( *((_DWORD *)this + 2 * *((unsigned int *)v5 + 2)) != *((_DWORD *)this + 2 * *((unsigned int *)v5 + 2) + 1)
          || (ResultLength = 0,
              ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772) )
        {
          v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)this + 8 * *((unsigned int *)v5 + 2), 4u);
          if ( v4 < 0 )
            DbgPrintEx(0x4Du, 1u, "Failed to write %S value\n", *v5);
        }
      }
      v5 += 2;
      --v6;
    }
    while ( v6 );
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
