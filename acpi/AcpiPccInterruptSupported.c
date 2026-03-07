char __fastcall AcpiPccInterruptSupported(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( ((*(_BYTE *)a1 + 1) & 0xFE) != 0 || (*(_DWORD *)(a1 + 4) & 1) == 0 )
    return 0;
  return v1;
}
