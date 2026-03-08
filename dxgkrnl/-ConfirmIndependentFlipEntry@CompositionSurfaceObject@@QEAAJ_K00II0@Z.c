/*
 * XREFs of ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00789DC
 * Callers:
 *     ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C007897C (-ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ.c)
 *     ?Confirm@CFlipContentToken@@UEAAXXZ @ 0x1C0089150 (-Confirm@CFlipContentToken@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z @ 0x1C007B990 (-ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::ConfirmIndependentFlipEntry(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  int v11; // ebx

  v11 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 48));
  if ( v11 >= 0 )
  {
    CCompositionSurface::ConfirmIndependentFlipEntry(
      (CompositionSurfaceObject *)((char *)this + 40),
      a2,
      a3,
      a4,
      a5,
      a6,
      a7);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)v11;
}
