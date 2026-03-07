__int64 __fastcall ENTRYOBJ::bOwnedBy(ENTRYOBJ *this, int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 14) )
  {
    if ( ((*((_DWORD *)this + 2) ^ a2 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
      return 1LL;
  }
  return result;
}
