__int64 __fastcall CmpDoReDoCreateKey(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  HANDLE v5; // rbx
  int v6; // eax
  NTSTATUS v7; // edi
  __int128 v8; // [rsp+40h] [rbp-9h] BYREF
  __int128 v9; // [rsp+50h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  ULONG Disposition; // [rsp+B8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v8 = 0LL;
  v9 = 0LL;
  CmpSplitParentKeyName(a2 + 32, &v8, &v9);
  result = CmpDoReOpenTransKey(a1, &v8, 131078LL, &Handle);
  if ( (int)result >= 0 )
  {
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v5 = Handle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
    ObjectAttributes.SecurityDescriptor = *(PVOID *)(a2 + 56);
    v6 = *(_DWORD *)(a2 + 48) - 1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 4928;
    v7 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 9 - (v6 != 0), &Disposition);
    ZwClose(v5);
    if ( v7 >= 0 )
      ZwClose(KeyHandle);
    return (unsigned int)v7;
  }
  return result;
}
