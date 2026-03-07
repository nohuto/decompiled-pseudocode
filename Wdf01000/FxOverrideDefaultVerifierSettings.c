void __fastcall FxOverrideDefaultVerifierSettings(void *Key, wchar_t *Name, bool *OverrideValue)
{
  _UNICODE_STRING valueName; // [rsp+20h] [rbp-18h] BYREF
  unsigned int value; // [rsp+58h] [rbp+20h] BYREF

  value = 0;
  valueName = 0LL;
  RtlInitUnicodeString(&valueName, Name);
  if ( FxRegKey::_QueryULong(Key, &valueName, &value) >= 0 )
    *OverrideValue = value != 0;
}
