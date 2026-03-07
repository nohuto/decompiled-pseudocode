__int64 __fastcall HUBDSM_ClearingDeviceLostProgammingFlagOnRestart(__int64 a1)
{
  volatile signed __int32 *v1; // roff

  v1 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + 1636LL);
  _InterlockedAnd(v1, 0xFFFFFFDF);
  _InterlockedAnd(v1, 0xFFEFFFFF);
  return 4077LL;
}
