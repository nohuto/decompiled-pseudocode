/*
 * XREFs of ?TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z @ 0x1C026E600
 * Callers:
 *     <none>
 * Callees:
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026E504 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::TmpSrcThreadCleanup(DEVLOCKBLTOBJ *a1)
{
  if ( a1 )
    DEVLOCKBLTOBJ::TmpSrcCleanup(a1);
}
