__int64 RecreateTouchInjectionDevices()
{
  __int64 result; // rax

  result = 1LL;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 1;
  return result;
}
