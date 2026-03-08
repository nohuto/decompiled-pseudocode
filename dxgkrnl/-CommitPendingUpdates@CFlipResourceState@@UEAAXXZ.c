/*
 * XREFs of ?CommitPendingUpdates@CFlipResourceState@@UEAAXXZ @ 0x1C0084B90
 * Callers:
 *     ?CommitPendingUpdates@CContentResourceState@@UEAAXXZ @ 0x1C0085510 (-CommitPendingUpdates@CContentResourceState@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipResourceState::CommitPendingUpdates(CFlipResourceState *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 32);
  if ( (v1 & 4) != 0 )
  {
    v1 &= 0xFAu;
    *((_BYTE *)this + 32) = v1;
  }
  if ( (v1 & 8) != 0 )
    (*(void (__fastcall **)(CFlipResourceState *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
}
