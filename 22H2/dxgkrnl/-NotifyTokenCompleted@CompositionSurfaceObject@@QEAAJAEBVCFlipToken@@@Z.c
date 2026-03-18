/*
 * XREFs of ?NotifyTokenCompleted@CompositionSurfaceObject@@QEAAJAEBVCFlipToken@@@Z @ 0x1C007A028
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C0079C88 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0013814 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C007CA58 (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
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
