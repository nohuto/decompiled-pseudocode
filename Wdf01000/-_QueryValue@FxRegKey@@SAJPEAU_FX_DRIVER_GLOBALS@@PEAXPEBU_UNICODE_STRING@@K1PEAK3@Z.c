__int64 __fastcall FxRegKey::_QueryValue(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *Key,
        _UNICODE_STRING *ValueName,
        unsigned int ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  __int64 Tag; // r8
  ULONG Length; // eax
  _KEY_VALUE_PARTIAL_INFORMATION *Pool2; // rbx
  NTSTATUS v14; // edi
  unsigned int DataLength; // eax
  unsigned int length; // [rsp+30h] [rbp-58h] BYREF
  _KEY_VALUE_PARTIAL_INFORMATION partial; // [rsp+38h] [rbp-50h] BYREF

  partial = 0LL;
  if ( FxDriverGlobals )
    Tag = FxDriverGlobals->Tag;
  else
    Tag = 1917089862LL;
  if ( Value )
  {
    length = ValueLength + 12;
    Pool2 = (_KEY_VALUE_PARTIAL_INFORMATION *)ExAllocatePool2(256LL, ValueLength + 12, Tag);
    if ( !Pool2 )
      return 3221225626LL;
    Length = length;
  }
  else
  {
    Length = 12;
    length = 12;
    Pool2 = &partial;
  }
  v14 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, Pool2, Length, &length);
  if ( v14 >= 0 )
  {
    if ( Value )
    {
      DataLength = Pool2->DataLength;
      if ( ValueLength >= DataLength )
        memmove(Value, Pool2->Data, DataLength);
    }
    goto LABEL_14;
  }
  if ( v14 == -2147483643 )
  {
LABEL_14:
    if ( ValueLengthQueried )
      *ValueLengthQueried = Pool2->DataLength;
    if ( ValueType )
      *ValueType = Pool2->Type;
  }
  if ( Pool2 != &partial )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v14;
}
