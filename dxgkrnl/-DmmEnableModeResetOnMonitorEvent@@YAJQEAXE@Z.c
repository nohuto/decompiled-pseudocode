__int64 __fastcall DmmEnableModeResetOnMonitorEvent(PERESOURCE *a1, char a2)
{
  PERESOURCE v5; // rbx
  struct _LIST_ENTRY *Flink; // rbx
  int Blink; // eax

  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    WdLogSingleEntry0(1LL);
  v5 = a1[365];
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  Flink = v5[1].SystemResourcesList.Flink;
  if ( Flink )
  {
    Blink = (int)Flink[33].Blink;
    if ( a2 )
    {
      if ( !Blink )
        WdLogSingleEntry0(1LL);
      --LODWORD(Flink[33].Blink);
    }
    else
    {
      LODWORD(Flink[33].Blink) = Blink + 1;
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
