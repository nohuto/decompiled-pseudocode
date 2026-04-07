/*
 * XREFs of ?Cleanup@CWaitForService@@QEAAXXZ @ 0x180085E04
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004BEC0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800876D8 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?s_ServiceStarted@CWaitForService@@CAXPEAX@Z @ 0x180087920 (-s_ServiceStarted@CWaitForService@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWaitForService::Cleanup(SC_HANDLE *this)
{
  SC_HANDLE v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseServiceHandle(v2);
    *this = 0LL;
  }
}
