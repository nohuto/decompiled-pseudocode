/*
 * XREFs of ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C00DDF8C
 * Callers:
 *     NtUserGetRequiredCursorSizes @ 0x1C00DDEE0 (NtUserGetRequiredCursorSizes.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00DBE14 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00E001C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

void __fastcall CCursorSizes::HandleRequestCursorSizesRequest(CCursorSizes *this, struct tagCURSORSIZEINFO *a2)
{
  CCursorSizes *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = gpCursorSizes;
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  *(_OWORD *)a2 = *(_OWORD *)((char *)v2 + 24);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)v2 + 40);
  *((_QWORD *)a2 + 4) = *((_QWORD *)v2 + 7);
  CPushLock::ReleaseLock((CCursorSizes *)((char *)v2 + 64), v4, v5);
}
