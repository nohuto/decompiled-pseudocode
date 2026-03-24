/*
 * XREFs of CleanupModuleAllocations @ 0x1C01362E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void CleanupModuleAllocations()
{
  if ( unk_1C0336670 )
    Win32FreePool(unk_1C0336670);
  if ( gpQmsgHistory )
  {
    Win32FreePool(gpQmsgHistory);
    gpQmsgHistory = 0LL;
  }
  if ( gpQmsgHistory2 )
  {
    Win32FreePool(gpQmsgHistory2);
    gpQmsgHistory2 = 0LL;
  }
  if ( gpAtomickCheckStacks )
  {
    Win32FreePool(gpAtomickCheckStacks);
    gpAtomickCheckStacks = 0LL;
  }
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    Win32FreePool(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
  }
}
