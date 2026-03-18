/*
 * XREFs of ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C005D134
 * Callers:
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C005D190 (imp_WdfDeviceCreateDeviceInterface.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C007EEF0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxDeviceInterface *__fastcall FxDeviceInterface::`scalar deleting destructor'(FxDeviceInterface *this)
{
  wchar_t *Buffer; // rcx

  Buffer = this->m_ReferenceString.Buffer;
  if ( Buffer )
  {
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    this->m_ReferenceString = 0LL;
  }
  if ( this->m_SymbolicLinkName.Buffer )
    RtlFreeUnicodeString(&this->m_SymbolicLinkName);
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
