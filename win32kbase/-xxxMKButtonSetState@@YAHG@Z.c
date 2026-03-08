/*
 * XREFs of ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01E4B80
 * Callers:
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x1C01E4B20 (-xxxMKButtonClick@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01E5AD0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     MouseButtonAction @ 0x1C0218130 (MouseButtonAction.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C0241574 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

__int64 __fastcall xxxMKButtonSetState(__int16 a1)
{
  BOOL v1; // edi
  __int16 v2; // bx

  v1 = a1 != 0;
  if ( a1 )
    v2 = gwMKButtonState & ~gwMKCurrentButton;
  else
    v2 = gwMKButtonState | gwMKCurrentButton;
  if ( (((unsigned __int8)gwMKButtonState ^ (unsigned __int8)v2) & 1) != 0 )
    MouseButtonAction(1LL, a1 != 0);
  if ( (((unsigned __int8)gwMKButtonState ^ (unsigned __int8)v2) & 2) != 0 )
    MouseButtonAction(2LL, v1);
  gwMKButtonState = v2;
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
  return 0LL;
}
