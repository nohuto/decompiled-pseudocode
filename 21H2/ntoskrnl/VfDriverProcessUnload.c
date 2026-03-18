/*
 * XREFs of VfDriverProcessUnload @ 0x1405FEB18
 * Callers:
 *     IopLoadUnloadDriver @ 0x1406DE800 (IopLoadUnloadDriver.c)
 * Callees:
 *     VfDriverRemoveAllDifVerification @ 0x1405FEBA0 (VfDriverRemoveAllDifVerification.c)
 */

__int64 __fastcall VfDriverProcessUnload(__int64 a1)
{
  __int64 result; // rax

  if ( VfXdvEnabled )
  {
    result = ViDriverXDVBase;
    if ( *(_QWORD *)(a1 + 24) == ViDriverXDVBase )
    {
      if ( VfDifRunningWithoutReboot || (VfOptionFlags & 0x800) != 0 )
        result = VfDriverRemoveAllDifVerification();
      ViFnExtensionHiberFunc = 0LL;
      ViFnXdvNotifyExtensions = 0LL;
      ViFnXdvQueryDispatchTable = 0LL;
      ViXdvTipUtils = 0LL;
      ViFnXdvLoadDifPlugins = 0LL;
      ViFnAutoFailInject = 0LL;
      ViDriverXDVBase = 0LL;
      ViDriverXDVImageSize = 0;
      VfXdvEnabled = 0;
    }
  }
  return result;
}
