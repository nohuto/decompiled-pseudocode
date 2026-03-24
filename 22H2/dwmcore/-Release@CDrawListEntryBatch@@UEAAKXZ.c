/*
 * XREFs of ?Release@CDrawListEntryBatch@@UEAAKXZ @ 0x180092A60
 * Callers:
 *     ?Release@CDrawListEntryBatch@@W7EAAKXZ @ 0x1800F5CD0 (-Release@CDrawListEntryBatch@@W7EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListEntryBatch::Release(CDrawListEntryBatch *this)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)((char *)this + 8);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 && v1 )
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 16LL))(v1, 1LL);
  return v2;
}
