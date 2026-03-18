/*
 * XREFs of ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02244D0
 * Callers:
 *     ?SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02243B0 (-SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02246B0 (-SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0224D70 (-SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022CDB0 (-SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C020EA30 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CBaseExpressionMarshaler *this)
{
  bool v2; // al
  char v3; // dl

  *((_DWORD *)this + 4) &= 0xFFFFFB3F;
  v2 = DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_BYTE *)this + 120) & 3) != 0 )
    return 1;
  return v3;
}
