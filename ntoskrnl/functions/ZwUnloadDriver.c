NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1);
}
