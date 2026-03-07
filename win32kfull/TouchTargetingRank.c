__int64 __fastcall TouchTargetingRank(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  __int64 result; // rax
  int v9; // ecx

  v4 = abs32(a2 - a1) + abs32(HIDWORD(a2) - HIDWORD(a1));
  if ( (int)a1 <= *a3 || (int)a1 >= a3[2] )
    v5 = a4 - a2;
  else
    v5 = HIDWORD(a2) - HIDWORD(a4);
  v6 = abs32(v5);
  if ( v6 > 20 )
    LOWORD(v6) = 20;
  v7 = (unsigned __int16)v6;
  result = 4093LL;
  v9 = v4 + v7;
  if ( v9 < 4093 )
    return (unsigned __int16)v9;
  return result;
}
