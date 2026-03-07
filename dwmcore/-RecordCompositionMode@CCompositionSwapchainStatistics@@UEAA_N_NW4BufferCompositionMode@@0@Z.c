char __fastcall CCompositionSwapchainStatistics::RecordCompositionMode(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) == v3 )
    return 0;
  if ( !*(_DWORD *)(v3 - 60) )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
        *(_DWORD *)(v3 - 60) = 3;
    }
    else
    {
      *(_DWORD *)(v3 - 60) = 2;
    }
  }
  return 1;
}
