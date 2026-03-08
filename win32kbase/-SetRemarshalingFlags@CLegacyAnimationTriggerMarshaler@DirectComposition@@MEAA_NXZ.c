/*
 * XREFs of ?SetRemarshalingFlags@CLegacyAnimationTriggerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02623C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CLegacyAnimationTriggerMarshaler::SetRemarshalingFlags(
        DirectComposition::CLegacyAnimationTriggerMarshaler *this)
{
  return (*((_DWORD *)this + 4) & 0x20) != 0;
}
