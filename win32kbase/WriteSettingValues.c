_BOOL8 __fastcall WriteSettingValues(unsigned int a1, const WCHAR **a2, __int64 a3)
{
  unsigned int v4; // r14d
  NTSTATUS v5; // ebx
  void *PointerDeviceConfigurationKey; // rbp
  unsigned int v7; // edi
  const WCHAR **v8; // rsi
  const WCHAR *v9; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v4 = a3;
  v5 = 0;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(a1, 131078LL, a3);
  if ( PointerDeviceConfigurationKey )
  {
    v7 = 0;
    if ( v4 )
    {
      v8 = a2;
      do
      {
        v9 = *v8;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v9);
        v5 = ZwSetValueKey(PointerDeviceConfigurationKey, &DestinationString, 0, 4u, (char *)&a2[2 * v7 + 1] + 4, 4u);
        if ( v5 < 0 )
          break;
        ++v7;
        v8 += 2;
      }
      while ( v7 < v4 );
    }
    ZwClose(PointerDeviceConfigurationKey);
  }
  else
  {
    v5 = -1073741811;
  }
  return v5 >= 0;
}
