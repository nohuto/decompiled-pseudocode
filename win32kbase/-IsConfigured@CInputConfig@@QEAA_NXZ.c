/*
 * XREFs of ?IsConfigured@CInputConfig@@QEAA_NXZ @ 0x1C02139B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInputConfig::IsConfigured(CInputConfig *this)
{
  return *((_BYTE *)this + 1504) == 0;
}
