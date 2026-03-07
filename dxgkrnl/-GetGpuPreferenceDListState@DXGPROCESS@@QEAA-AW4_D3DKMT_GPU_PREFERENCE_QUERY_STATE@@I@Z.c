__int64 __fastcall DXGPROCESS::GetGpuPreferenceDListState(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2);
  if ( v2 )
    return *(unsigned int *)(v2 + 104);
  WdLogSingleEntry1(3LL, a2);
  return 0LL;
}
