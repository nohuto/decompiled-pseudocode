unsigned __int64 __fastcall MiReservePoolMemory(unsigned __int64 a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r10

  v4 = a3 >> 21;
  if ( a3 >> 21 > 0xFFFFFFFF )
    return 0LL;
  switch ( a2 )
  {
    case 5:
      return MiObtainDynamicVa((__int64 *)(qword_140C65720 + 376LL * a4), v4, 5);
    case 6:
      return MiObtainSystemVa((unsigned int)v4, 6u);
    case 15:
      return a1 & -(__int64)((unsigned int)MiMarkSystemVaAllocated(
                                             15,
                                             ((unsigned int)(a1 >> 18) & 0x3FFFFFF8) + 0x40000000,
                                             ((a1 >> 18) & 0x3FFFFFF8) + 0x40000000 + 8 * v4,
                                             1,
                                             1) != 0);
    default:
      return 0LL;
  }
}
