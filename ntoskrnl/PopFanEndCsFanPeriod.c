void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140C3C5D0;
  if ( qword_140C3C5D0 < (unsigned __int64)qword_140C3C5D8 )
    v0 = qword_140C3C5D8;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140C3C5D8) / 0x989680uLL);
}
