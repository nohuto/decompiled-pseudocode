/*
 * XREFs of ArbAddMmConfigRangeAsBootReserved @ 0x1C00B7974
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C0090F10 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     RtlAddRange_0 @ 0x1C0031CF3 (RtlAddRange_0.c)
 *     ZwClose_0 @ 0x1C0031D17 (ZwClose_0.c)
 *     ZwOpenKey_0 @ 0x1C0031D95 (ZwOpenKey_0.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     ArbpGetRegistryValue @ 0x1C00A04C0 (ArbpGetRegistryValue.c)
 */

NTSTATUS __fastcall ArbAddMmConfigRangeAsBootReserved(__int64 a1, struct _RTL_RANGE_LIST *a2)
{
  PVOID v2; // rbx
  unsigned int *v3; // rsi
  NTSTATUS v4; // edi
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  int RegistryValue; // eax
  unsigned int v10; // eax
  SIZE_T v11; // r14
  PVOID PoolWithTag; // rax
  unsigned int *i; // r14
  int v14; // eax
  int v15; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  __int128 v17; // [rsp+48h] [rbp-21h] BYREF
  __int128 v18; // [rsp+58h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  PVOID P; // [rsp+E0h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v2 = 0LL;
  v3 = (unsigned int *)ArbMmConfigRange;
  v4 = 0;
  P = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v17 = 0LL;
  v18 = 0LL;
  if ( ArbMmConfigRange )
  {
LABEL_13:
    for ( i = v3 + 2; i < &v3[8 * v3[1] + 2]; i += 8 )
    {
      v14 = *((unsigned __int8 *)i + 1);
      v15 = *(_DWORD *)(a1 + 32);
      if ( v14 == v15 || (_BYTE)v14 == 7 && v15 == 3 )
      {
        v4 = RtlAddRange_0(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 1u, 1u, 0LL, 0LL);
        if ( v4 < 0 )
          break;
      }
    }
    goto LABEL_20;
  }
  ObjectAttributes.RootDirectory = 0LL;
  *((_QWORD *)&v17 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  LODWORD(v17) = 7733366;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey_0(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    return result;
  LODWORD(v18) = 2228258;
  *((_QWORD *)&v18 + 1) = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey_0(&Handle, 0x2001Fu, &ObjectAttributes);
  if ( v8 < 0 )
  {
    ZwClose_0(KeyHandle);
    return v8;
  }
  RegistryValue = ArbpGetRegistryValue(Handle, L"MmConfigRange", &P);
  v2 = P;
  v4 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741670 )
      v4 = 0;
    goto LABEL_20;
  }
  if ( *((_DWORD *)P + 1) == 10 )
  {
    v3 = (unsigned int *)((char *)P + *((unsigned int *)P + 2) + 32);
    v10 = v3[1];
    if ( v10 )
    {
      v11 = 32 * v10 + 8;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x4E627241u);
      ArbMmConfigRange = (__int64)PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, v3, (unsigned int)v11);
    }
    goto LABEL_13;
  }
  v4 = -1073741811;
LABEL_20:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ZwClose_0(Handle);
  ZwClose_0(KeyHandle);
  return v4;
}
