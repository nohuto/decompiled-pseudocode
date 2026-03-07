char __fastcall WheaSelLogInitialize(__int64 a1)
{
  __int64 v2; // rax

  WheaIpmiContextLock = 0LL;
  v2 = *(_QWORD *)(a1 + 240);
  if ( *(_QWORD *)(v2 + 3704) )
  {
    LODWORD(v2) = IpmiHwInitializeContext();
    if ( (int)v2 >= 0 )
    {
      LOBYTE(v2) = WheaSelLogSetNtSchedulerAvailability();
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x80000) != 0 )
        LOBYTE(v2) = WheaSelLogCheckPoint();
    }
  }
  return v2;
}
