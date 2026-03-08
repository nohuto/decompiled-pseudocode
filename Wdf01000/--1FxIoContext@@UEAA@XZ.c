/*
 * XREFs of ??1FxIoContext@@UEAA@XZ @ 0x1C0002AA0
 * Callers:
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0006E60 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     FxIoTargetSendIo @ 0x1C000E794 (FxIoTargetSendIo.c)
 *     FxIoTargetSendIoctl @ 0x1C00505DC (FxIoTargetSendIoctl.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C005D25C (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C00606BC (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C0048258 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxIoContext::~FxIoContext(FxIoContext *this)
{
  void *m_BufferToFree; // rcx
  _MDL *m_MdlToFree; // rcx

  this->__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  m_BufferToFree = this->m_BufferToFree;
  if ( m_BufferToFree )
  {
    FxPoolFree(m_BufferToFree);
    this->m_BufferToFree = 0LL;
  }
  this->m_BufferToFreeLength = 0LL;
  m_MdlToFree = this->m_MdlToFree;
  this->m_CopyBackToBuffer = 0;
  if ( m_MdlToFree )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_MdlToFree);
      this->m_UnlockPages = 0;
    }
    if ( BYTE4(this->m_OriginalMdl[6].StartVa) )
      FxMdlFreeDebug(this->m_DriverGlobals, this->m_MdlToFree);
    else
      IoFreeMdl(this->m_MdlToFree);
    this->m_MdlToFree = 0LL;
  }
  this->__vftable = (FxIoContext_vtbl *)FxRequestContext::`vftable';
}
