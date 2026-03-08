/*
 * XREFs of ?ClearWaitHandles@CManipulationManager@@KAXXZ @ 0x18019AAB8
 * Callers:
 *     ?Initialize@CManipulationManager@@IEAAJXZ @ 0x1800CAB14 (-Initialize@CManipulationManager@@IEAAJXZ.c)
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x18019E1EC (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void CManipulationManager::ClearWaitHandles(void)
{
  HANDLE *v0; // rbx
  __int64 v1; // rdi

  v0 = &CManipulationManager::s_rghWaitEvents;
  v1 = 3LL;
  do
  {
    if ( *v0 )
    {
      CloseHandle(*v0);
      *v0 = 0LL;
    }
    ++v0;
    --v1;
  }
  while ( v1 );
}
