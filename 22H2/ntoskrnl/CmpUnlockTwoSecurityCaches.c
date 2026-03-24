/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x14076F7B8
 * Callers:
 *     CmpCopyKeyPartial @ 0x14076F54C (CmpCopyKeyPartial.c)
 *     CmpDoBuildVirtualStack @ 0x14086FFEC (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x140879E7C (CmpSyncKeyValues.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 */

char __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rax

  v2 = a1 + 1776;
  if ( a1 != a2 )
  {
    ExReleasePushLockEx(a1 + 1776, 0LL);
    v2 = a2 + 1776;
  }
  return ExReleasePushLockEx(v2, 0LL);
}
