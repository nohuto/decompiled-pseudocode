/*
 * XREFs of PopStartStopTtmSxTranstion @ 0x140987998
 * Callers:
 *     PoTtmInitiatePowerStateTransition @ 0x140994BF8 (PoTtmInitiatePowerStateTransition.c)
 * Callees:
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 */

__int64 __fastcall PopStartStopTtmSxTranstion(char a1)
{
  unsigned int v1; // ebx
  _DWORD v3[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v4[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v5; // [rsp+48h] [rbp-20h]

  v1 = 0;
  v3[2] = 0;
  v5 = 0LL;
  if ( a1 )
  {
    if ( !PopTtmIsSxTransitionInProgress )
    {
      v4[0] = 5;
      v4[1] = 128;
      v3[0] = 2;
      v3[1] = 1;
      PopExecutePowerAction(v4, 0, v3, 4, 1u);
    }
  }
  else if ( PopTtmIsSxTransitionInProgress )
  {
    PopTtmIsSxCompleteNotificationPending = 1;
    return 259;
  }
  return v1;
}
