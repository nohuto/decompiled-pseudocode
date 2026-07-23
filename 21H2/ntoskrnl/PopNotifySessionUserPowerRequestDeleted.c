/*
 * XREFs of PopNotifySessionUserPowerRequestDeleted @ 0x1406709B4
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140270A38 (PopPowerRequestCleanUp.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140270CF4 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140414300 (memset.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1408FED34 (TtmNotifySessionPowerRequestDeleted.c)
 */

__int64 __fastcall PopNotifySessionUserPowerRequestDeleted(__int64 a1, int a2)
{
  __int64 result; // rax
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  if ( TtmpEnabled == 1 )
    result = TtmNotifySessionPowerRequestDeleted();
  if ( PopPowerRequestNotificationsEnabled )
  {
    memset(Src, 0, 0x48uLL);
    Src[0] = 17;
    Src[2] = a2;
    return PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
  }
  return result;
}
