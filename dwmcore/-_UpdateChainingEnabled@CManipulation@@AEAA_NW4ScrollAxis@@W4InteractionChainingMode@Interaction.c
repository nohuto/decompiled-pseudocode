char __fastcall CManipulation::_UpdateChainingEnabled(__int64 a1, int a2, int a3)
{
  if ( *(_DWORD *)(a1 + 8LL * a2 + 464) == a3 )
    return 0;
  *(_DWORD *)(a1 + 8LL * a2 + 464) = a3;
  return 1;
}
