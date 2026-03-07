__int64 __fastcall HUBDSM_SignalingDeviceQueryTextEvent(__int64 a1)
{
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 960) + 472LL), 0, 0);
  return 4077LL;
}
