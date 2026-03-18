/*
 * XREFs of KsepMatchInitCpuInfo @ 0x140B64FBC
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140B64EEC (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepStringAnsiToUnicode @ 0x140846420 (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140C70DD0 = 0LL;
  qword_140C70E00 = 0LL;
  v0 = -1LL;
  xmmword_140C70DE0 = 0LL;
  xmmword_140C70DF0 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140D15F90, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140C70DF0) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140C70DF0) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140C70DD0 = word_140D15F90;
  }
  return result;
}
