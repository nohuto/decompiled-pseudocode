__int64 __fastcall DxgkRetrieveValueFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, void **a3)
{
  void *v3; // rbx
  void *v5; // rcx
  ULONG Length; // ebp
  void *v9; // rdi
  NTSTATUS v10; // eax
  int v11; // edi
  void *v12; // rcx
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v5 = *a3;
  *a3 = 0LL;
  Length = 1024;
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  while ( 1 )
  {
    v9 = v3;
    v3 = (void *)operator new[](Length, 0x4D677844u, 256LL);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( !v3 )
      break;
    ResultLength = 0;
    v10 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v3, Length, &ResultLength);
    Length = ResultLength;
    v11 = v10;
    if ( v10 != -2147483643 && v10 != -1073741789 )
      goto LABEL_8;
  }
  WdLogSingleEntry0(2LL);
  v11 = -1073741801;
LABEL_8:
  if ( v11 >= 0 )
  {
    v12 = *a3;
    *a3 = v3;
    if ( !v12 )
      return (unsigned int)v11;
    goto LABEL_11;
  }
  if ( v3 )
  {
    v12 = v3;
LABEL_11:
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)v11;
}
