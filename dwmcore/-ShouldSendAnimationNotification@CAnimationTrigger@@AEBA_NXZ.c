/*
 * XREFs of ?ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ @ 0x18001F4F8
 * Callers:
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x18001F3EC (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001F4C0 (-OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAnimationTrigger::ShouldSendAnimationNotification(CAnimationTrigger *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 10) && *((_QWORD *)this + 11) && (*((_BYTE *)this + 128) & 2) == 0 )
    return 1;
  return result;
}
