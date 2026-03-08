/*
 * XREFs of PopFxResetSocSubsystemAccounting @ 0x140982D5C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140879AD8 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 */

__int64 __fastcall PopFxResetSocSubsystemAccounting(int a1)
{
  int v1; // ecx
  unsigned int v2; // ebx
  int v4; // [rsp+40h] [rbp+18h] BYREF
  int v5; // [rsp+44h] [rbp+1Ch]

  v2 = 0;
  if ( PopFxLookupSocSubsystemsByPlatformIdleState(a1) )
  {
    v4 = v1;
    v5 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, int *))(PopFxProcessorPlugin + 96))(38LL, &v4) )
      PopFxBugCheck(0x605uLL, 0x26uLL, PopFxProcessorPlugin, 0LL);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v2;
}
