/*
 * XREFs of ?NotifyTokenCompleted@CompositionSurfaceObject@@QEAAJAEBVCFlipToken@@@Z @ 0x1C0079388
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C0078FE8 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C007BE28 (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::NotifyTokenCompleted(
        CompositionSurfaceObject *this,
        const struct CFlipToken *a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 48));
  if ( v4 >= 0 )
  {
    v4 = CCompositionSurface::NotifyTokenCompleted((CompositionSurfaceObject *)((char *)this + 40), a2);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)v4;
}
