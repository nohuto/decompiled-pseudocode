__int64 __fastcall HasRawKeyboardPerThreadRegistration(const struct tagPROCESSINFO *a1)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)a1 + 40); ; i = *(_QWORD *)(i + 664) )
  {
    if ( !i )
      return 0LL;
    if ( (*(_DWORD *)(i + 1272) & 0x200000) != 0 )
      break;
  }
  return 1LL;
}
