/*
 * XREFs of ?CleanupRoutine@?$HmgShareLockResult@VLFONT@@@@QEAAXXZ @ 0x1C013FFF4
 * Callers:
 *     ??1?$HmgShareLockResult@VLFONT@@@@QEAA@XZ @ 0x1C013FFC8 (--1-$HmgShareLockResult@VLFONT@@@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VLFONT@@@@@@SAXPEAX@Z @ 0x1C0140030 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@V-$HmgShareLockResult@.c)
 * Callees:
 *     <none>
 */

void __fastcall HmgShareLockResult<LFONT>::CleanupRoutine(struct LFONT **a1)
{
  struct LFONT *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v2);
    *a1 = 0LL;
  }
}
