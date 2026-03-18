/*
 * XREFs of ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C08F4
 * Callers:
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C02C11E0 (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::CreateFormattingBuffer(ADAPTER_RENDER *this)
{
  if ( *((_QWORD *)this + 156) )
  {
    WdLogSingleEntry1(1LL, 4225LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pFormattingBuffer == NULL", 4225LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 156) )
    *((_QWORD *)this + 156) = operator new[](0xFC00uLL, 0x4B677844u, 64LL);
}
