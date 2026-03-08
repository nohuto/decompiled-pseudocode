/*
 * XREFs of ??1FxAutoString@@QEAA@XZ @ 0x1C0031480
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C00327E0 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfDriverCreate @ 0x1C0037350 (imp_WdfDriverCreate.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C003C320 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     LogDriverInfoStream @ 0x1C004D7C4 (LogDriverInfoStream.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
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
