__int64 __fastcall EditionExtensibility_WakeMITForInterceptCallout(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(SGDGetUserSessionState(a1) + 15976), 1, 1) )
    return 0LL;
  EtwTraceWakeMIT(4LL);
  return (unsigned __int8)WakeMIT(4LL, v1, v2, v3);
}
