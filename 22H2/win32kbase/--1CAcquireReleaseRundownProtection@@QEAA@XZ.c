/*
 * XREFs of ??1CAcquireReleaseRundownProtection@@QEAA@XZ @ 0x1C00D036C
 * Callers:
 *     PostWinlogonMessage @ 0x1C0086360 (PostWinlogonMessage.c)
 *     SendWinlogonPowerMessageWorker @ 0x1C00D0550 (SendWinlogonPowerMessageWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection(struct _EX_RUNDOWN_REF **this)
{
  struct _EX_RUNDOWN_REF *v1; // rcx

  v1 = *this;
  if ( v1 )
    ExReleaseRundownProtection(v1);
}
