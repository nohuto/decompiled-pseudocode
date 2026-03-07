_BOOL8 IsDwmApiPortRegistered()
{
  return WPP_MAIN_CB.Queue.Wcb.DeviceContext != 0LL;
}
