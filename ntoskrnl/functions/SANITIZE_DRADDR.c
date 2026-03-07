unsigned __int64 __fastcall SANITIZE_DRADDR(unsigned __int64 a1, int a2)
{
  if ( a2 && a1 > 0x7FFFFFFEFFFFLL )
    return 0LL;
  return a1;
}
