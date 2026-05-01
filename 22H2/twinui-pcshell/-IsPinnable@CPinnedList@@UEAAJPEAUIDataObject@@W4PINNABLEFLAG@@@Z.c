/*
 * XREFs of ?IsPinnable@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@@Z @ 0x180159400
 * Callers:
 *     ?IsPinnable@CPinnedList@@W7EAAJPEAUIDataObject@@W4PINNABLEFLAG@@@Z @ 0x180171DE0 (-IsPinnable@CPinnedList@@W7EAAJPEAUIDataObject@@W4PINNABLEFLAG@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedList::IsPinnable(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
}
