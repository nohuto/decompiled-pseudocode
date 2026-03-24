/*
 * XREFs of ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C0119BBC
 * Callers:
 *     NtUserGetRequiredCursorSizes @ 0x1C0119B10 (NtUserGetRequiredCursorSizes.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0103D60 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C010B1D8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CCursorSizes::HandleRequestCursorSizesRequest(CCursorSizes *this, struct tagCURSORSIZEINFO *a2)
{
  CCursorSizes *v2; // rdi

  v2 = gpCursorSizes;
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  *(_OWORD *)a2 = *(_OWORD *)((char *)v2 + 24);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)v2 + 40);
  *((_QWORD *)a2 + 4) = *((_QWORD *)v2 + 7);
  CPushLock::ReleaseLock((CCursorSizes *)((char *)v2 + 64));
}
