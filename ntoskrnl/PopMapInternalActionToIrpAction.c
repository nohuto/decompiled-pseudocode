/*
 * XREFs of PopMapInternalActionToIrpAction @ 0x140584D54
 * Callers:
 *     PopRequestPowerIrp @ 0x1402BA570 (PopRequestPowerIrp.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 *     PopNotifyDevice @ 0x140AA415C (PopNotifyDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopMapInternalActionToIrpAction(unsigned int a1, int a2, char a3)
{
  __int64 result; // rax

  result = 7LL;
  if ( a1 == 7 )
  {
    if ( a3 )
      return 3 - (unsigned int)(a2 != 5);
  }
  else
  {
    if ( a2 == 5 )
      return 3;
    return a1;
  }
  return result;
}
