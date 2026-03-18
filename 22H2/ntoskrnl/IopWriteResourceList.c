/*
 * XREFs of IopWriteResourceList @ 0x14081AEF8
 * Callers:
 *     PnpBuildCmResourceList @ 0x14081993C (PnpBuildCmResourceList.c)
 *     IopInitializeResourceMap @ 0x140B44840 (IopInitializeResourceMap.c)
 *     IoReportHalResourceUsage @ 0x140B44DB0 (IoReportHalResourceUsage.c)
 * Callees:
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041B2A0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041C240 (ZwDeleteValueKey.c)
 *     IopCreateRegistryKeyEx @ 0x1407DAA18 (IopCreateRegistryKeyEx.c)
 */

__int64 __fastcall IopWriteResourceList(
        void *a1,
        UNICODE_STRING *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        _DWORD *Data,
        ULONG DataSize)
{
  int RegistryKey; // edi
  UNICODE_STRING *v9; // rdx
  HANDLE v10; // rbx
  NTSTATUS v11; // eax
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle[2]; // [rsp+38h] [rbp-10h] BYREF

  Handle = 0LL;
  KeyHandle[0] = 0LL;
  RegistryKey = IopCreateRegistryKeyEx(&Handle, a1, a2, 0x2001Fu, 1u, 0LL);
  if ( RegistryKey >= 0 )
  {
    RegistryKey = IopCreateRegistryKeyEx(KeyHandle, Handle, a3, 0x2001Fu, 1u, 0LL);
    ZwClose(Handle);
    if ( RegistryKey >= 0 )
    {
      v9 = a4;
      v10 = KeyHandle[0];
      if ( *Data )
        v11 = ZwSetValueKey(KeyHandle[0], v9, 0, 8u, Data, DataSize);
      else
        v11 = ZwDeleteValueKey(KeyHandle[0], v9);
      RegistryKey = v11;
      ZwClose(v10);
    }
  }
  return (unsigned int)RegistryKey;
}
