/*
 * XREFs of ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0215C04
 * Callers:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0216428 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CManipulationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021ACF0 (-SetRemarshalingFlags@CManipulationMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022AD80 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022DC70 (-SetRemarshalingFlags@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C022EC30 (-SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0230E50 (-SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0231810 (-SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(
        DirectComposition::CNotificationResourceMarshaler *this)
{
  if ( *((_DWORD *)this + 16) )
    *((_DWORD *)this + 4) |= 0x20u;
  return (*((_DWORD *)this + 4) & 0x20) != 0;
}
