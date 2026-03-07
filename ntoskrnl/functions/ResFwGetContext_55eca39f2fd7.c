__int64 __fastcall ResFwGetContext(__int64 *a1)
{
  char *v1; // rbx
  __int64 result; // rax
  char v4; // al
  int v5; // ecx
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  PMDL PagesForMdl; // rax
  PMDL v9; // rdi
  char *MappedSystemVa; // rdx
  __int64 v11; // r8

  v1 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v4 = dword_140C0E3B0;
  *a1 = 0LL;
  if ( (v4 & 1) == 0 )
    return 3221225473LL;
  v5 = dword_140C0E3CC;
  if ( dword_140C0E3D0 >= (unsigned int)dword_140C0E3CC )
    v5 = dword_140C0E3D0;
  v6 = (dword_140C0E3DC + v5 + dword_140C0E3D8 + 20479) & 0xFFFFF000;
  v7 = ((v6 >> 3) + 4095) & 0xFFFFF000;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6 + v7, MmCached, 5u);
  v9 = PagesForMdl;
  if ( PagesForMdl )
  {
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  }
  else
  {
    MappedSystemVa = 0LL;
  }
  v11 = qword_140C0E3E0;
  *(_QWORD *)(qword_140C0E3E0 + 8) = v9;
  *(_QWORD *)(v11 + 16) = MappedSystemVa;
  if ( MappedSystemVa )
    v1 = &MappedSystemVa[v7];
  *(_DWORD *)(v11 + 24) = MappedSystemVa != 0LL ? v6 + v7 : 0;
  *(_DWORD *)(v11 + 248) = MappedSystemVa != 0LL ? v6 : 0;
  *(_QWORD *)(v11 + 240) = v1;
  BgpAnimationRegionSave = qword_140C0E470;
  BgpTextRegionSave = qword_140C0E478;
  result = 0LL;
  *a1 = v11;
  return result;
}
