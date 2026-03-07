NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140C70990 = 0LL;
  qword_140C709C0 = 0LL;
  v0 = -1LL;
  xmmword_140C709A0 = 0LL;
  xmmword_140C709B0 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140D15BD0, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140C709B0) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140C709B0) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140C70990 = word_140D15BD0;
  }
  return result;
}
