__int64 __fastcall NtModifyDriverEntry(const void *a1)
{
  if ( dword_140C316F0 == 2 )
    return ExpSetDriverEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
