/*
 * XREFs of ??0LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1C015C188
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C006D934 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     IS_USERCRIT_OWNED @ 0x1C0079494 (IS_USERCRIT_OWNED.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *__fastcall LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired(
        LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *this)
{
  __int64 v2; // rcx

  if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    *(_BYTE *)this = 1;
  }
  else
  {
    *(_BYTE *)this = 0;
    if ( !IS_USERCRIT_OWNED() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  if ( *(_BYTE *)this )
  {
    UserSessionSwitchLeaveCrit(v2);
    EnterCrit(1LL, 0LL);
  }
  return this;
}
