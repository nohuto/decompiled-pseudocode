/*
 * XREFs of ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0122B8C
 * Callers:
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C012302C (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ndisWaitForExternalDriver @ 0x1C0123078 (ndisWaitForExternalDriver.c)
 */

void __fastcall NdisWatchdogState::WaitSynchronously(NdisWatchdogState *this, struct _KEVENT *a2)
{
  if ( !*((_BYTE *)this + 264) )
  {
    if ( (unsigned __int8)ndisWaitForExternalDriver(a2, *((_DWORD *)this + 41)) )
      return;
    *((_BYTE *)this + 264) = 1;
  }
  ndisWaitForKernelObject(a2);
}
