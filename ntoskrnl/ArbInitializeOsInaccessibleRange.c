/*
 * XREFs of ArbInitializeOsInaccessibleRange @ 0x140B6E6A8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

NTSTATUS __fastcall ArbInitializeOsInaccessibleRange(char a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  ULONG Disposition[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v7[2]; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v8[2]; // [rsp+70h] [rbp-98h] BYREF
  const wchar_t *v9; // [rsp+78h] [rbp-90h]
  UNICODE_STRING ValueName; // [rsp+80h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-78h] BYREF
  _QWORD Data[10]; // [rsp+C8h] [rbp-40h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  v7[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
  Disposition[0] = 0;
  v7[0] = 7733366LL;
  Handle = 0LL;
  v8[1] = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    ObjectAttributes.Attributes = 576;
    v9 = L"InaccessibleRange";
    ObjectAttributes.RootDirectory = KeyHandle;
    v8[0] = 2228258;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, Disposition);
    if ( v3 >= 0 )
    {
      memset(Data, 0, 0x48uLL);
      Data[8] = -1LL;
      ValueName.Buffer = L"PhysicalAddress";
      HIDWORD(Data[3]) = 1;
      HIDWORD(Data[4]) = 1;
      LODWORD(Data[0]) = 72;
      BYTE1(Data[5]) = 3;
      Data[7] = 1LL << a1;
      *(_DWORD *)&ValueName.Length = 1966110;
      v3 = ZwSetValueKey(Handle, &ValueName, 0, 0xAu, Data, 0x48u);
      if ( v3 >= 0 )
        v3 = 0;
      ZwClose(Handle);
    }
    ZwClose(KeyHandle);
    return v3;
  }
  return result;
}
