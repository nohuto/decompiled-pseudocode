/*
 * XREFs of ?vAltUnlockFast@SURFREF@@QEAAXXZ @ 0x1C0271354
 * Callers:
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015DB6C (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vAltUnlockFast(SURFREF *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
