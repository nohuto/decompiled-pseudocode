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
