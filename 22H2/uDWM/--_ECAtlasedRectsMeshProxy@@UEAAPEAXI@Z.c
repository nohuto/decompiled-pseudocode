/*
 * XREFs of ??_ECAtlasedRectsMeshProxy@@UEAAPEAXI@Z @ 0x180022C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

CAtlasedRectsMeshProxy *__fastcall CAtlasedRectsMeshProxy::`vector deleting destructor'(
        CAtlasedRectsMeshProxy *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CTransform3dGroupProxy::`vftable';
  v4 = *((_QWORD *)this + 2);
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAtlasedRectsMeshProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
