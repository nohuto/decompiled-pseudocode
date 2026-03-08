/*
 * XREFs of PipCheckSystemFirmwareUpdated @ 0x140B57600
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     PipHardwareConfigOpenKey @ 0x14081B6E8 (PipHardwareConfigOpenKey.c)
 *     IopOpenRegistryKeyEx @ 0x14081BCC0 (IopOpenRegistryKeyEx.c)
 *     _PnpCtxRegCloseKey @ 0x1408653B4 (_PnpCtxRegCloseKey.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PipCheckSystemFirmwareUpdated(_BYTE *a1)
{
  ULONG *v1; // rbx
  void *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  NTSTATUS RegistryValue; // eax
  ULONG v8; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+30h] BYREF
  ULONG *v11; // [rsp+78h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  _DWORD *v13; // [rsp+88h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v1 = 0LL;
  *a1 = 0;
  v11 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  ValueName = 0LL;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareDescriptionSystemName, 0xF003Fu) >= 0 )
  {
    if ( IopGetRegistryValue(Handle, L"SystemBiosVersion", 0, &v11) < 0 )
    {
      v1 = v11;
    }
    else
    {
      v5 = PipHardwareConfigOpenKey(v4, 0xF003Fu, &KeyHandle);
      v1 = v11;
      if ( v5 >= 0 )
      {
        RegistryValue = IopGetRegistryValue(KeyHandle, L"SystemBiosVersion", 0, &v13);
        v3 = v13;
        if ( RegistryValue == -1073741772
          || RegistryValue >= 0
          && (v1[1] != v13[1]
           || (v8 = v1[3], v8 != v13[3])
           || memcmp((char *)v1 + v1[2], (char *)v13 + (unsigned int)v13[2], v8)) )
        {
          *(_DWORD *)&ValueName.Length = 2359330;
          ValueName.Buffer = (wchar_t *)L"SystemBiosVersion";
          if ( ZwSetValueKey(KeyHandle, &ValueName, 0, v1[1], (char *)v1 + v1[2], v1[3]) >= 0 )
            *a1 = 1;
        }
      }
      if ( KeyHandle )
        PnpCtxRegCloseKey(v6, KeyHandle);
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
