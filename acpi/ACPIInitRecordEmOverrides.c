int ACPIInitRecordEmOverrides()
{
  int result; // eax

  if ( (AcpiOverrideAttributes & 4) != 0 )
    AcpiDiagOverrideAttribute(0);
  if ( (AcpiOverrideAttributes & 0x10) != 0 )
    AcpiDiagOverrideAttribute(1);
  if ( (AcpiOverrideAttributes & 0x20) != 0 )
    AcpiDiagOverrideAttribute(2);
  if ( (AcpiOverrideAttributes & 0x40) != 0 )
    AcpiDiagOverrideAttribute(3);
  result = AcpiOverrideAttributes;
  if ( (AcpiOverrideAttributes & 0x80u) != 0 )
    result = AcpiDiagOverrideAttribute(4);
  if ( (AcpiOverrideAttributes & 0x1000) != 0 )
    result = AcpiDiagOverrideAttribute(5);
  if ( (AcpiOverrideAttributes & 0x8000) != 0 )
    result = AcpiDiagOverrideAttribute(6);
  if ( (AcpiOverrideAttributes & 0x80000) != 0 )
    result = AcpiDiagOverrideAttribute(7);
  if ( (AcpiOverrideAttributes & 0x100000) != 0 )
    result = AcpiDiagOverrideAttribute(8);
  if ( (AcpiOverrideAttributes & 0x200000) != 0 )
    result = AcpiDiagOverrideAttribute(9);
  if ( (AcpiOverrideAttributes & 0x400000) != 0 )
    result = AcpiDiagOverrideAttribute(10);
  if ( (AcpiOverrideAttributes & 0x800000) != 0 )
    result = AcpiDiagOverrideAttribute(11);
  if ( (AcpiOverrideAttributes & 0x1000000) != 0 )
    return AcpiDiagOverrideAttribute(12);
  return result;
}
