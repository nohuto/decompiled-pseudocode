/*
 * XREFs of _dynamic_atexit_destructor_for__CSyncLockGroup::g_syncLockGroups__ @ 0x180120200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CSyncLockGroup::g_syncLockGroups__()
{
  std::vector<std::unique_ptr<CSyncLockGroup>>::_Tidy((__int64)&CSyncLockGroup::g_syncLockGroups);
}
