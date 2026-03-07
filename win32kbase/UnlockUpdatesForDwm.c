void UnlockUpdatesForDwm()
{
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 0;
}
