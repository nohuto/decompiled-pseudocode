__int64 PopBootBatteryStatusWorker()
{
  int v1; // [rsp+20h] [rbp-40h] BYREF
  int v2; // [rsp+28h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-30h] BYREF
  __int128 v4; // [rsp+40h] [rbp-20h]

  v3 = 0LL;
  v4 = 0LL;
  PopCurrentPowerState(&v3);
  v1 = HIDWORD(v3);
  v2 = DWORD2(v3);
  *((_QWORD *)&v3 + 1) = 4LL;
  *(_QWORD *)&v3 = &v1;
  *((_QWORD *)&v4 + 1) = 4LL;
  *(_QWORD *)&v4 = &v2;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_BOOT_BATTERY_STATUS_CONTROL_EVENT, 2LL, &v3);
}
