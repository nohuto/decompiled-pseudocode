__int64 __fastcall KeQueryKvaShadowRegion(__int64 a1, unsigned __int64 **a2, unsigned __int64 *a3)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  _DWORD *v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  struct _KPRCB *CurrentPrcb; // rax
  KPCR *Pcr; // rax

  if ( !a1 )
  {
    Pcr = KeGetPcr();
    *a3 = 20480LL;
    *a2 = (unsigned __int64 *)&Pcr->NtTib.ExceptionList[-763];
    return 1LL;
  }
  v5 = a1 - 1;
  if ( !v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    *a3 = 4096LL;
    *a2 = &CurrentPrcb->KernelDirectoryTableBase;
    return 1LL;
  }
  if ( v5 == 1 )
  {
    v6 = RtlImageNtHeader(0x140000000LL);
    v7 = (_DWORD *)RtlSectionTableFromVirtualAddress(
                     v6,
                     0x140000000LL,
                     (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
    *a2 = (unsigned __int64 *)(0x140000000LL + (unsigned int)v7[3]);
    v8 = v7[2];
    v9 = v7[4];
    if ( v8 <= v9 )
      v8 = v9;
    *a3 = (v8 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    return 1LL;
  }
  return 0LL;
}
