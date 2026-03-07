__int64 __fastcall ReadRegistryDwordKeyValue(
        struct _UNICODE_STRING *const a1,
        struct _UNICODE_STRING *const a2,
        unsigned int *a3)
{
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  NTSTATUS v11; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-19h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp+27h] BYREF
  int v17; // [rsp+74h] [rbp+2Bh]
  unsigned int v18; // [rsp+7Ch] [rbp+33h]

  if ( a1 && a2 && a3 )
  {
    *a3 = 0;
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = a1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v5 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
    v10 = v5;
    if ( v5 >= 0 )
    {
      ResultLength = 0;
      v11 = ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v7 = KeyHandle;
      v10 = v11;
      if ( KeyHandle )
        ZwClose(KeyHandle);
      if ( (int)v10 >= 0 && v17 == 4 )
      {
        *a3 = v18;
        return (unsigned int)v10;
      }
      *a3 = 0;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = v10;
    return (unsigned int)v10;
  }
  return 3221225485LL;
}
