/*
 * XREFs of BgkDestroy @ 0x140AEBA68
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A7F10 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140B99F84 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x14054CBAC (BgkpDisableConsole.c)
 *     BgDisplayProgressIndicator @ 0x140AE9040 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x140AE907C (BgDisplayBackgroundUpdate.c)
 *     BgConsoleDestroyInterface @ 0x140AEC504 (BgConsoleDestroyInterface.c)
 *     BgLibraryDestroy @ 0x140AEE2D8 (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140C6A808 )
    return 0LL;
  BgkpDisableConsole();
  byte_140C6A80A = 0;
  byte_140C6A808 = 0;
  BgDisplayProgressIndicator(0);
  byte_140C6A809 = 0;
  BgDisplayBackgroundUpdate(0);
  byte_140C6A7F0 = 0;
  byte_140C6A800 = 0;
  if ( qword_140C6A7E8 )
  {
    BgConsoleDestroyInterface();
    qword_140C6A7E8 = 0LL;
  }
  return BgLibraryDestroy();
}
