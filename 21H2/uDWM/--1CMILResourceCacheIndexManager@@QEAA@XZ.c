/*
 * XREFs of ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x1800538D4
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x180058B10 (_dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILResourceCacheIndexManager::~CMILResourceCacheIndexManager(CMILResourceCacheIndexManager *this)
{
  if ( byte_1800E3F08 )
  {
    DeleteCriticalSection(&g_ResourceCacheIndexManager);
    byte_1800E3F08 = 0;
  }
}
