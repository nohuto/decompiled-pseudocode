/*
 * XREFs of ?SetItem@FxWmiInstanceExternal@@MEAAJKKPEAX@Z @ 0x1C0029210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxWmiInstanceExternal::SetItem(
        FxWmiInstanceExternal *this,
        unsigned int DataItemId,
        unsigned int InBufferSize,
        void *InBuffer)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v5; // r10
  __int64 (__fastcall *v6)(unsigned __int64); // rax

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  v6 = *(__int64 (__fastcall **)(unsigned __int64))(v5 + 160);
  if ( v6 )
    return v6(ObjectHandleUnchecked);
  else
    return 3221226182LL;
}
