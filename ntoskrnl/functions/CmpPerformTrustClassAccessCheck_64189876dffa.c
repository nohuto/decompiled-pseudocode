__int64 __fastcall CmpPerformTrustClassAccessCheck(__int64 a1, char a2)
{
  if ( a2 )
    return (*(_DWORD *)(a1 + 4112) & 1) == 0 ? 0xC000000D : 0;
  else
    return 0LL;
}
