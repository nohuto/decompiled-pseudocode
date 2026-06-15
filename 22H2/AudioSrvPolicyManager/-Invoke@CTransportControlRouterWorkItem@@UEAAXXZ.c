/*
 * XREFs of ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x18002CE00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x18000A610 (WPP_SF_S.c)
 */

void __fastcall CTransportControlRouterWorkItem::Invoke(CTransportControlRouterWorkItem *this)
{
  CApplicationManager *v2; // rcx

  v2 = (CApplicationManager *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Fu,
      &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids,
      *((const wchar_t **)this + 2));
  }
  CApplicationManager::HandleMediaPlaybackRequestForApp(
    v2,
    *((const unsigned __int16 **)this + 2),
    *((_QWORD *)this + 3),
    *((_DWORD *)this + 2));
}
