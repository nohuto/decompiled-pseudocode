__int64 __fastcall HUBDSM_UpdatingDeviceStatusToU2Disabled(__int64 a1)
{
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + 2216LL), 0xFFFFFFF7);
  return 4077LL;
}
