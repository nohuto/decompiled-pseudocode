__int64 __fastcall MiInitializePartitions(int a1)
{
  if ( !a1 )
  {
    qword_140C67000 = 0LL;
    qword_140C67008 = 0LL;
    qword_140C67028 = (PRTL_BITMAP)&dword_140C67030;
    dword_140C67030 = 1;
    byte_140C67010 |= 1u;
    qword_140C67020 = (__int64)&qword_140C67018;
    qword_140C67018 = (__int64)&qword_140C67018;
    qword_140C67040 = (__int64)MiSystemPartition;
    qword_140C67048 = (__int64)&qword_140C67040;
    qword_140C67038 = (__int64)&byte_140C67010;
  }
  return 1LL;
}
