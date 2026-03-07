NTSTATUS __stdcall ZwQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, ValueName);
}
