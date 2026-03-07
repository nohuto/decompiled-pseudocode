__int64 __fastcall HvlQueryL1tfMitigationInformation(int *a1)
{
  int v2; // edx
  int v3; // eax

  if ( (HvlpRootFlags & 1) == 0 )
    return 3221225659LL;
  v2 = *a1;
  if ( KeGetCurrentPrcb()->CpuVendor == 2 )
  {
    if ( (HvlpGuestStateScrubbingStatus & 0x80u) != 0 || (HvlpGuestStateScrubbingStatus & 0x38) == 0x10 )
      v3 = 0x80000;
    else
      v3 = 0;
    *a1 = ((HvlpGuestStateScrubbingStatus & 0x14) == 0 ? 0x100000 : 0) | v3 & 0xFF8FFFFF | v2 & 0xFF83FFFF | ((HvlpGuestStateScrubbingStatus & 3) != 0 ? 0x40000 : 0) | 0x20000;
  }
  else
  {
    *a1 = v2 | 0x60000;
  }
  return 0LL;
}
