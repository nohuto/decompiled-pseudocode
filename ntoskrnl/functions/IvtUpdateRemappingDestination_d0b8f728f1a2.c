__int64 __fastcall IvtUpdateRemappingDestination(__int64 a1, char a2, int a3, int a4, int a5)
{
  unsigned int i; // esi
  __int64 *v9; // rbx
  __int64 updated; // rdx

  for ( i = 0; i < *(_DWORD *)(a1 + 304); ++i )
  {
    v9 = (__int64 *)(*(_QWORD *)(a1 + 288) + 16LL * i);
    if ( (*v9 & 1) != 0 && (!a2 || (*v9 & 0x100) != 0) )
    {
      updated = (unsigned int)IvtUpdateExtendedDestination(HIDWORD(*v9), (*v9 & 4) != 0, a3, a4, a5);
      if ( HIDWORD(*v9) != updated )
        *v9 = (updated << 32) | (unsigned int)*v9;
    }
  }
  return IvtInvalidateRemappingTableEntries(a1, 0LL);
}
