/*
 * XREFs of CheckSessionPoolAllocations @ 0x1C01217C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void CheckSessionPoolAllocations()
{
  int v0; // eax
  unsigned int v1; // [rsp+50h] [rbp-49h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v3; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v4; // [rsp+68h] [rbp-31h] BYREF
  unsigned __int64 v5; // [rsp+70h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-21h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+88h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-1h] BYREF
  _OWORD Data[2]; // [rsp+C8h] [rbp+2Fh] BYREF

  v1 = 0;
  v5 = 0LL;
  v4 = 0LL;
  v3 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  ValueName = 0LL;
  memset(Data, 0, sizeof(Data));
  if ( (int)Win32ExtractSessionPoolTagInfo(gSessionId, Data, 8LL, &v1, &v5, &v4, &v3, 0LL, 0) >= 0 && v3 )
  {
    v0 = v1;
    if ( v1 > 8 )
      v0 = 8;
    v1 = v0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"SESSION_HAS_VALID_POOL_ON_EXIT");
      if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, Data, 4 * v1) >= 0 )
        ZwFlushKey(KeyHandle);
      ZwClose(KeyHandle);
    }
    Win32kCreateLeakedTagsKernelDump(v5, v4, v3, (unsigned int *)Data, v1);
  }
}
