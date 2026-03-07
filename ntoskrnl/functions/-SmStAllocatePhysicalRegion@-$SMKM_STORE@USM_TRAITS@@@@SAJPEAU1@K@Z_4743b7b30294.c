__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  __int64 v6; // rbp
  PMDL PagesForMdl; // rax

  v2 = *(_QWORD *)(a1 + 6216);
  v4 = *(_DWORD *)(a1 + 6208);
  v5 = 0;
  v6 = a2;
  if ( !(_WORD)v4
    && (PagesForMdl = MmAllocatePagesForMdlEx(
                        0LL,
                        (PHYSICAL_ADDRESS)-1LL,
                        (PHYSICAL_ADDRESS)0x10000LL,
                        v4,
                        MmCached,
                        0x4Du)) != 0LL
    || (PagesForMdl = MmAllocatePagesForMdlEx(
                        0LL,
                        (PHYSICAL_ADDRESS)-1LL,
                        0LL,
                        *(unsigned int *)(a1 + 6208),
                        MmCached,
                        0xDu)) != 0LL )
  {
    *(_QWORD *)(v2 + 8 * v6) = PagesForMdl;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
