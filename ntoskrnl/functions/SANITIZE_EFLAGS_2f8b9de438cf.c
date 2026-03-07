__int64 __fastcall SANITIZE_EFLAGS(int a1, int a2)
{
  if ( a2 )
    return a1 & 0x210DD5 | 0x200;
  else
    return a1 & 0x250FD5;
}
