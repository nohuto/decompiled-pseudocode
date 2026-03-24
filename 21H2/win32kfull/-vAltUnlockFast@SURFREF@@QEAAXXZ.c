/*
 * XREFs of ?vAltUnlockFast@SURFREF@@QEAAXXZ @ 0x1C02735FC
 * Callers:
 *     GreDereferenceObject @ 0x1C004B94C (GreDereferenceObject.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C016AEEC (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vAltUnlockFast(SURFREF *this, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    DEC_SHARE_REF_CNT(v2, a2);
}
