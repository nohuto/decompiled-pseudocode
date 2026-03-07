__int64 __fastcall PspSetJobIoPriorityLimitPreCallback(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 1068);
  PspUpdateJobEffectivePriorityLimits(a1, 1);
  return 0LL;
}
