__int64 NtCompareSigningLevels()
{
  int v0; // eax

  v0 = 0;
  if ( qword_140C37600 )
    v0 = ((__int64 (*)(void))qword_140C37600)();
  return v0 == 0 ? 0xC0000428 : 0;
}
