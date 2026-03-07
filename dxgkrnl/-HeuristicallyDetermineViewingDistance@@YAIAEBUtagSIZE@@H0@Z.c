__int64 __fastcall HeuristicallyDetermineViewingDistance(const struct tagSIZE *a1, int a2, const struct tagSIZE *a3)
{
  unsigned __int64 v3; // rcx
  int v5; // eax

  v3 = 10000LL * (a1->cx * a1->cx + a1->cy * a1->cy) / 0xFC04uLL;
  if ( !(_DWORD)v3 )
    return 280LL;
  if ( (unsigned int)v3 < 0x1FA4 )
    return 180LL;
  if ( (unsigned int)v3 < 0x4204 )
  {
    if ( *a3 != 0x25800000400LL )
      return 200LL;
    return 245LL;
  }
  if ( (unsigned int)v3 < 0x57E4 )
    return 245LL;
  if ( (unsigned int)v3 >= 0x7E90 )
  {
    if ( (unsigned int)v3 <= 0x19000 )
      return 280LL;
    v5 = (unsigned int)(100 * a3->cx / a3->cy) < 0xC8 ? 0xFEE7 : 0;
  }
  else
  {
    v5 = a2 != 0 ? 0xFFFFFFDD : 0;
  }
  return (unsigned int)(v5 + 280);
}
