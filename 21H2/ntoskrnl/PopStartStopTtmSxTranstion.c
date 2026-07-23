/*
 * XREFs of PopStartStopTtmSxTranstion @ 0x1408E7A20
 * Callers:
 *     PoTtmInitiatePowerStateTransition @ 0x1408EFCD8 (PoTtmInitiatePowerStateTransition.c)
 * Callees:
 *     PopExecutePowerAction @ 0x140775388 (PopExecutePowerAction.c)
 */

__int64 __fastcall PopStartStopTtmSxTranstion(char a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  _DWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v6; // [rsp+48h] [rbp-20h]

  v1 = 0;
  v4 = 0;
  v6 = 0LL;
  if ( a1 )
  {
    if ( !PopTtmIsSxTransitionInProgress )
    {
      v5[0] = 5;
      v5[1] = 128;
      v3 = 0x100000002LL;
      PopExecutePowerAction((__int64)v5, 0, &v3, 4, 1u);
    }
  }
  else if ( PopTtmIsSxTransitionInProgress )
  {
    PopTtmIsSxCompleteNotificationPending = 1;
    return 259;
  }
  return v1;
}
