bool ACPIInternalInterruptHonorBiosPolarities()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( (AcpiOverrideAttributes & 0x20000) == 0 )
  {
    if ( (AcpiOverrideAttributes & 0x40000) != 0 )
      return 1;
    if ( (int)ACPIGetTableVersion(1346584902LL, &v1) >= 0 )
      return v1 >= 5;
  }
  return 0;
}
