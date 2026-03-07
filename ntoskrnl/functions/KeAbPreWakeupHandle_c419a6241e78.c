__int64 __fastcall KeAbPreWakeupHandle(__int64 a1, unsigned int a2)
{
  return KiAbApplyWakeupBoost(a2, a1);
}
