/*
 * XREFs of ArbAddInaccessibleAllocationRange @ 0x1C00A0770
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C00814F0 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     RtlAddRange_0 @ 0x1C0001A43 (RtlAddRange_0.c)
 *     ZwClose_0 @ 0x1C0001A67 (ZwClose_0.c)
 *     ZwOpenKey_0 @ 0x1C0001AE5 (ZwOpenKey_0.c)
 *     ArbpGetRegistryValue @ 0x1C00A2FAC (ArbpGetRegistryValue.c)
 */

NTSTATUS __fastcall ArbAddInaccessibleAllocationRange(__int64 a1, struct _RTL_RANGE_LIST *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  int RegistryValue; // eax
  _DWORD *v7; // rdi
  char *v8; // r14
  char *i; // rsi
  int v10; // eax
  int v11; // ecx
  void *KeyHandle; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v13; // [rsp+48h] [rbp-31h]
  _QWORD v14[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v15[2]; // [rsp+60h] [rbp-19h] BYREF
  const wchar_t *v16; // [rsp+68h] [rbp-11h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  v14[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
  v14[0] = 7733366LL;
  Handle = 0LL;
  v15[1] = 0;
  v13 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey_0(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v15[0] = 2228258;
    v16 = L"InaccessibleRange";
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey_0(&Handle, 0x2001Fu, &ObjectAttributes);
    if ( v5 < 0 )
    {
LABEL_22:
      ZwClose_0(KeyHandle);
      return v5;
    }
    RegistryValue = ArbpGetRegistryValue(Handle);
    v7 = 0LL;
    v5 = RegistryValue;
    if ( RegistryValue < 0 )
      goto LABEL_4;
    if ( MEMORY[4] == 1 )
    {
      if ( *(_WORD *)(MEMORY[8] + 2 * ((unsigned __int64)MEMORY[0xC] >> 1) - 2) )
      {
LABEL_8:
        v5 = -1073741811;
LABEL_19:
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        ZwClose_0(Handle);
        goto LABEL_22;
      }
      RegistryValue = ArbpGetRegistryValue(Handle);
      v5 = RegistryValue;
      if ( RegistryValue < 0 )
      {
LABEL_4:
        if ( RegistryValue != -1073741670 )
          v5 = 0;
        goto LABEL_19;
      }
      ExFreePoolWithTag(0LL, 0);
      v7 = v13;
    }
    if ( v7[1] == 10 )
    {
      v8 = (char *)v7 + (unsigned int)v7[2] + 32;
      for ( i = v8 + 8; i < &v8[32 * *((unsigned int *)v8 + 1) + 8]; i += 32 )
      {
        v10 = (unsigned __int8)i[1];
        v11 = *(_DWORD *)(a1 + 32);
        if ( v10 == v11 || (_BYTE)v10 == 7 && v11 == 3 )
        {
          v5 = RtlAddRange_0(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 0x40u, 1u, 0LL, 0LL);
          if ( v5 < 0 )
            break;
        }
      }
      goto LABEL_19;
    }
    goto LABEL_8;
  }
  return result;
}
