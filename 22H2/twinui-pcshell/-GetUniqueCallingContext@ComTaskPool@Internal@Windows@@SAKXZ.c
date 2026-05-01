/*
 * XREFs of ?GetUniqueCallingContext@ComTaskPool@Internal@Windows@@SAKXZ @ 0x1801BC144
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180265C44 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int Windows::Internal::ComTaskPool::GetUniqueCallingContext(void)
{
  return SHTaskPoolGetUniqueContext();
}
