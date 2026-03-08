/*
 * XREFs of ?IsQueryInstanceSupported@FxWmiInstanceInternal@@MEAAEXZ @ 0x1C0028E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FxWmiInstanceInternal::IsQueryInstanceSupported(FxWmiInstanceInternal *this)
{
  return this->m_QueryInstance != 0LL;
}
