/*
 * XREFs of PiDevCfgConfigureSoftwareDevices @ 0x140876C88
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140876A38 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     IopCreateRegistryKeyEx @ 0x14078BB90 (IopCreateRegistryKeyEx.c)
 *     _RegRtlDeleteTreeInternal @ 0x140868B00 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlCopyTreeInternal @ 0x140A67A08 (_RegRtlCopyTreeInternal.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConfigureSoftwareDevices(void *a1, void *a2)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  int v6; // eax
  HANDLE v7; // rsi
  __int64 Pool2; // rdi
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  UNICODE_STRING v14; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+58h] BYREF

  ObjectAttributes.RootDirectory = a2;
  Handle = 0LL;
  ResultLength = 0;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v14;
  v14.Buffer = L"Devices";
  *(_QWORD *)&v14.Length = 1048590LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v4 = v3;
  if ( v3 == -1073741772 )
  {
    v4 = 0;
  }
  else if ( v3 >= 0 )
  {
    *(_DWORD *)&v14.Length = 1048590;
    v14.Buffer = L"Devices";
    v6 = IopCreateRegistryKeyEx(&Handle, a1, &v14, 0xF003Fu, 0, 0LL);
    v7 = Handle;
    v4 = v6;
    if ( v6 >= 0 )
    {
      Pool2 = ExAllocatePool2(256LL, 544LL, 1667526736LL);
      if ( Pool2 )
      {
        v9 = 0;
        v4 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, (PVOID)Pool2, 0x220u, &ResultLength);
        if ( v4 < 0 )
        {
LABEL_21:
          if ( v4 == -2147483622 )
          {
            v4 = 0;
          }
          else if ( v4 == -2147483643 )
          {
            v4 = -1073741773;
          }
        }
        else
        {
          while ( 1 )
          {
            *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*(unsigned int *)(Pool2 + 12) >> 1) + 16) = 0;
            if ( *(_QWORD *)&PiPnpRtlCtx && (v10 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
              v11 = *(_QWORD *)(v10 + 8);
            else
              v11 = 0LL;
            RegRtlDeleteTreeInternal(v7, (const WCHAR *)(Pool2 + 16), v11, 0);
            if ( *(_QWORD *)&PiPnpRtlCtx && (v12 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
              v13 = *(_QWORD *)(v12 + 8);
            else
              v13 = 0LL;
            v4 = RegRtlCopyTreeInternal((_DWORD)KeyHandle, (int)Pool2 + 16, (_DWORD)v7, (int)Pool2 + 16, 0, v13, 0);
            if ( v4 < 0 )
              break;
            v4 = ZwEnumerateKey(KeyHandle, ++v9, KeyBasicInformation, (PVOID)Pool2, 0x220u, &ResultLength);
            if ( v4 < 0 )
              goto LABEL_21;
          }
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      else
      {
        v4 = -1073741670;
      }
    }
    if ( v7 )
      ZwClose(v7);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
