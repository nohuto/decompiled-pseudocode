__int64 __fastcall HUBDSM_FlushingPnpEventsForBootDevice(__int64 a1)
{
  HUBPDO_SignalPnpPowerEvent(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
