/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x1402653E0
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x14063B450 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchDeviceInterface @ 0x14063C280 (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchDevice @ 0x14063C410 (_PnpDispatchDevice.c)
 *     _PnpDispatchInstallerClass @ 0x14073EDE0 (_PnpDispatchInstallerClass.c)
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
