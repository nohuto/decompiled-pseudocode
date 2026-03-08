/*
 * XREFs of ArbAddMmConfigRangeAsBootReserved @ 0x14081EF14
 * Callers:
 *     IopMemInitialize @ 0x14081F124 (IopMemInitialize.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ArbpGetRegistryValue @ 0x14081EC78 (ArbpGetRegistryValue.c)
 *     RtlAddRange @ 0x14081F540 (RtlAddRange.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ArbAddMmConfigRangeAsBootReserved(__int64 a1, int a2)
{
  unsigned int *v2; // rsi
  void *v3; // rbx
  int v4; // edi
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  int RegistryValue; // eax
  unsigned int v10; // eax
  __int64 v11; // r14
  void *Pool2; // rax
  unsigned int *i; // r14
  int v14; // eax
  int v15; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  __int128 v17; // [rsp+48h] [rbp-21h] BYREF
  __int128 v18; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  _DWORD *v20; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = (unsigned int *)ArbMmConfigRange;
  KeyHandle = 0LL;
  Handle = 0LL;
  v3 = 0LL;
  v4 = 0;
  v20 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v17 = 0LL;
  v18 = 0LL;
  if ( ArbMmConfigRange )
  {
LABEL_9:
    for ( i = v2 + 2; i < &v2[8 * v2[1] + 2]; i += 8 )
    {
      v14 = *((unsigned __int8 *)i + 1);
      v15 = *(_DWORD *)(a1 + 32);
      if ( v14 == v15 || (_BYTE)v14 == 7 && v15 == 3 )
      {
        v4 = RtlAddRange(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 1, 1, 0LL, 0LL);
        if ( v4 < 0 )
          break;
      }
    }
    goto LABEL_14;
  }
  ObjectAttributes.RootDirectory = 0LL;
  *((_QWORD *)&v17 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  LODWORD(v17) = 7733366;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    return result;
  LODWORD(v18) = 2228258;
  *((_QWORD *)&v18 + 1) = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
  if ( v8 < 0 )
  {
    ZwClose(KeyHandle);
    return v8;
  }
  RegistryValue = ArbpGetRegistryValue(Handle, L"MmConfigRange", &v20);
  v3 = v20;
  v4 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741670 )
      v4 = 0;
    goto LABEL_14;
  }
  if ( v20[1] == 10 )
  {
    v2 = (_DWORD *)((char *)v20 + (unsigned int)v20[2] + 32);
    v10 = v2[1];
    if ( v10 )
    {
      v11 = 32 * v10 + 8;
      Pool2 = (void *)ExAllocatePool2(64LL, v11, 1315074625LL);
      ArbMmConfigRange = (__int64)Pool2;
      if ( Pool2 )
        memmove(Pool2, v2, (unsigned int)v11);
    }
    goto LABEL_9;
  }
  v4 = -1073741811;
LABEL_14:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  ZwClose(Handle);
  ZwClose(KeyHandle);
  return v4;
}
