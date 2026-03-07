_BOOL8 __fastcall SetCustomFlick(struct tagCUSTOM_FLICK *a1)
{
  int v2; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+10h] BYREF

  Destination = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v2 = -1073741595;
  if ( GetCustomFlickPath((GUID *)a1, &Destination) )
  {
    Destination.Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
    v2 = OpenDeviceCfgKey(Destination.MaximumLength, Destination.Buffer, 0x20006u, &KeyHandle, 1);
    if ( v2 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"ModifierKeys");
      v2 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)a1 + 16, 4u);
      if ( v2 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"KeyCode");
        v2 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)a1 + 20, 4u);
        if ( v2 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"FriendlyName");
          v2 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, (char *)a1 + 28, *((_DWORD *)a1 + 6));
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    Win32FreePool(Destination.Buffer);
  }
  return v2 >= 0;
}
