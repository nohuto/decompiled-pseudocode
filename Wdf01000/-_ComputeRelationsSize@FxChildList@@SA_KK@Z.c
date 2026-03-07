__int64 __fastcall FxChildList::_ComputeRelationsSize(unsigned int Count)
{
  if ( Count )
    return 8LL * (Count - 1) + 16;
  else
    return 4LL;
}
