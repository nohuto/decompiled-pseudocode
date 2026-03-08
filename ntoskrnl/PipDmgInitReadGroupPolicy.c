/*
 * XREFs of PipDmgInitReadGroupPolicy @ 0x140958180
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x14081CB84 (PipDmgInitPhaseTwo.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1403C0C9C (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 PipDmgInitReadGroupPolicy()
{
  unsigned int v0; // ebx
  NTSTATUS RegistryValue; // eax
  unsigned int *v2; // r8
  int v3; // edx
  int v4; // edx
  _DWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v7; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF
  PVOID P; // [rsp+78h] [rbp+18h] BYREF

  v6[1] = 0;
  P = 0LL;
  v0 = 0;
  v7 = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\Kernel DMA Protection";
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v6;
  v6[0] = 9961622;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RegistryValue = IopGetRegistryValue(KeyHandle, L"DeviceEnumerationPolicy", 0, &P);
    v2 = (unsigned int *)P;
    if ( RegistryValue >= 0 && PnpValidateRegistryDword((__int64)P) )
    {
      v3 = *(unsigned int *)((char *)v2 + v2[2]);
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
          v0 = v4 == 1;
        else
          v0 = 2;
      }
      else
      {
        v0 = 3;
      }
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
  return v0;
}
