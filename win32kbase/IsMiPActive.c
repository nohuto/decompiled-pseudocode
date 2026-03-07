__int64 __fastcall IsMiPActive(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( a2 != 1
    && !*(_QWORD *)(a1 + 608)
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 424) + 812LL) & 4) != 0 || (*(_DWORD *)(a1 + 1272) & 0x6000000) != 0) )
  {
    if ( !a2 )
      return 1LL;
    v2 = *(_DWORD *)(a2 + 100);
    if ( (v2 & 0x20) == 0 )
      return (~v2 & 0x8000000u) >> 27;
  }
  return 0LL;
}
