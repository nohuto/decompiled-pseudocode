NTSTATUS __stdcall DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  sub_140161380();
  return sub_1400A21AC(DriverObject, RegistryPath);
}
