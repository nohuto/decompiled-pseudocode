void CmpInitializeRegistryNames()
{
  PCWSTR *v0; // rbx
  __int64 v1; // rsi
  UNICODE_STRING *v2; // rdi

  RtlInitUnicodeString(&CmRegistryRootName, L"\\REGISTRY");
  RtlInitUnicodeString(&CmRegistryMachineName, L"\\REGISTRY\\MACHINE");
  RtlInitUnicodeString(&CmRegistryMachineHardwareName, L"\\REGISTRY\\MACHINE\\HARDWARE");
  RtlInitUnicodeString(&CmRegistryMachineHardwareDescriptionName, L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION");
  RtlInitUnicodeString(
    &CmRegistryMachineHardwareDescriptionSystemName,
    L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION\\SYSTEM");
  RtlInitUnicodeString(&CmRegistryMachineHardwareDeviceMapName, L"\\REGISTRY\\MACHINE\\HARDWARE\\DEVICEMAP");
  RtlInitUnicodeString(&CmRegistryMachineHardwareResourceMapName, L"\\REGISTRY\\MACHINE\\HARDWARE\\RESOURCEMAP");
  RtlInitUnicodeString(&CmRegistryMachineHardwareOwnerMapName, L"\\REGISTRY\\MACHINE\\HARDWARE\\OWNERMAP");
  RtlInitUnicodeString(&CmRegistryMachineSystemName, L"\\REGISTRY\\MACHINE\\SYSTEM");
  RtlInitUnicodeString(&CmRegistryMachineSystemCurrentControlSet, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET");
  RtlInitUnicodeString(&CmRegistryUserName, L"\\REGISTRY\\USER");
  RtlInitUnicodeString(&CmRegistryContainersName, L"\\REGISTRY\\WC");
  RtlInitUnicodeString(&CmRegistryAppName, L"\\REGISTRY\\A");
  RtlInitUnicodeString(&CmpSystemFileName, L"SYSTEM");
  RtlInitUnicodeString(
    &CmRegistryMachineSystemCurrentControlSetEnumName,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\ENUM");
  RtlInitUnicodeString(
    &CmRegistryMachineSystemCurrentControlSetEnumRootName,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\ENUM\\ROOT");
  RtlInitUnicodeString(
    &CmRegistryMachineSystemCurrentControlSetServices,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\SERVICES");
  RtlInitUnicodeString(
    &CmRegistryMachineSystemCurrentControlSetHardwareProfilesCurrent,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\HARDWARE PROFILES\\CURRENT");
  RtlInitUnicodeString(
    &CmRegistryMachineSystemCurrentControlSetControlClass,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\CLASS");
  RtlInitUnicodeString(
    &CmRegistryMachineSystemCurrentControlSetControlSafeBoot,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SAFEBOOT");
  RtlInitUnicodeString(
    &CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
  RtlInitUnicodeString(
    &CmRegistryMachineSystemCurrentControlSetControlBootLog,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\BOOTLOG");
  RtlInitUnicodeString(
    &CmRegistryMachineSystemCurrentControlSetServicesEventLog,
    L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\SERVICES\\EVENTLOG");
  RtlInitUnicodeString(&CmSymbolicLinkValueName, L"SymbolicLinkValue");
  RtlInitUnicodeString(&CmMpsSvcKeySubstring, L"CONTROLSET001\\SERVICES\\MPSSVC");
  RtlInitUnicodeString(&CmRegistryProcessName, L"Registry");
  v0 = (PCWSTR *)CmTypeString;
  v1 = 42LL;
  v2 = &CmTypeName;
  do
  {
    RtlInitUnicodeString(v2++, *v0++);
    --v1;
  }
  while ( v1 );
}
