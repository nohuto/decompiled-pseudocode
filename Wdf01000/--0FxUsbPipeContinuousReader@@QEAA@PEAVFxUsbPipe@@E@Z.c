/*
 * XREFs of ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x1C005973C
 * Callers:
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C005A9EC (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0016B54 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

void __fastcall FxUsbPipeContinuousReader::FxUsbPipeContinuousReader(
        FxUsbPipeContinuousReader *this,
        FxUsbPipe *Pipe,
        unsigned __int8 NumReaders)
{
  this->m_NumReaders = NumReaders;
  this->m_NumFailedReaders = 0;
  `vector constructor iterator'(
    (char *)this->m_Readers,
    0x78uLL,
    1uLL,
    (void *(__fastcall *)(void *))FxUsbPipeRepeatReader::FxUsbPipeRepeatReader);
  this->m_WorkItem = 0LL;
  this->m_WorkItemRerunContext = 0LL;
  this->m_WorkItemFlags = 0;
  *(_WORD *)&this->m_WorkItemQueued = 0;
  this->m_Lookaside = 0LL;
  this->m_WorkItemThread = 0LL;
  this->m_Pipe = Pipe;
  this->m_TargetDevice = Pipe->m_TargetDevice;
  memset(this->m_Readers, 0, 120LL * this->m_NumReaders);
}
