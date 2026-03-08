/*
 * XREFs of ExpUpdateComPlusPackage @ 0x1409F4C98
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 */

__int64 __fastcall ExpUpdateComPlusPackage(int a1)
{
  NTSTATUS v1; // ebx
  int Data; // [rsp+50h] [rbp+8h] BYREF
  ULONG Disposition; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a1;
  Disposition = 0;
  KeyHandle = 0LL;
  v1 = ZwOpenKey(&KeyHandle, 0x40000000u, &stru_140C09420);
  if ( v1 == -1073741772 )
    v1 = ZwCreateKey(&KeyHandle, 0x40000000u, &stru_140C09420, 0, 0LL, 0, &Disposition);
  if ( v1 >= 0 )
  {
    v1 = ZwSetValueKey(KeyHandle, &stru_140C09480, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v1;
}
