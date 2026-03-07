__int64 __fastcall log_xstr(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = a3;
  if ( a2 < 0x7FFF )
    *(_WORD *)(a1 + 8) = a2;
  else
    *(_WORD *)(a1 + 8) = 0x7FFF;
  return a1;
}
