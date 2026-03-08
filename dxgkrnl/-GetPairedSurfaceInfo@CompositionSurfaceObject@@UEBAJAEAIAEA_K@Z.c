/*
 * XREFs of ?GetPairedSurfaceInfo@CompositionSurfaceObject@@UEBAJAEAIAEA_K@Z @ 0x1C007B580
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0051E98 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetPairedSurfaceInfo(
        CompositionSurfaceObject *this,
        unsigned int *a2,
        unsigned __int64 *a3)
{
  int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, unsigned int *, unsigned __int64 *); // rcx

  v6 = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 16));
  if ( v6 >= 0 )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD, unsigned int *, unsigned __int64 *))*((_QWORD *)this + 14);
    if ( v7 )
      v6 = (**v7)(v7, a2, a3);
    else
      v6 = -1073741811;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 16));
  }
  return (unsigned int)v6;
}
