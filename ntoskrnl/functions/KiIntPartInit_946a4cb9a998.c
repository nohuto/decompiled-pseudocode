__int64 KiIntPartInit()
{
  ULONG ActiveProcessorCount; // eax
  __int64 v1; // rcx
  __int64 result; // rax

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  KiInterruptEfficiencyClassGroup = IntPartGetClassAffinityGroup(v1, ActiveProcessorCount);
  if ( !KiInterruptEfficiencyClassGroup )
    return 3221225626LL;
  result = IntPartCreate((KiInterruptSteeringFlags & 4) != 0, (KiInterruptSteeringFlags & 4) != 0);
  KiIntPartInitialized = 1;
  return result;
}
