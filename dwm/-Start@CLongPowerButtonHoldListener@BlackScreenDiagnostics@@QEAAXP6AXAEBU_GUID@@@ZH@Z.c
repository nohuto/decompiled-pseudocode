/*
 * XREFs of ?Start@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXP6AXAEBU_GUID@@@ZH@Z @ 0x140003F80
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003700 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall BlackScreenDiagnostics::CLongPowerButtonHoldListener::Start(
        BlackScreenDiagnostics::CLongPowerButtonHoldListener *this,
        void (*a2)(const struct _GUID *))
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  *(_BYTE *)this = 1;
  *((_QWORD *)this + 3) = BlackScreenDiagnostics::RunDiagnosticsFromLongPowerButtonHold;
  *((_DWORD *)this + 5) = 5000;
  if ( (int)RtlSubscribeWnfStateChangeNotification(
              (char *)this + 8,
              WNF_PO_POWER_BUTTON_STATE,
              0LL,
              BlackScreenDiagnostics::CLongPowerButtonHoldListener::WnfCallback,
              this,
              0LL,
              0,
              0) < 0 )
  {
    if ( *(_BYTE *)this )
    {
      *(_BYTE *)this = 0;
      if ( *v2 )
      {
        if ( (int)RtlUnsubscribeWnfStateChangeNotification() >= 0 )
          *v2 = 0LL;
      }
    }
  }
}
