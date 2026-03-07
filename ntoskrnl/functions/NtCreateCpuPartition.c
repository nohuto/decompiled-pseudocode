__int64 __fastcall NtCreateCpuPartition(unsigned __int64 a1)
{
  __int64 v1; // rdx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v1 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v1 = a1;
    *(_QWORD *)v1 = *(_QWORD *)v1;
  }
  return 3221225474LL;
}
