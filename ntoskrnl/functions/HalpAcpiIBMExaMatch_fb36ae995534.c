char HalpAcpiIBMExaMatch()
{
  int v0; // eax
  __int64 v1; // rdx

  v0 = HalpInterruptModel();
  if ( v0 == 1 )
  {
    LOBYTE(v0) = *(_BYTE *)(v1 + 19) - 48;
    if ( (unsigned __int8)v0 <= 9u )
    {
      LOBYTE(v0) = *(_BYTE *)(v1 + 20) - 48;
      if ( (unsigned __int8)v0 <= 9u )
        HalpInterruptPhysicalModeOnly = 1;
    }
  }
  return v0;
}
