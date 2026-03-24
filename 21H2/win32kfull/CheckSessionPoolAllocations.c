/*
 * XREFs of CheckSessionPoolAllocations @ 0x1C0136070
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 CheckSessionPoolAllocations()
{
  __int64 result; // rax
  int v1; // eax
  unsigned int v2; // [rsp+50h] [rbp-59h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-51h] BYREF
  __int64 v4; // [rsp+60h] [rbp-49h] BYREF
  __int64 v5; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp-39h] BYREF
  int v7; // [rsp+80h] [rbp-29h]
  int v8; // [rsp+84h] [rbp-25h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-21h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+98h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-1h] BYREF
  _OWORD Data[2]; // [rsp+D8h] [rbp+2Fh] BYREF

  v2 = 0;
  v6[0] = 0LL;
  v5 = 0LL;
  v4 = 0LL;
  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  ValueName = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  memset(Data, 0, sizeof(Data));
  result = Win32ExtractSessionPoolTagInfo((unsigned int)gSessionId, Data, 8LL, &v2, v6, &v5, &v4, 0LL, 0);
  if ( (int)result >= 0 && v4 )
  {
    v1 = v2;
    if ( v2 > 8 )
      v1 = 8;
    v2 = v1;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"SESSION_HAS_VALID_POOL_ON_EXIT");
      if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, Data, 4 * v2) >= 0 )
        ZwFlushKey(KeyHandle);
      ZwClose(KeyHandle);
    }
    v6[1] = Data;
    v7 = 4 * v2;
    v8 = 0;
    return DbgkWerCaptureLiveKernelDump(L"win32k.sys", 171LL, (unsigned int)gSessionId);
  }
  return result;
}
