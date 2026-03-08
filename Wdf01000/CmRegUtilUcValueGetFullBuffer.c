/*
 * XREFs of CmRegUtilUcValueGetFullBuffer @ 0x1C00B1BE0
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00B141C (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 */

__int64 __fastcall CmRegUtilUcValueGetFullBuffer(
        void *KeyHandle,
        _UNICODE_STRING *ValueName,
        unsigned int Information,
        unsigned int a4,
        _KEY_VALUE_FULL_INFORMATION **ValueName_0)
{
  int v5; // edi
  _KEY_VALUE_FULL_INFORMATION **v7; // rsi
  ULONG Length; // edi
  _KEY_VALUE_FULL_INFORMATION *PoolWithTag; // rax
  _KEY_VALUE_FULL_INFORMATION *v11; // rbx
  NTSTATUS v12; // edi
  _KEY_VALUE_FULL_INFORMATION *v14; // rax
  unsigned int keyValueLength; // [rsp+68h] [rbp+20h] BYREF

  keyValueLength = a4;
  v5 = ValueName->Length;
  v7 = ValueName_0;
  keyValueLength = 0;
  Length = (v5 + 31) & 0xFFFFFFF8;
  *ValueName_0 = 0LL;
  PoolWithTag = (_KEY_VALUE_FULL_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x62527050u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, Length);
  v12 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, v11, Length, &keyValueLength);
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    if ( v12 != -2147483643 && v12 != -1073741789 )
      return (unsigned int)v12;
    v14 = (_KEY_VALUE_FULL_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, keyValueLength, 0x62527050u);
    v11 = v14;
    if ( v14 )
    {
      memset(v14, 0, keyValueLength);
      v12 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, v11, keyValueLength, &keyValueLength);
      if ( v12 < 0 )
      {
LABEL_10:
        ExFreePoolWithTag(v11, 0);
        return (unsigned int)v12;
      }
      goto LABEL_8;
    }
    return 3221225626LL;
  }
LABEL_8:
  if ( v11->Type != 3 )
  {
    v12 = -1073741788;
    goto LABEL_10;
  }
  *v7 = v11;
  return 0LL;
}
