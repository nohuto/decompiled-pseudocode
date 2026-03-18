/*
 * XREFs of ??1LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1C015C200
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     <none>
 */

void __fastcall LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::~LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired(
        LeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( *(_BYTE *)this )
  {
    UserSessionSwitchLeaveCrit(this);
    EnterSharedCrit(v2, v1, v3);
  }
}
