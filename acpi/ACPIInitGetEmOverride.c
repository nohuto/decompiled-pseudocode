__int64 ACPIInitGetEmOverride()
{
  ULONG ActiveProcessorCount; // eax
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp+10h] BYREF

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v2 = 1;
  if ( ActiveProcessorCount > 1 )
  {
    EmClientQueryRuleState(&GUID_EM_RULE_ACPI_SLP_WORKAROUND, &v2);
    if ( v2 == 2 )
      AcpiOverrideAttributes |= 4u;
  }
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_DISABLE_S1, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x10u;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_DISABLE_S2, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x20u;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_DISABLE_S3, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x40u;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IGNORE_QWORD_LENGTH, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x80u;
  EmClientQueryRuleState(&GUID_EM_RULE_IGNORE_PCI_SEGMENTS, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x1000u;
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_FORCE_RUN_REG_METHOD_ON_PCI_DEVICE, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x8000u;
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_RESCAN_AFTER_INIT_DEPENDENCIES_SATISFIED, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x80000u;
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_PLATFORM_CHECK_D3COLD_ON_SURPRISE_REMOVAL, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x100000u;
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_PLATFORM_CHECK_FAIL_RESET_ON_OPEN_HANDLES, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x200000u;
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_PLATFORM_CHECK_IGNORE_FIXED_BUTTON, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x400000u;
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_DEVICE_IGNORE_STA_ON_FILTER_ATTACH, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x800000u;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_EC_BURST_DEFAULT_OVERRIDE, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x1000000u;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_EARLY_EDGE_ENABLED, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x2000000u;
  result = EmClientQueryRuleState(&GUID_EM_RULE_ACPI_OVERRIDE_PRW_RES_OFF_ON_KSR, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x4000000u;
  return result;
}
