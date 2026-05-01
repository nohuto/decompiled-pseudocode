/*
 * XREFs of ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x1802202A8
 * Callers:
 *     ?_TrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ @ 0x1800AB430 (-_TrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
        ThreadpoolHelpers *this,
        struct _TP_TIMER *a2,
        DWORD a3)
{
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp+10h] BYREF

  pftDueTime = (struct _FILETIME)(-10000LL * (_QWORD)a2);
  SetThreadpoolTimer(this, &pftDueTime, a3, 0);
}
