__int64 __fastcall KiIntSteerVerifyDestination(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(a1 + 72) == *(_WORD *)(a2 + 8) && *(_QWORD *)a2 )
    return *(_QWORD *)(a1 + 64) != (*(_QWORD *)a2 | *(_QWORD *)(a1 + 64)) ? 0xC000000D : 0;
  else
    return 3221225485LL;
}
