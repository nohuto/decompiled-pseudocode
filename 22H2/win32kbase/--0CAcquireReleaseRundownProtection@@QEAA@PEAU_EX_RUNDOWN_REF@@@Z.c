/*
 * XREFs of ??0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z @ 0x1C00D02A8
 * Callers:
 *     PostWinlogonMessage @ 0x1C0086360 (PostWinlogonMessage.c)
 *     SendWinlogonPowerMessageWorker @ 0x1C00D0550 (SendWinlogonPowerMessageWorker.c)
 * Callees:
 *     <none>
 */

CAcquireReleaseRundownProtection *__fastcall CAcquireReleaseRundownProtection::CAcquireReleaseRundownProtection(
        CAcquireReleaseRundownProtection *this,
        struct _EX_RUNDOWN_REF *a2)
{
  *(_QWORD *)this = 0LL;
  if ( ExAcquireRundownProtection(&gWinLogonRpcHandleRundownRef) )
    *(_QWORD *)this = &gWinLogonRpcHandleRundownRef;
  return this;
}
