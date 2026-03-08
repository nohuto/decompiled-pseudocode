/*
 * XREFs of ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C00988FC
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C009846C (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0098744 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::DiscardAllCompositionFrames(DirectComposition::CConnection *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 23);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
}
