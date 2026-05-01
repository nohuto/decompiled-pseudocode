/*
 * XREFs of ?GetUniqueCallingContext@ComTaskPool@Internal@Windows@@SAKXZ @ 0x1801BC2F4
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180265DF4 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int Windows::Internal::ComTaskPool::GetUniqueCallingContext(void)
{
  return SHTaskPoolGetUniqueContext();
}
