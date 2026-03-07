__int64 __fastcall KeAbPreWakeupThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = KiAbFindWakeupLockEntry(a2, a1);
  if ( result )
    return KiAbApplyWakeupBoost(a3, result);
  return result;
}
