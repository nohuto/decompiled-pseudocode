__int64 __fastcall MiAnyPagesRemovalPending(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = v2 + 48 * MiLargePageSizes[a2];
  while ( 1 )
  {
    if ( v2 >= v3 )
      return 0LL;
    if ( (*(_BYTE *)(v2 + 35) & 0x40) != 0 )
      break;
    v2 += 48LL;
  }
  return 1LL;
}
