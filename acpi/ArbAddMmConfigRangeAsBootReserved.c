NTSTATUS __fastcall ArbAddMmConfigRangeAsBootReserved(__int64 a1, struct _RTL_RANGE_LIST *a2)
{
  unsigned int *v2; // rsi
  NTSTATUS v3; // edi
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  int RegistryValue; // eax
  int v9; // eax
  __int64 v10; // r14
  void *Pool2; // rax
  unsigned int *i; // r14
  int v13; // eax
  int v14; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  __int128 v16; // [rsp+48h] [rbp-21h] BYREF
  __int128 v17; // [rsp+58h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  void *KeyHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = (unsigned int *)ArbMmConfigRange;
  KeyHandle = 0LL;
  Handle = 0LL;
  v3 = 0;
  memset(&ObjectAttributes, 0, 44);
  v16 = 0LL;
  v17 = 0LL;
  if ( ArbMmConfigRange )
  {
LABEL_13:
    for ( i = v2 + 2; i < &v2[8 * v2[1] + 2]; i += 8 )
    {
      v13 = *((unsigned __int8 *)i + 1);
      v14 = *(_DWORD *)(a1 + 32);
      if ( v13 == v14 || (_BYTE)v13 == 7 && v14 == 3 )
      {
        v3 = RtlAddRange_0(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 1u, 1u, 0LL, 0LL);
        if ( v3 < 0 )
          break;
      }
    }
    goto LABEL_20;
  }
  ObjectAttributes.RootDirectory = 0LL;
  *((_QWORD *)&v16 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  LODWORD(v16) = 7733366;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey_0(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    return result;
  LODWORD(v17) = 2228258;
  *((_QWORD *)&v17 + 1) = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey_0(&Handle, 0x2001Fu, &ObjectAttributes);
  if ( v7 < 0 )
  {
    ZwClose_0(KeyHandle);
    return v7;
  }
  RegistryValue = ArbpGetRegistryValue(Handle);
  v3 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741670 )
      v3 = 0;
    goto LABEL_20;
  }
  if ( MEMORY[4] == 10 )
  {
    v2 = (unsigned int *)(MEMORY[8] + 32LL);
    v9 = *(_DWORD *)(MEMORY[8] + 0x24LL);
    if ( v9 )
    {
      v10 = (unsigned int)(32 * v9 + 8);
      Pool2 = (void *)ExAllocatePool2(64LL, v10, 1315074625LL);
      ArbMmConfigRange = (__int64)Pool2;
      if ( Pool2 )
        memmove(Pool2, v2, (unsigned int)v10);
    }
    goto LABEL_13;
  }
  v3 = -1073741811;
LABEL_20:
  ZwClose_0(Handle);
  ZwClose_0(KeyHandle);
  return v3;
}
