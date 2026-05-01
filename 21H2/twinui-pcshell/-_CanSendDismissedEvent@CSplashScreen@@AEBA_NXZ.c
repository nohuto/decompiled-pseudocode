/*
 * XREFs of ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x1801FB3D4
 * Callers:
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801FB3F0 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSplashScreen::_CanSendDismissedEvent(CSplashScreen *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 128) )
    return *((_BYTE *)this + 129) == 0;
  return result;
}
