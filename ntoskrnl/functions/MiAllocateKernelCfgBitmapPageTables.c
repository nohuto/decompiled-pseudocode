__int64 __fastcall MiAllocateKernelCfgBitmapPageTables(__int64 a1, int a2, int a3)
{
  unsigned __int64 v6; // r9
  __int64 PteAddress; // rax
  __int64 v8; // rdx
  unsigned int v9; // edi

  if ( !a3 )
    MiAcquireKernelCfgLock();
  MiGetPteAddress(qword_140C654B0 + ((2 * ((a1 + (unsigned __int64)(unsigned int)(a2 - 1) + 0x800000000000LL) >> 4)) >> 3));
  PteAddress = MiGetPteAddress(v6);
  v9 = 0;
  if ( !(unsigned int)MiMakeZeroedPageTables(PteAddress, v8, 1, 9) )
    v9 = -1073741670;
  if ( !a3 )
    MiReleaseKernelCfgLock();
  return v9;
}
