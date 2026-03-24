/*
 * XREFs of ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x1C006B280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipManager::Delete(CFlipManager *this, void *a2)
{
  (*(void (__fastcall **)(CFlipManager *, void *))(*(_QWORD *)this + 8LL))(this, a2);
  return 0LL;
}
