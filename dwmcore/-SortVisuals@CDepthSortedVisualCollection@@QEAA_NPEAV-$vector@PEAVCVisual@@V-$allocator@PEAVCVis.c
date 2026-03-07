char __fastcall CDepthSortedVisualCollection::SortVisuals(__int64 a1, __int64 a2)
{
  int i; // eax
  __int64 v5; // rdi

  for ( i = *(_DWORD *)(a1 + 24); ; i = *(_DWORD *)(*(_QWORD *)a1 + 8 * v5 + 32) )
  {
    if ( i == -1 )
      return 1;
    v5 = 5LL * i;
    if ( !(unsigned __int8)CDepthSortingLayer::SortVisuals(*(_QWORD *)a1 + 40LL * i, a2, a1 + 32) )
      break;
  }
  return 0;
}
