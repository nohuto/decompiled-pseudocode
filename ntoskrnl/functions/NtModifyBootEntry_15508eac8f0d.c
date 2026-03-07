__int64 __fastcall NtModifyBootEntry(const void *a1)
{
  if ( dword_140C316F0 == 2 )
    return ExpSetBootEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
