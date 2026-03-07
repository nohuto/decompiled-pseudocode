__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v10; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140C6A809 || byte_140C6A7F0 )
  {
    byte_140C6A809 = 0;
    byte_140C6A7F0 = 0;
    BgDisplayFade();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(qword_140C6A7E8 + 32))(a1, a2, a3, a4, a5);
  BgkpReleaseConsole();
  return v10;
}
