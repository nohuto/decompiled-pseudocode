__int64 __fastcall EditionInitiateMouseEventProcessing(__int64 a1, int a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax

  v3 = a1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(SGDGetUserSessionState(a1) + 15976), 1, 1) )
  {
    EtwTraceWakeMIT(1LL);
    result = WakeMIT(1LL, v4, v5, v6);
  }
  else
  {
    EtwTraceWakeRIT(1LL);
    result = WakeRIT(1LL);
  }
  if ( v3 )
    return xxxUserBeep(0x1B8u, 0x7Du, a2 == 0);
  return result;
}
