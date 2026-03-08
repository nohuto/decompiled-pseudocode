/*
 * XREFs of ??0FxIoContext@@QEAA@XZ @ 0x1C0002A08
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00022E8 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     FxIoTargetSendIo @ 0x1C000E794 (FxIoTargetSendIo.c)
 *     FxIoTargetSendIoctl @ 0x1C00505DC (FxIoTargetSendIoctl.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0055B14 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C005D25C (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C00606BC (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 */

void __fastcall FxIoContext::FxIoContext(FxIoContext *this)
{
  this->m_RequestType = 1;
  this->m_RequestMemory = 0LL;
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
  this->__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  this->m_BufferToFree = 0LL;
  this->m_OriginalSystemBuffer = 0LL;
  this->m_OriginalUserBuffer = 0LL;
  this->m_MdlToFree = 0LL;
  this->m_OriginalMdl = 0LL;
  this->m_BufferToFreeLength = 0LL;
  this->m_MdlToFreeSize = 0LL;
  *(_WORD *)&this->m_CopyBackToBuffer = 0;
  this->m_RestoreState = 0;
  this->m_OtherMemory = 0LL;
}
