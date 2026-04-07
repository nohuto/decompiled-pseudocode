/*
 * XREFs of _dynamic_atexit_destructor_for__ColorCache::_lock__ @ 0x180058790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__ColorCache::_lock__()
{
  DeleteCriticalSection(&ColorCache::_lock);
}
