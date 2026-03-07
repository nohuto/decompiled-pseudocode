bool HalpMcParallelLoadSupported()
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CpuVendor; // cl

  CurrentPrcb = KeGetCurrentPrcb();
  CpuVendor = CurrentPrcb->CpuVendor;
  if ( CpuVendor == 1 )
    return CurrentPrcb->CpuType >= 0x17u;
  else
    return CpuVendor == 2;
}
