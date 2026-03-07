__int64 __fastcall EditionKeepMachineUp(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  enum POWER_MONITOR_REQUEST_REASON v5; // eax
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  if ( (!gbBlockSendInputResets || (a4 & 8) == 0) && ((*gpsi & 0x4000) == 0 || (a4 & 2) != 0) )
  {
    v5 = (unsigned int)MapInputToMonitorOnReason(a2);
    KeepMachineUp(v5);
  }
  if ( *(_DWORD *)(SGDGetUserSessionState(a1) + 2944) )
  {
    v7 = gpsi;
    LOBYTE(v7) = (*gpsi & 0x4000) != 0;
    if ( ((unsigned __int8)v7 & ((a4 & 2) == 0)) == 0 )
    {
      v8 = 0LL;
      *(_DWORD *)(SGDGetUserSessionState(v7) + 2944) = 0;
      LODWORD(v8) = 8;
      QueuePowerRequest(&v8, 0LL);
    }
  }
  return 1LL;
}
