__int64 __fastcall DxgMonitor::MonitorModes::_IsModeInPixelRateRange(
        __int64 a1,
        __int64 a2,
        int a3,
        bool *a4,
        _DWORD *a5)
{
  __int64 v9; // rcx
  __int64 i; // rax
  int *v11; // rbx
  bool v13; // al

  if ( (unsigned int)(a3 - 1) > 1 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  v9 = a1 + 176;
  *a5 = 0;
  for ( i = *(_QWORD *)(a1 + 176); ; i = *((_QWORD *)v11 + 6) )
  {
    if ( i == v9 )
      goto LABEL_14;
    v11 = (int *)(i - 48);
    if ( !i )
      v11 = 0LL;
    if ( !v11 )
    {
LABEL_14:
      *a4 = 1;
      return 0LL;
    }
    if ( v11[9] == 2 )
      break;
  }
  v13 = SupportedPixelRate(a2, (__int64)v11, a3);
  *a4 = v13;
  if ( v13 )
    return 0LL;
  if ( *v11 == 2 )
  {
    *a5 = 3;
    return 0LL;
  }
  if ( *v11 == 3 )
  {
    *a5 = 5;
    return 0LL;
  }
  WdLogSingleEntry1(2LL, *v11);
  return 3223192348LL;
}
