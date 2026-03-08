/*
 * XREFs of ?PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C007B730
 * Callers:
 *     <none>
 * Callees:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x1C000C3B4 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::PairedBind(
        CompositionSurfaceObject *this,
        struct CSM_BUFFER_INFO *a2,
        bool a3,
        unsigned __int64 *a4)
{
  int v8; // ebx
  bool v10; // [rsp+20h] [rbp-38h]

  v8 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 16));
  if ( v8 >= 0 )
  {
    v8 = CCompositionSurface::Bind((CompositionSurfaceObject *)((char *)this + 8), a2, a3, 0, v10, 1, a4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 16));
  }
  return (unsigned int)v8;
}
