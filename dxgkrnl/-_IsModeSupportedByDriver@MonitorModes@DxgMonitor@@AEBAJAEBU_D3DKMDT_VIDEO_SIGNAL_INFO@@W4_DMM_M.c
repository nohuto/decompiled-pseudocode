__int64 __fastcall DxgMonitor::MonitorModes::_IsModeSupportedByDriver(
        __int64 a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        int a3,
        char a4,
        _BYTE *a5,
        _DWORD *a6)
{
  _QWORD *v9; // r14
  _QWORD *i; // rax
  _QWORD *v11; // rbx

  if ( (unsigned int)(a3 - 1) > 1 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  v9 = (_QWORD *)(a1 + 128);
  *a6 = 0;
  for ( i = (_QWORD *)*v9; ; i = (_QWORD *)v11[12] )
  {
    if ( i == v9 )
      goto LABEL_15;
    v11 = i - 12;
    if ( !i )
      v11 = 0LL;
    if ( !v11 )
    {
LABEL_15:
      *a5 = 0;
      return 0LL;
    }
    if ( *((_DWORD *)v11 + 21) == 5
      && DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
           a2,
           (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v11 + 1),
           a4) )
    {
      break;
    }
  }
  *a6 = 7;
  *a5 = 1;
  return 0LL;
}
