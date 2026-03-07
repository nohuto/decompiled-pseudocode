__int64 __fastcall HUBDSM_DetachedWithResetPending(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 16LL) + 32LL) |= 0x100u;
  return 1000LL;
}
