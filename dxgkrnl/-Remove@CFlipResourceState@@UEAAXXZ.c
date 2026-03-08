/*
 * XREFs of ?Remove@CFlipResourceState@@UEAAXXZ @ 0x1C0084EB0
 * Callers:
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C0086F70 (-Remove@CContentResourceState@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipResourceState::Remove(CFlipResourceState *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 32);
  if ( (v1 & 1) != 0 )
    (*(void (__fastcall **)(CFlipResourceState *))(*(_QWORD *)this + 32LL))(this);
  else
    *((_BYTE *)this + 32) = v1 | 2;
}
