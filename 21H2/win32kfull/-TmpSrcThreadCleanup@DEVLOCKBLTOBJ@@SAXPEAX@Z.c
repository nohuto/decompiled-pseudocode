/*
 * XREFs of ?TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z @ 0x1C015DC40
 * Callers:
 *     <none>
 * Callees:
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015DB6C (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::TmpSrcThreadCleanup(HSURF *a1)
{
  if ( a1 )
    DEVLOCKBLTOBJ::TmpSrcCleanup(a1);
}
