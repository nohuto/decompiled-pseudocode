__int64 __fastcall DmmResetModeState(PERESOURCE *a1, int a2)
{
  unsigned int v2; // ebx
  PERESOURCE v5; // rax

  v2 = 0;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
      WdLogSingleEntry0(1LL);
    v5 = a1[365];
    if ( v5 && LODWORD(v5->SpinLock) )
    {
      do
      {
        if ( _bittest(&a2, v2) )
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v5, v2, 1);
        v5 = a1[365];
        ++v2;
      }
      while ( v2 < LODWORD(v5->SpinLock) );
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
}
