/*
 * XREFs of ArbAddInaccessibleAllocationRange @ 0x14081E1A4
 * Callers:
 *     IopMemInitialize @ 0x14081F124 (IopMemInitialize.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ArbpGetRegistryValue @ 0x14081EC78 (ArbpGetRegistryValue.c)
 *     RtlAddRange @ 0x14081F540 (RtlAddRange.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ArbAddInaccessibleAllocationRange(__int64 a1, int a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  int RegistryValue; // eax
  int v7; // r9d
  _DWORD *v8; // rdi
  char *v9; // r14
  char *i; // rsi
  int v11; // eax
  int v12; // ecx
  HANDLE KeyHandle; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v14; // [rsp+48h] [rbp-31h]
  _QWORD v15[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v16[2]; // [rsp+60h] [rbp-19h] BYREF
  const wchar_t *v17; // [rsp+68h] [rbp-11h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  v15[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  v15[0] = 7733366LL;
  Handle = 0LL;
  v16[1] = 0;
  v14 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v16[0] = 2228258;
    v17 = L"InaccessibleRange";
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v16;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
    if ( v5 < 0 )
    {
LABEL_17:
      ZwClose(KeyHandle);
      return v5;
    }
    RegistryValue = ArbpGetRegistryValue(Handle);
    v8 = 0LL;
    v5 = RegistryValue;
    if ( RegistryValue >= 0 )
    {
      if ( MEMORY[4] != 1 )
        goto LABEL_8;
      if ( *(_WORD *)(MEMORY[8] + 2 * ((unsigned __int64)MEMORY[0xC] >> 1) - 2) )
        goto LABEL_21;
      RegistryValue = ArbpGetRegistryValue(Handle);
      v5 = RegistryValue;
      if ( RegistryValue >= 0 )
      {
        ExFreePoolWithTag(0LL, 0);
        v8 = v14;
LABEL_8:
        if ( v8[1] == 10 )
        {
          v9 = (char *)v8 + (unsigned int)v8[2] + 32;
          for ( i = v9 + 8; i < &v9[32 * *((unsigned int *)v9 + 1) + 8]; i += 32 )
          {
            v11 = (unsigned __int8)i[1];
            v12 = *(_DWORD *)(a1 + 32);
            if ( v11 == v12 || (_BYTE)v11 == 7 && v12 == 3 )
            {
              LOBYTE(v7) = 64;
              v5 = RtlAddRange(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), v7, 1, 0LL, 0LL);
              if ( v5 < 0 )
                break;
            }
          }
          goto LABEL_14;
        }
LABEL_21:
        v5 = -1073741811;
LABEL_14:
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        ZwClose(Handle);
        goto LABEL_17;
      }
    }
    if ( RegistryValue != -1073741670 )
      v5 = 0;
    goto LABEL_14;
  }
  return result;
}
