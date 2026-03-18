/*
 * XREFs of ??1FxAutoString@@QEAA@XZ @ 0x1C0046B00
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C0047A80 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfDriverCreate @ 0x1C004BEB0 (imp_WdfDriverCreate.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00503B0 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     LogDriverInfoStream @ 0x1C00600B0 (LogDriverInfoStream.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxAutoString::~FxAutoString(FxAutoString *this)
{
  wchar_t *Buffer; // rcx

  Buffer = this->m_UnicodeString.Buffer;
  if ( Buffer )
  {
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    *this = 0LL;
  }
}
