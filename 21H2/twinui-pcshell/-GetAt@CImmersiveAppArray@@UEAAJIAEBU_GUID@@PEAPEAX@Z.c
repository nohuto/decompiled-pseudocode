/*
 * XREFs of ?GetAt@CImmersiveAppArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180084040
 * Callers:
 *     ?GetAt@CImmersiveAppArray@@W7EAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180161DC0 (-GetAt@CImmersiveAppArray@@W7EAAJIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveAppArray::GetAt(CImmersiveAppArray *this, __int64 a2, const struct _GUID *a3, void **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, void **))(**((_QWORD **)this + 3) + 32LL))(
           *((_QWORD *)this + 3),
           a2,
           a3,
           a4);
}
