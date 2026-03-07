__int64 __fastcall IrqPolicyGetDistributionDisposition(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+40h] [rbp+10h] BYREF
  int v7; // [rsp+48h] [rbp+18h] BYREF
  int v8; // [rsp+4Ch] [rbp+1Ch]
  HANDLE Handle; // [rsp+50h] [rbp+20h] BYREF

  v8 = HIDWORD(a2);
  Handle = 0LL;
  P = 0LL;
  v7 = 1;
  v2 = 0;
  IrqArbGlobalDistributionDisposition = 0;
  DestinationString = 0LL;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_DISTRIBUTION_STACK_UP, &v7);
  if ( v7 == 2 )
    IrqArbGlobalDistributionDisposition = 2;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_DISTRIBUTION_SPREAD_OUT, &v7);
  if ( v7 == 2 )
    IrqArbGlobalDistributionDisposition = 1;
  if ( !IrqArbGlobalDistributionDisposition )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
    v3 = OSOpenUnicodeHandle(&DestinationString, 0LL, &Handle);
    v2 = v3;
    if ( v3 < 0 || (v3 = OSGetRegistryValue(Handle, L"IRQDistribution", &P), v2 = v3, v3 < 0) )
    {
      if ( v3 != -1073741772 )
        goto LABEL_25;
      IrqArbGlobalDistributionDisposition = 0;
    }
    else
    {
      if ( !*((_DWORD *)P + 1) || *(_DWORD *)P != 4 )
      {
        v2 = -1073741275;
        ExFreePoolWithTag(P, 0);
        goto LABEL_25;
      }
      IrqArbGlobalDistributionDisposition = *((_DWORD *)P + 2);
      ExFreePoolWithTag(P, 0);
      IrqArbGlobalStackingIrq = IrqArbIrqFromGsiv((unsigned int)IrqLibSciGsiv);
      if ( OSGetRegistryValue(Handle, L"ForcePCIBootConfig", &P) >= 0 )
      {
        if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
          IrqArbGlobalStackingIrq = *((_DWORD *)P + 2);
        ExFreePoolWithTag(P, 0);
      }
    }
    v2 = 0;
    goto LABEL_25;
  }
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_ROUTING_STACK_ON_IRQ9, &v7);
  if ( v7 == 2 )
  {
    IrqArbGlobalStackingIrq = 9;
  }
  else
  {
    EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_ROUTING_STACK_ON_IRQ10, &v7);
    if ( v7 == 2 )
    {
      IrqArbGlobalStackingIrq = 10;
    }
    else
    {
      EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_ROUTING_STACK_ON_IRQ11, &v7);
      if ( v7 == 2 )
        IrqArbGlobalStackingIrq = 11;
    }
  }
LABEL_25:
  if ( Handle )
    ZwClose(Handle);
  return v2;
}
