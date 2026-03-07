bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 424) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
