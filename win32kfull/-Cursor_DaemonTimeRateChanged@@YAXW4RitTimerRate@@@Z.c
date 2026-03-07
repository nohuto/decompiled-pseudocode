void __fastcall Cursor_DaemonTimeRateChanged(int a1)
{
  if ( WPP_MAIN_CB.DeviceQueue.Lock )
  {
    if ( a1 == 1 )
    {
      gdwLastAniTick = 0;
      zzzAnimateCursor(0LL, 0LL, 0LL);
    }
  }
}
