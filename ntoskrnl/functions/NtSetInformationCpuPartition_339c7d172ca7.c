__int64 __fastcall NtSetInformationCpuPartition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int64 a7)
{
  __int64 v7; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( a7 < 0x7FFFFFFF0000LL )
      v7 = a7;
    *(_DWORD *)v7 = *(_DWORD *)v7;
  }
  return 3221225474LL;
}
