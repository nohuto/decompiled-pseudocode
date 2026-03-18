/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x1402E02F0
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1406BD260 (_PnpDispatchInstallerClass.c)
 *     _PnpDispatchDeviceInterface @ 0x140785470 (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchDevice @ 0x1407855F0 (_PnpDispatchDevice.c)
 *     _PnpDispatchInterfaceClass @ 0x140787620 (_PnpDispatchInterfaceClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpMapCmStatusToDispatchStatus(unsigned int a1)
{
  if ( a1 != -1073741810 )
  {
    if ( a1 == -1073741767 )
      return 3221225523LL;
    if ( a1 != -1073741766 )
    {
      if ( a1 == -1073741637 )
        return 3221226021LL;
      if ( a1 != -1073741632 && a1 != -1073741127 )
        return a1;
    }
  }
  return 3221225524LL;
}
