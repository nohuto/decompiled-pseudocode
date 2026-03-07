__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 436);
  if ( (v1 & 2) != 0 )
    return 1LL;
  else
    return ((v1 & 1) == 0) | 2u;
}
