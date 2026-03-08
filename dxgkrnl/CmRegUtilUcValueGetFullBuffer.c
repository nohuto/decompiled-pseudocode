/*
 * XREFs of CmRegUtilUcValueGetFullBuffer @ 0x1C0393B68
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C03933A4 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall CmRegUtilUcValueGetFullBuffer(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        __int64 a3,
        ULONG a4,
        _QWORD *a5)
{
  int v5; // edi
  _QWORD *v7; // rsi
  ULONG Length; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rbx
  NTSTATUS v12; // edi
  _DWORD *v14; // rax
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  ResultLength = a4;
  v5 = ValueName->Length;
  v7 = a5;
  ResultLength = 0;
  Length = (v5 + 31) & 0xFFFFFFF8;
  *a5 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, Length, 0x62527050u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, Length);
  v12 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, v11, Length, &ResultLength);
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    if ( v12 != -2147483643 && v12 != -1073741789 )
      return (unsigned int)v12;
    v14 = ExAllocatePoolWithTag((POOL_TYPE)512, ResultLength, 0x62527050u);
    v11 = v14;
    if ( v14 )
    {
      memset(v14, 0, ResultLength);
      v12 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, v11, ResultLength, &ResultLength);
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
  if ( v11[1] != 3 )
  {
    v12 = -1073741788;
    goto LABEL_10;
  }
  *v7 = v11;
  return 0LL;
}
