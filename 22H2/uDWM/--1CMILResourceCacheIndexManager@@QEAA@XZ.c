/*
 * XREFs of ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x180053824
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x1800587F0 (_dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__.c)
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
